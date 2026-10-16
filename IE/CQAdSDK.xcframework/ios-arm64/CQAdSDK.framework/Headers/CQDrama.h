//
//  CQDrama.h
//  CQAdSDK
//
//  Created by hanxiaoyu on 2025/8/18.
//

#import <UIKit/UIKit.h>

@class BCNativeExpressAdCollectionViewCell;

NS_ASSUME_NONNULL_BEGIN

@interface CQDramaGoodItemsModel : NSObject
@property (nonatomic) NSInteger goodsId;
@property (nonatomic) NSInteger goodsType;
@property (nonatomic, copy) NSString * _Nonnull goodsTitle;
@property (nonatomic) double goodsPrice;
@property (nonatomic) double goodsPriceYuan;
@property (nonatomic, copy) NSString * _Nonnull describeText;
@property (nonatomic) NSInteger vipValidDays;
@property (nonatomic) NSInteger unlockEpisodeNum;
@property (nonatomic, copy) NSString * _Nonnull specialText;
@property (nonatomic) NSInteger isDefault;
@property (nonatomic) NSInteger payStrategyId;
@property (nonatomic) NSInteger goodsCoin;
@property (nonatomic, copy) NSString * _Nonnull goodsCoinName;
@property (nonatomic) NSInteger videoId;
@property (nonatomic) NSInteger episodeNo;
@property (nonatomic) NSInteger payMethod;
@end

@interface CQDramaFavoriteListModel : NSObject
@property (nonatomic) NSInteger video_id;
@property (nonatomic) NSInteger video_total;
@property (nonatomic, copy) NSString * _Nonnull video_title;
@property (nonatomic, copy) NSString * _Nonnull logo_img;
@property (nonatomic) NSInteger episode_no;
@property (nonatomic, copy) NSString * _Nonnull last_play_time;
@property (nonatomic, copy) NSString * _Nonnull corner_label_name;
@property (nonatomic) NSInteger is_new_video;
@property (nonatomic) NSInteger last_episode_no;
@end

@interface CQDramaUnlockVideoListModel : NSObject
@property (nonatomic) NSInteger episode_no;
@property (nonatomic, copy) NSString * _Nonnull last_play_time;
@property (nonatomic, copy) NSString * _Nonnull logo_img;
@property (nonatomic) NSInteger video_id;
@property (nonatomic, copy) NSString * _Nonnull video_title;
@property (nonatomic) NSInteger video_total;
@property (nonatomic) NSInteger max_unlock_episode_no;
@end


@interface CQDramaUnlockVideoModel : NSObject
@property (nonatomic) NSInteger page;
@property (nonatomic) NSInteger page_size;
@property (nonatomic) NSInteger total;
@property (nonatomic) NSInteger pages;
@property (nonatomic, copy) NSArray<CQDramaUnlockVideoListModel *> * _Nonnull list;
@end

@interface CQDramaUserInfosModel : NSObject
@property (nonatomic, copy) NSString * _Nonnull user_id;
@property (nonatomic) NSInteger expire_time;
@end

@interface CQDramaOrderListModel : NSObject
@property (nonatomic, copy) NSString * _Nonnull order_no;
@property (nonatomic, copy) NSString * _Nonnull goods_name;
@property (nonatomic) CGFloat paid_fee;
@property (nonatomic) NSInteger pay_state;
@property (nonatomic, copy) NSString * _Nonnull pay_time;
@property (nonatomic) CGFloat refund_fee;
@end

@interface CQDramaPayOrderModel : NSObject
@property (nonatomic) NSInteger page;
@property (nonatomic) NSInteger page_size;
@property (nonatomic) NSInteger total;
@property (nonatomic) NSInteger pages;
@property (nonatomic, copy) NSArray<CQDramaOrderListModel *> * _Nonnull list;
@end

