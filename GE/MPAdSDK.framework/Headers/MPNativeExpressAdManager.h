//
//  MPNativeExpressAd.h
//  MPAdSDK
//
//  Created by admin on 2021/1/16.
//

#import <Foundation/Foundation.h>
#import "MPNativeExpressAd.h"
#import <MPAdSDK/MPBidReason.h>
@class MPNativeExpressAdManager;

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    MPNativeExpressAdTypeDraw,  // draw视频信息流
    MPNativeExpressAdTypeSelfRender, // 自渲染
    MPNativeExpressAdTypeFeed,  // 普通模板信息流
    MPNativeExpressAdTypeSelfRenderSplash // 自渲染开屏
} MPNativeExpressAdType;


@protocol MPNativeExpressAdDelegate <NSObject>
@optional;

/// 原生模版广告获取成功
/// @param manager 广告管理类
/// @param ads 广告数组 一般只会有一条广告数据 使用数组预留扩展
- (void)mp_nativeExpressAdSuccessToLoad:(MPNativeExpressAdManager *)manager ads:(NSArray<__kindof MPNativeExpressAd *> *)ads;

/// 原生模版广告获取失败
/// @param manager 广告管理类
/// @param error 错误信息
- (void)mp_nativeExpressAdFailToLoad:(MPNativeExpressAdManager *)manager error:(NSError *_Nullable)error;

/// 原生模版渲染成功
/// @param nativeExpressAd 渲染成功的模板广告
- (void)mp_nativeExpressAdRenderSuccess:(MPNativeExpressAd *)nativeExpressAd;

/// 原生模版渲染失败
/// @param nativeExpressAd 渲染失败的模板广告
/// @param error 渲染过程中的错误
- (void)mp_nativeExpressAdRenderFail:(MPNativeExpressAd *)nativeExpressAd error:(NSError *_Nullable)error;

/// 原生模板将要显示
/// @param nativeExpressAd 要显示的模板广告
- (void)mp_nativeExpressAdWillShow:(MPNativeExpressAd *)nativeExpressAd;

/// 广告显示失败
/// @param nativeExpressAd 要显示的广告
- (void)mp_nativeExpressAdShowFail:(MPNativeExpressAd *)nativeExpressAd error:(NSError *_Nullable)error;

/// 原生模板将被点击了
/// @param nativeExpressAd  被点击的模板广告
- (void)mp_nativeExpressAdDidClick:(MPNativeExpressAd *)nativeExpressAd;

///  原生模板广告被关闭了
/// @param nativeExpressAd 要关闭的模板广告
- (void)mp_nativeExpressAdViewClosed:(MPNativeExpressAd *)nativeExpressAd;

/// 原生模板广告将要展示详情页
/// @param nativeExpressAd  广告
- (void)mp_nativeExpressAdWillPresentScreen:(MPNativeExpressAd *)nativeExpressAd;

/// 原生模板广告将要关闭详情页
/// @param nativeExpressAd 广告
- (void)mp_nativeExpressAdVDidCloseOtherController:(MPNativeExpressAd *)nativeExpressAd;

@end

@interface MPNativeExpressAdManager : NSObject

@property(nonatomic,weak)id<MPNativeExpressAdDelegate> delegate;

@property(nonatomic,weak)UIViewController *currentViewController;

@property(nonatomic,assign,readonly)MPNativeExpressAdType type;

/// 最新的一条广告的ecpm
@property(nonatomic,assign,readonly)NSInteger ecpm;

/// 广告底价，单位分，不会返回低于此底价的广告，底价过高可能会没有广告，兜底返回错误提示：广告价格低于底价！
@property(nonatomic,assign)NSInteger basePrice;


/// 禁止使用此方法来初始化
+ (instancetype)new NS_UNAVAILABLE;

/// 禁止使用此方法来初始化
- (instancetype)init NS_UNAVAILABLE;

/// 初始化方法
/// @param placementId 广告id
/// @param type 广告type
/// @param adSize 广告尺寸,MPNativeExpressAdTypeFeed 类型根据宽度自适应，可将高度直接设置为0 MPNativeExpressAdTypeDraw类型传入屏幕的宽高
- (instancetype)initWithPlacementId:(nonnull NSString *)placementId type:(MPNativeExpressAdType)type adSize:(CGSize)adSize NS_DESIGNATED_INITIALIZER;

/// 加载广告
- (void)loadAd;

/// 通知广告平台的广告竞胜
///  @param costPrice 竞胜价格
///  @param secondPrice 二价
- (void)notifyBidWin:(double)costPrice secondPrice:(double)secondPrice;
/// 通知广告平台的广告竞败
/// @param bidLossReason 竞败原因
- (void)notifyBidLoss:(MPBidReason *)bidLossReason;

@end

NS_ASSUME_NONNULL_END