@interface CQDramaGoodListModel : NSObject
@property (nonatomic) NSInteger videoId;
@property (nonatomic) NSInteger episodeNo;
@property (nonatomic) NSInteger goodsId;
@property (nonatomic) NSInteger goodsType;
@property (nonatomic, copy) NSString * _Nonnull goodsTitle;
@property (nonatomic) double goodsPrice;
@property (nonatomic) double goodsPriceYuan;
@property (nonatomic, copy) NSString * _Nonnull describeText;
@property (nonatomic) NSInteger vipValidDays;
@property (nonatomic) NSInteger unlockEpisodeNum;
@property (nonatomic, copy) NSString * _Nonnull specialText;
@property (nonatomic) NSInteger isDefault;
@property (nonatomic) NSInteger payStrategyId;
@property (nonatomic) NSInteger goodsCoin;
@property (nonatomic, copy) NSString * _Nonnull goodsCoinName;
@property (nonatomic) NSInteger payMethod;
@property (nonatomic, copy) NSString * _Nonnull appleGoodsId;
@property (nonatomic, copy) NSString * _Nonnull googleGoodsId;
@property (nonatomic) NSInteger currencyId;
@property (nonatomic, copy) NSString * _Nonnull currencyName;
@property (nonatomic, copy) NSString * _Nonnull currencyCode;
@property (nonatomic, copy) NSString * _Nonnull currencySymbol;
- (nonnull instancetype)initWithGoodsId:(NSInteger)goodsId goodsType:(NSInteger)goodsType goodsTitle:(NSString * _Nonnull)goodsTitle goodsPrice:(double)goodsPrice goodsPriceYuan:(double)goodsPriceYuan describeText:(NSString * _Nonnull)describeText vipValidDays:(NSInteger)vipValidDays unlockEpisodeNum:(NSInteger)unlockEpisodeNum specialText:(NSString * _Nonnull)specialText isDefault:(NSInteger)isDefault payStrategyId:(NSInteger)payStrategyId goodsCoin:(NSInteger)goodsCoin goodsCoinName:(NSString * _Nonnull)goodsCoinName payMethod:(NSInteger)payMethod videoId:(NSInteger)videoId episodeNo:(NSInteger)episodeNo appleGoodsId:(NSString * _Nonnull)appleGoodsId googleGoodsId:(NSString * _Nonnull)googleGoodsId currencyId:(NSInteger)currencyId currencyName:(NSString * _Nonnull)currencyName currencyCode:(NSString * _Nonnull)currencyCode currencySymbol:(NSString * _Nonnull)currencySymbol;
@end



typedef NS_ENUM(NSInteger, CQDramaAdPlatformType) {
    CQDramaAdPlatformTypeGdt = 1,
    CQDramaAdPlatformTypeCsj = 3,
    CQDramaAdPlatformTypeMsaas = 4,
    CQDramaAdPlatformTypeKs = 5,
    CQDramaAdPlatformTypeCustom = 6,

};

typedef NS_ENUM(NSInteger, CQDramaAdType) {
    CQDramaAdTypeBanner = 0,
    CQDramaAdTypeReward = 1,
    CQDramaAdTypeNativeExpress = 2,
    CQDramaAdTypeFullScreen = 3,
};

/// 设置开发环境
typedef NS_ENUM(NSInteger, CQDramaEnvType) {
/// 测试环境
  CQDramaEnvTypeDebug = 0,
/// 生产环境
  CQDramaEnvTypeRelease = 1,
};

typedef NS_ENUM(NSInteger, CQDramaLanguageType) {
    CQDramaLanguageTypeCn = 1,
    CQDramaLanguageTypeEn = 2,
    CQDramaLanguageTypeJa = 4,
    CQDramaLanguageTypeEs = 5,
    CQDramaLanguageTypeKo = 7,
    CQDramaLanguageTypeVi = 8,
    CQDramaLanguageTypeCt = 9,
};

typedef NS_ENUM(NSInteger, CQDramaLaunchType) {
  CQDramaLaunchTypeIap = 1,
  CQDramaLaunchTypeIaa = 2,
};

/// 广告显示策略 1、竞价策略（不支持穿山甲） 2、轮循策略
typedef NS_ENUM(NSInteger, CQDramaStrategyType) {
  CQDramaStrategyTypeBidding = 1,
  CQDramaStrategyTypeRound = 2,
};

typedef NS_ENUM(NSInteger, CQDramaTabPageType) {
  CQDramaTabPageTypeCollection = 0,
  CQDramaTabPageTypeAlbum = 1,
  CQDramaTabPageTypeRecommend = 2,
};


typedef NS_ENUM(NSInteger, CQDramaUnLockType) {
  CQDramaUnLockTypePayment = 0,
  CQDramaUnLockTypeReward = 1,
};

/// 关闭SDK支付功能：0：关闭 1：开启
typedef NS_ENUM(NSInteger, CQDramaPaymentStatus) {
    CQDramaPaymentStatusOff = 0,
    CQDramaPaymentStatusOn = 1,
};


/// 显示插屏广告的位置页
typedef NS_ENUM(NSInteger, CQDramaCustomAdPageType) {
    CQDramaCustomAdPageTypeRecommendPage = 0,
    CQDramaCustomAdPageTypeNewRecommendPage = 1,
    CQDramaCustomAdPageTypePlayPage = 2,
    CQDramaCustomAdPageTypeFavorite = 3,
    CQDramaCustomAdPageTypeDramas = 4,
};

typedef NS_ENUM(NSInteger, CQDramaAdStatues) {
    CQDramaAdStatuesSuccess = 0,
    CQDramaAdStatuesClose = 1,
    CQDramaAdStatuesFailed = 2,
};

typedef NS_ENUM(NSInteger, CQDramaPlayerStatus) {
    CQDramaPlayerStatusPlay = 0,
    CQDramaPlayerStatusPause = 1,
};

/// 商品列表
typedef NS_ENUM(NSInteger, CQDramaGoodListType) {
    CQDramaGoodListTypeDefaults = 0,
    CQDramaGoodListTypeHalf = 1,
    CQDramaGoodListTypeCustom = 2,
};

@protocol CQDramaCustomAdDelegate <NSObject>
- (void)bc_customAdRegisterSDKWithAppId:(NSString *)appId;
- (void)bc_customAdLoadBannerWithViewController:(UIViewController *)viewController container:(UIView *)container placementId:(NSString *)placementId pageType:(CQDramaCustomAdPageType)pageType onClose:(void(^)(void))onClose onShow:(void(^)(NSInteger))onShow;
- (void)bc_customAdLoadNativeExpressWithViewController:(UIViewController *)viewController container:(BCNativeExpressAdCollectionViewCell *)container pageType:(CQDramaCustomAdPageType)pageType placementId:(NSString *)placementId completion:(void(^)(UIView *, NSString *, NSError * _Nullable))completion;
- (void)bc_customAdLoadFullScreenWithViewController:(UIViewController *)viewController placementId:(NSString *)placementId pageType:(CQDramaCustomAdPageType)pageType onShow:(void(^)(void))onShow onClose:(void(^)(void))onClose onFailed:(void(^)(void))onFailed;
- (void)bc_customAdLoadRewardFrom:(UIViewController *)viewController placementId:(NSString *)placementId taskId:(NSString *)taskId onClose:(void(^)(void))onClose onShow:(void(^)(NSInteger))onShow;
@end

@interface CQDrama : NSObject

/// 退出登录
+ (void)logout;

/// 进入首页
/// \param vc 来源控制器
///
/// \param pageType page 类型
///
+ (void)showSDKFrom:(UIViewController * _Nonnull)vc pageType:(CQDramaTabPageType)pageType;

/// 进入在追
/// \param vc 来源控制器
///
+ (void)showCollectionPageFrom:(UIViewController * _Nonnull)vc;
/// 进入剧单
/// \param vc 来源控制器
///
+ (void)showAlbumListPageFrom:(UIViewController * _Nonnull)vc;
/// 进入推荐
/// \param vc 来源控制器
///
+ (void)showRecommendPageFrom:(UIViewController * _Nonnull)vc;
/// 获取首页控制器
/// \param pageType page 类型
///
+ (UIViewController * _Nonnull)getHomePageWithPageType:(CQDramaTabPageType)pageType topOffset:(CGFloat)topOffset;

/// 获取在追页控制器
///
+ (UIViewController * _Nonnull)getCollectionPageWithTopOffset:(CGFloat)topOffset;
/// 跳转到在追页控制器, 并设置播放页顶部工具栏Y轴偏移量
/// \param vc 来源控制器
///
/// \param topOffset 在追页偏移量
///
/// \param topTabBarOffsetY 设置播放页顶部工具栏的偏移量（优先级高于BCLoginManager.shared.playerTopBarOffsetY）
///
+ (void)toCollectionViewControllerFrom:(UIViewController * _Nonnull)vc topOffset:(CGFloat)topOffset topTabBarOffsetY:(CGFloat)topTabBarOffsetY;
/// 获取剧单页控制器
///
+ (UIViewController * _Nonnull)getAlbumListPageWithTopOffset:(CGFloat)topOffset;
/// 跳转到剧单页控制器, 并设置播放页顶部工具栏Y轴偏移量
/// \param topOffset 剧单页偏移量
///
/// \param topTabBarOffsetY 设置播放页顶部工具栏的偏移量（优先级高于BCLoginManager.shared.playerTopBarOffsetY）
///
/// \param vc 来源控制器
///
+ (void)toAlbumListViewControllerFrom:(UIViewController * _Nonnull)vc topOffset:(CGFloat)topOffset topTabBarOffsetY:(CGFloat)topTabBarOffsetY;

/// 获取剧单页控制器, 并设置播放页顶部工具栏Y轴偏移量和横向偏移量
/// \param topOffset 剧单页偏移量
///
/// \param hOffset 横向偏移量
///
/// \param topTabBarOffsetY 设置播放页顶部工具栏的偏移量（优先级高于BCLoginManager.shared.playerTopBarOffsetY）
///
/// \param vc 来源控制器
///
+ (UIViewController * _Nonnull)toDramaMenuListViewControllerFrom:(UIViewController * _Nonnull)vc hOffset:(CGFloat)hOffset topOffset:(CGFloat)topOffset topTabBarOffsetY:(CGFloat)topTabBarOffsetY;


/// 获取推荐页控制器
///
+ (UIViewController * _Nonnull)getRecommendPageWithTopOffset:(CGFloat)topOffset;
/// 获取推荐页控制器
/// \param vc 外层导航栈-用于点击“看全集”使用的导航栈
///
/// \param topOffset 顶部偏移量
///
///
/// returns:
/// 目标控制
+ (UIViewController * _Nonnull)goToRecommendViewControllerFrom:(UIViewController * _Nonnull)vc topOffset:(CGFloat)topOffset;

/// 跳转到推荐页, 并设置播放页顶部工具栏Y轴偏移量
/// \param vc 来源控制器
///
/// \param topOffset 顶部偏移量
///
/// \param topTabBarOffsetY 设置播放页顶部工具栏的偏移量（优先级高于BCLoginManager.shared.playerTopBarOffsetY）
///
+ (void)toRecommendVcFrom:(UIViewController * _Nonnull)vc topOffset:(CGFloat)topOffset topTabBarOffsetY:(CGFloat)topTabBarOffsetY;
/// 设置国际化多语言
/// \param type 语言地区类型
///
+ (void)setLanguageWithType:(CQDramaLanguageType)type;

/// 设置视频播放回调
/// \param onStart 开始的回调
///
/// \param onProgress 进度的回调: 参数1：剧集索引，参数2: pageType，参数3：获取当前播放时间 参数4：获取视频总时长 参数5：可播放时长
///
/// \param onEnd 结束的回调
///
/// \param onUnlock 解锁的回调
///
/// \param onReward 奖励的回调
///
+ (void)setVideoPlayCallBackOnStart:(void (^ _Nullable)(NSDictionary<NSString *, id> * _Nonnull))onStart onProgress:(void (^ _Nullable)(NSString * _Nonnull, NSInteger, NSInteger, NSInteger, NSInteger))onProgress onEnd:(void (^ _Nullable)(NSDictionary<NSString *, id> * _Nonnull))onEnd onUnlock:(void (^ _Nullable)(NSDictionary<NSString *, id> * _Nonnull))onUnlock onReward:(void (^ _Nullable)(NSDictionary<NSString *, id> * _Nonnull))onReward;

/// 设置开发环境
/// 若是手动调用，需要在初始化方法前调用
/// \param type 环境类型：0：生产环境， 1：开发环境
///
+ (void)setEnvWithType:(CQDramaEnvType)type;
/// 当短剧SDK里面选择商品点击商品时，调用对应的回调
/// \param onPayment 商品参数JSON
///
+ (void)setPaymentCallbackOnPayment:(void (^ _Nullable)(NSDictionary<NSString *, id> * _Nonnull))onPayment;
/// 支付设置的回调
/// \param onPaySuccess 支付成功后的回调
///
+ (void)setPaymentOnPaySuccess:(void (^ _Nullable)(NSDictionary<NSString *, id> * _Nonnull))onPaySuccess;

/// 当付款成功后调用此方法通知短剧sdk验证订单付款状态
///
+ (void)paymentResultVerifyOnPayVerify:(void (^ _Nullable)(NSInteger))onPayVerify;
/// 查询订单支付状态
/// \param orderNo 订单号
///
/// \param retryCount 重试次数
///
///
/// returns:
/// 支付状态
+ (void)verifyPaymentResultWithOrderNo:(NSString * _Nonnull)orderNo retryCount:(NSInteger)retryCount complet:(void (^ _Nonnull)(NSInteger))complet;
/// 取消付款，当用户取消支付时调用此方法。
/// \param onPayCancle 取消支付的回调
///
+ (void)paymentCancelOnPayCancle:(void (^ _Nullable)(void))onPayCancle;
/// 设置广告加载的回调
/// \param onLoaded 加载成功后的回调
///
/// \param onClicked 广告被点击的回调
///
/// \param onEffective 广告发放奖励后的回调（仅有激励视频有奖励的回调）
///
/// \param onClosed 广告关闭后的回调
///
///
+ (void)loadVideoAdCallbackOnLoaded:(void (^ _Nullable)(CQDramaAdType, NSString * _Nonnull, NSString * _Nonnull, NSString * _Nonnull))onLoaded onClicked:(void (^ _Nullable)(CQDramaAdType))onClicked onEffective:(void (^ _Nullable)(CQDramaAdType, NSInteger))onEffective onClosed:(void (^ _Nullable)(CQDramaAdType))onClosed onFailed:(void (^ _Nullable)(CQDramaAdType, NSError * _Nonnull))onFailed;
/// 设置广告加载的回调
/// \param onLoaded 加载成功后的回调
///
+ (void)loadAdvSuccessOnLoaded:(void (^ _Nullable)(CQDramaAdType, NSString * _Nonnull, NSString * _Nonnull, NSString * _Nonnull))onLoaded;

/// 设置广告加载的回调
/// \param onClicked 广告被点击的回调
///
+ (void)loadAdvOnClickedOnClicked:(void (^ _Nullable)(CQDramaAdType))onClicked;
/// 设置广告加载的回调
/// \param onEffective 广告发放奖励后的回调（仅有激励视频有奖励的回调）
///
+ (void)loadAdvEffectiveOnEffective:(void (^ _Nullable)(CQDramaAdType, NSInteger))onEffective;
/// 设置广告加载的回调
/// \param onClosed 广告关闭后的回调
///
+ (void)loadAdvOnClosedOnClosed:(void (^ _Nullable)(CQDramaAdType))onClosed;
/// 设置广告加载的回调
/// \param onFailed 广告加载失败后的回调
///
+ (void)loadAdvOnFailedOnFailed:(void (^ _Nullable)(CQDramaAdType, NSError * _Nonnull))onFailed;
/// 设置广告加载的回调
/// \param onFinished 广告加载完成的回调
///
+ (void)loadAdvOnShowFinishedOnFinished:(void (^ _Nullable)(NSInteger))onFinished;
/// 设置广告加载的回调
/// \param onRender 信息流广告渲染是否成功的回调
///
+ (void)loadNativeExpressRenderOnRender:(void (^ _Nullable)(CQDramaAdType, BOOL))onRender;
/// 设置默认播放速度，正常播放传1X，默认为1.25X
/// 支持 0.75X、1.0X、1.25X、1.5X、2.0X
/// \param videoId 剧ID
///
/// \param rate 播放速率
///
+ (void)setVideoDefaultRateWithVideoId:(NSInteger)videoId rate:(double)rate;
/// 剧集解锁是否成功的回调
/// \param onUnLock 验证剧集是否解锁后的回调
///
+ (void)onUnLockOnUnLock:(void (^ _Nullable)(CQDramaUnLockType, NSInteger))onUnLock;

/// 广告播放完成，奖励发放回调
/// \param onFinish 广告播放完成后发放奖励的回调
///
+ (void)onAdDidFinishOnFinish:(void (^ _Nullable)(NSInteger))onFinish;
/// 开始激励视频
/// \param vc 来源控制器
///
/// \param videoId 短剧Id
///
/// \param eposodeNo 剧集索引
///
/// \param placementId 广告位ID
///
/// \param extra 扩展信息
///
/// \param onStartReward 开始激励视频的回调
///
///
+ (void)startRewardVideoWithForm:(UIViewController * _Nonnull)vc videoId:(NSInteger)videoId eposodeNo:(NSInteger)eposodeNo placementId:(NSString * _Nonnull)placementId extra:(NSDictionary<NSString *, id> * _Nonnull)extra onStartReward:(void (^ _Nullable)(CQDramaAdPlatformType, CQDramaAdType))onStartReward;
/// 进入播放页
/// \param vc 来源控制器
///
/// \param videoId 剧ID
///
/// \param lastEpisodeNo 播放的剧集索引
///
/// \param offsetY 播放页顶部工具栏的Y轴偏移量
///
+ (void)jumpToVideoPlayControllerFrom:(UIViewController * _Nonnull)vc videoId:(NSInteger)videoId lastEpisodeNo:(NSInteger)lastEpisodeNo offsetY:(CGFloat)offsetY;
/// 进入剧单更多-剧列表
/// \param vc 来源控制器
///
/// \param menuId 剧单ID
///
+ (void)jumpToVideoMoreDetailListFrom:(UIViewController * _Nonnull)vc menuId:(NSInteger)menuId menuName:(NSString * _Nonnull)menuName;
/// 收藏记录-(需要先初始化，确保已登录SDK)
/// \param page 页数索引
///
/// \param pageSize 每页多少条收藏记录
/// 备注：返回值1：数据模型类，返回值2：error
///
+ (void)getCollectionRecordsWithPage:(NSInteger)page pageSize:(NSInteger)pageSize comolete:(void (^ _Nonnull)(NSArray<CQDramaFavoriteListModel *> * _Nullable, NSString * _Nullable))comolete;
/// 获取播放剧集列表接口
/// \param page 页数索引
///
/// \param pageSize 每页多少条收藏记录
/// 备注：返回值1：数据模型类，返回值2：error
///
+ (void)getHistoryListWithPage:(NSInteger)page pageSize:(NSInteger)pageSize comolete:(void (^ _Nonnull)(NSArray<CQDramaFavoriteListModel *> * _Nullable, NSString * _Nullable))comolete;
/// 是否隐藏播放页的点赞功能
/// \param isHidden 是否隐藏（默认：不隐藏）
///
+ (void)hideTheLikeActionWithIsHidden:(BOOL)isHidden;
/// 是否隐藏播放页收藏功能
/// \param isHidden 是否隐藏（默认：不隐藏）
///
+ (void)hideTheCollectionActionWithIsHidden:(BOOL)isHidden;
/// 设置播放器顶部工具栏的Y轴偏移量， 备注：优先级低于直接进入控制器传入的topBarOffsetY
/// 初始化的时候配置，退出登录的时候会被重置为默认
/// \param offsetY Y轴偏移量
///
+ (void)setPlayerTopTabBarOffsetYWithOffsetY:(CGFloat)offsetY;
/// 关闭SDK支付功能 1： 开启  0：关闭
/// 初始化的时候配置，退出登录的时候会被重置为默认
/// \param payment 是否需要关闭SDK支付功能(默认： 开启)
///
+ (void)setPayActionStatusWithPayment:(CQDramaPaymentStatus)payment;
/// 获取SDK版本号（SDK没有特殊要求版本号，这里做便于版本管理的对外函数）
///
/// returns:
/// 版本号
+ (NSString * _Nonnull)getSDKVersion;
/// 进入新版SDK的根控制器（默认选中首页）
/// \param vc 导航栈
///
/// \param selectedIndex 默认显示第几个导航器（默认仅支持0：首页， 1： 为你推荐页， 2： 我的剧单页）
///
+ (UITabBarController * _Nonnull)goToRootViewControllerWithForm:(UIViewController * _Nonnull)vc selectedIndex:(NSInteger)selectedIndex;
/// 获取新版推荐页
/// \param vc 外层控制的导航栈
///
/// \param toolOffsetY 播放页顶部工具条的Y轴偏移量
///
///
/// returns:
/// 推荐页(备注：与老版本的推荐页是分开的，目的是防止后续推荐页更改样式，同时SDK保留和兼容老版本推荐页)
+ (UIViewController * _Nonnull)getRecommendViewControllerWithForm:(UIViewController * _Nonnull)vc toolOffsetY:(CGFloat)toolOffsetY;
/// 获取新版我的剧集页
/// \param vc 导航栈控制器源
///
/// \param isHiddenNav 是否隐藏SDK自带导航条
///
/// \param toolOffsetY 播放页顶部工具条的Y轴偏移量
///
/// \param contentInsert 内边距
///
///
/// returns:
/// 我的剧集页 推荐页(备注：与老版本的剧集页是分开的，目的是防止后续剧集页更改样式，同时SDK保留和兼容老版本剧集页)
+ (UIViewController * _Nonnull)getDramasViewControllerWithForm:(UIViewController * _Nonnull)vc isHiddenNav:(BOOL)isHiddenNav toolOffsetY:(CGFloat)toolOffsetY isHddenEmptyAction:(BOOL)isHddenEmptyAction contentInsert:(UIEdgeInsets)contentInsert;
/// 获取新版首页
/// \param vc 导航栈控制器源
///
///
/// returns:
/// 首页样式改版
+ (UIViewController * _Nonnull)getHomeViewControllerWithForm:(UIViewController * _Nonnull)vc;
/// 自定义播放页剧集封面图占位图 (默认： 不显示占位图)
/// \param imageName 播放器封面占位图URL（若imageName为空：则不显示默认占位图,  若imageName不为空，则显示自定义占位图）
/// 备注：需要将自定义占位图片添加到BCDramaLib的images目录下
///
+ (void)setPlayerCustomCoverPlaceholderImageWithImageName:(NSString * _Nullable)imageName;
/// 进入搜索页
/// \param vc 导航栈
///
+ (void)toSearchViewControllerWithForm:(UIViewController * _Nonnull)vc;
/// 点击商品列表的支付回调；备注：若使用自定义的支付方式实现，支付完成后必须调用onPayComplete函数进行订单的查询校验，否则无法解锁剧集
/// \param isCustomPayment 是否使用自定义支付方式（默认：SDK的支付宝、微信等现金支付）, 备注：自定义支付方式一定要设置为true
///
/// \param onPay 点击商品的回调
///
+ (void)onPaymentListenerWithIsCustomPayment:(BOOL)isCustomPayment onPay:(void (^ _Nullable)(NSString * _Nonnull, CQDramaGoodItemsModel * _Nonnull, UIViewController * _Nonnull))onPay;
/// 自定义支付方式支付完成后的订单校验；备注：自定义支付方式支付完成后必须调用该函数进行订单的校验，否则无法解锁剧集
/// \param orderNo 订单号
///
/// \param videoId 剧ID
///
/// \param episodeNo 剧集索引
///
+ (void)onPayCompleteWithOrderNo:(NSString * _Nonnull)orderNo videoId:(NSInteger)videoId episodeNo:(NSInteger)episodeNo;
/// 防止外层即使离开播放页，没有调用viewDidDisappear这个生命周期函数，导致短剧没有暂停的问题
+ (void)pause;
+ (void)play;
/// 设置自定义广告 delegate（新版统一入口，替代旧版各类 block 回调）
+ (void)setCustomAdDelegate:(nullable id<CQDramaCustomAdDelegate>)delegate;
/// 自定义广告的状态改变监听
/// \param adType 广告类型
///
/// \param status 广告状态
///
/// \param pageType 来源页
///
/// \param isEffective 是否获得奖励（激励视频专属）
///
/// \param placementId 代码位
///
/// \param adView 广告View（不需要的就不传，具体看示例）
///
/// \param adContainerView 展示广告的容器
///
+ (void)customAdStatusChangedWithPlacementId:(NSString * _Nonnull)placementId adType:(CQDramaAdType)adType status:(CQDramaAdStatues)status pageType:(CQDramaCustomAdPageType)pageType isEffective:(BOOL)isEffective adView:(UIView * _Nonnull)adView adContainerView:(UIView * _Nonnull)adContainerView;
/// 监听短剧的收藏状态
/// \param videoFavorite 收藏状态（回调参数1：VideoId  回调参数2：收藏状态（ 1-收藏，0-取消收藏））
///
+ (void)getVideoFavoriteStatusWithVideoFavorite:(void (^ _Nullable)(NSInteger, NSInteger))videoFavorite;
/// 监听短剧的点赞状态
///
+ (void)getVideoLikesStatusWithVideoLikes:(void (^ _Nullable)(NSInteger, NSInteger))videoLikes;
/// 获取用户信息
/// \param comolete 参数1：用户信息的回调 参数2：错误信息error
///
+ (void)getUserInfosWithComolete:(void (^ _Nonnull)(CQDramaUserInfosModel * _Nullable, NSString * _Nullable))comolete;
/// 获取已解锁的剧集列表
/// \param comolete 参数1：已解锁的剧集列表 参数2：错误信息error
///
/// \param page 页码
///
/// \param pageSize 页数
///
+ (void)getUnlockVideoListWithPage:(NSInteger)page pageSize:(NSInteger)pageSize comolete:(void (^ _Nonnull)(CQDramaUnlockVideoModel * _Nullable, NSString * _Nullable))comolete;
/// 暂停播放器继续缓冲和播放
+ (void)pausePlayerBufferingAndPlay;
/// 监听播放器的状态
/// \param onPlayerStatus 播放器的状态回调（仅有播放和暂停，若需要其他，请反馈给我）
///
+ (void)playStatusOnPlayerStatus:(void (^ _Nullable)(CQDramaPlayerStatus))onPlayerStatus;
/// 设置短剧是否静音
/// \param isMute 是否静音
///
+ (void)setPlayerIsMuteWithIsMute:(BOOL)isMute;
/// 监听播放器是否加载成功的回调
/// \param onPlayerLoadStatus 回调状态 - 参数1：剧ID（VideoId），参数2：剧索引（episodeNo），参数3：剧是否加载成功（eventId=-1000（剧列表获取失败，一般都是剧下架导致播放失败），eventId=2004（播放事件: 已经开始播放），负数值（除了（-1000））（点播错误: 当eventId值小于0就是播放器点播失败的错误））
///
+ (void)playerLoadStatusListenerOnPlayerLoadStatus:(void (^ _Nullable)(NSInteger, NSInteger, NSInteger))onPlayerLoadStatus;
/// 是否显示分享操作
/// \param isHidden 是否显示分享操作（默认隐藏）
///
+ (void)hiddenTheShareActionWithIsHidden:(BOOL)isHidden;
/// 监听分享操作的回调
/// \param onShareVideoCallBack 分享操作回调
///
+ (void)shareActionListenerOnShareVideoCallBack:(void (^ _Nullable)(UIViewController * _Nonnull, NSDictionary<NSString *, id> * _Nonnull))onShareVideoCallBack;
/// 获取充值记录列表
/// \param page 页数
///
/// \param pageSize 页码
///
/// \param comolete 回调
///
+ (void)getOrderListsWithPage:(NSInteger)page pageSize:(NSInteger)pageSize comolete:(void (^ _Nonnull)(CQDramaPayOrderModel * _Nullable, NSString * _Nullable))comolete;
/// 是否隐藏首页导航条上的返回按钮（默认：隐藏）
/// \param isHidden 是否隐藏（true: 隐藏， false: 不隐藏）
///
+ (void)hideHomeNavBackWithIsHidden:(BOOL)isHidden;
/// 强制恢复SDK内部TabBar显示
/// \param animated 是否动画
///
+ (void)forceRestoreInternalTabBarWithAnimated:(BOOL)animated;
/// 启用/禁用完全隔离模式(默认是隔离的)
/// \param enabled 是否启用完全隔离模式
///
+ (void)setCompleteIsolationMode:(BOOL)enabled;
/// 显示SDK内部TabBar
/// \param animated 是否动画
///
+ (void)showInternalTabBarWithAnimated:(BOOL)animated;
/// 隐藏SDK内部TabBar
/// \param animated 是否动画
///
+ (void)hideInternalTabBarWithAnimated:(BOOL)animated;
/// 是否自定义商品列表面板
/// \param type 商品列表面板类型（默认：defaults, SDK自带面板，且数据是sdk自己获取, 最原始的样式）; half: 半自定义，商品列表面板使用SDK自带，但数据由外层给SDK；custom: 完全自定义，支付完成后需告知SDK进行校验,
///
/// \param onCustomGoodListViewCallBack 商品列表面板相关数据回调
///
+ (void)customGoodListViewWithType:(CQDramaGoodListType)type onCustomGoodListViewCallBack:(void (^ _Nullable)(UIViewController * _Nonnull, NSArray<CQDramaGoodListModel *> * _Nonnull, NSInteger, NSInteger))onCustomGoodListViewCallBack;
/// 获取支付商品订单的订单号（自定义支付，在付费前需要创建订单，后续会传给SDK，进行订单的校验）
/// \param goodsId 商品ID
///
/// \param videoId 剧ID
///
/// \param episodeNo 剧索引
///
/// \param payStrategyId 支付策略ID
///
+ (void)getGoodOrderNoWithGoodsId:(NSInteger)goodsId videoId:(NSInteger)videoId episodeNo:(NSInteger)episodeNo payStrategyId:(NSInteger)payStrategyId complete:(void (^ _Nonnull)(NSString * _Nullable, NSString * _Nullable))complete;
/// 半自定义模式显示商品列表自定义列表
/// \param goodList 商品列表模型列表数组
///
+ (void)showGoodListViewWithGoodList:(NSArray<CQDramaGoodListModel *> * _Nonnull)goodList videoId:(NSInteger)videoId episodeNo:(NSInteger)episodeNo;
/// 完全自定义商品面板，但支付使用剧星收款方式进行解锁视频
/// \param goodModel 选中的商品模型
///
/// \param vc 展示支付面板的控制器源（就是customGoodListView监听函数中SDK传递给您的VC）
///
+ (void)payToUnlockVideoWithGoodModel:(CQDramaGoodListModel * _Nonnull)goodModel vc:(UIViewController * _Nullable)vc;
/// 是否启动闪退监控（在初始化之前调用，默认是开启的）
+ (void)openCrashMonitoringWithIsOpenMonitoring:(BOOL)isOpenMonitoring;
/// 获取所有的闪退日志
+ (NSArray<NSString *> * _Nonnull)getAllCrashLogs;
/// 获取闪退日志数量
+ (NSInteger)getCrashLogCount;
/// 清除所有闪退日志
+ (void)clearAllCrashLogs;
/// 上传闪退日志到服务器
/// \param logs 日志内容
///
/// \param completion 完成后的回调(参数1： 上传成功的数量，参数2：上传失败后的回调)
///
+ (void)uploadLogToServerWithLogs:(NSArray<NSString *> * _Nonnull)logs completion:(void (^ _Nonnull)(NSInteger, NSInteger))completion;
/// 控制小窗口播放器视频是否静音
/// \param isMute 是否允许静音（默认: false）
///
+ (void)setPipPlayerMuteWithIsMute:(BOOL)isMute;
/// 手动移除小窗播放器的悬浮窗口
+ (void)removePipPlayerFloatView;
/// 是否隐藏我的页VIP按钮
/// \param isHidden 是否隐藏
///
+ (void)hideMeVipBtn:(BOOL)isHidden;
/// 设置自定义用户头像URL
/// \param avater 头像URL
///
+ (void)setCustomUserAvater:(NSString * _Nullable)avater;
/// 设置自定义用户昵称
/// \param nickname 昵称
///
+ (void)setCustomUserNickname:(NSString * _Nullable)nickname;

@end

NS_ASSUME_NONNULL_END
