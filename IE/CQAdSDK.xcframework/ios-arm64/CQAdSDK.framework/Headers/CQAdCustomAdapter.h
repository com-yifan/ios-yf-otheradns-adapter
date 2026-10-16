#ifndef CQAD_ADAPTER_API_CQADCUSTOMADAPTER_H
#define CQAD_ADAPTER_API_CQADCUSTOMADAPTER_H

#import <Foundation/Foundation.h>
#import "CQAdAdapterBidding.h"

NS_ASSUME_NONNULL_BEGIN

/// 延迟读取 ADN 价格（分），由价格解析器在需要时同步调用。
typedef NSInteger (^CQAdAdapterPriceFallback)(void);
/// 同步解析价格；lookupKeys 按优先级排列，fallback 仅在未命中时调用且不保留。
typedef NSInteger (^CQAdAdapterPriceResolver)(NSArray<NSString *> *lookupKeys, CQAdAdapterPriceFallback fallback);
/// 在调用时同步读取当前 Wi-Fi 状态，不是加载开始时的网络快照。
typedef BOOL (^CQAdAdapterWiFiStatusProvider)(void);

/// 通用类型
FOUNDATION_EXPORT NSString * const CQAdAdapterParamTimeoutKey;
/// 动态竞价底价（分）；大于 0 时由支持该能力的 ADN 设置。
FOUNDATION_EXPORT NSString * const CQAdAdapterParamBidFloorKey;
/// 可选的 CQAdAdapterPriceResolver，仅用于本次加载，不写入广告元数据。
FOUNDATION_EXPORT NSString * const CQAdAdapterParamPriceResolverKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterParamAdSizeKey;
/// UIView：开屏底部自定义视图；需要参与素材加载的 ADN 应在加载阶段读取。
FOUNDATION_EXPORT NSString * const CQAdAdapterParamSplashBottomViewKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterParamAdCountKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterParamVideoMutedKey;
/// NSNumber<BOOL>：是否允许用户点击视频视图切换播放／暂停，默认 NO。
FOUNDATION_EXPORT NSString * const CQAdAdapterParamVideoUserControlEnabledKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterParamVideoAutoPlayOnCellularKey;
/// NSNumber<NSInteger>：0 仅 Wi-Fi，1 始终自动播放，2 不自动播放。
FOUNDATION_EXPORT NSString * const CQAdAdapterParamVideoAutoPlayPolicyKey;
/// 可选的 CQAdAdapterWiFiStatusProvider，供需要自行判断网络的 ADN 使用。
FOUNDATION_EXPORT NSString * const CQAdAdapterParamWiFiStatusProviderKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterParamFullScreenKey;
/// NSNumber<BOOL>：点击广告并关闭详情页或返回应用后，是否按 ADN 规则关闭插屏。
FOUNDATION_EXPORT NSString * const CQAdAdapterParamInterstitialClickCloseKey;
/// NSNumber<NSInteger>：开屏未曝光时，详情关闭后的视图移除延迟（毫秒）。
FOUNDATION_EXPORT NSString * const CQAdAdapterParamSplashDelayCloseMsKey;
/// 可选的 CQAdSplashSkipViewFactory，未提供时使用 ADN 自身的跳过逻辑。
FOUNDATION_EXPORT NSString * const CQAdAdapterParamSplashSkipViewFactoryKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterParamViewControllerKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterParamUserIdentifierKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterParamBannerKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterParamBannerSizeKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterParamBannerRefreshIntervalKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterExtraRequestIdKey;
/// CQAdBidResult.ext 中的 BOOL：本次胜出广告是否为竞价广告。
FOUNDATION_EXPORT NSString * const CQAdAdapterBidWinnerIsBiddingKey;


@interface CQAdBidResult : NSObject
/// bidding胜出
@property (nonatomic, readonly) BOOL win;
/// 竟胜价格
@property (nonatomic, readonly) int64_t winnerPrice;
/// 二价
@property (nonatomic, readonly) int64_t secondPrice;
/// 竟败原因
@property (nonatomic, readonly) CQAdBidLossReason lossReason;
@property (nonatomic, copy) NSDictionary<NSString *, id> *ext;
- (instancetype)initWithWin:(BOOL)win
                winnerPrice:(int64_t)winnerPrice
                secondPrice:(int64_t)secondPrice
                 lossReason:(CQAdBidLossReason)lossReason
                        ext:(nullable NSDictionary<NSString *, id> *)ext NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

@protocol CQAdCustomAdapter <NSObject>

- (void)loadAdWithPlacementId:(NSString *)placementId params:(nullable NSDictionary<NSString *, id> *)params;

@optional

/// 仅在同步加载失败回调期间提供上报覆盖值；code/msg 为非空字符串。
/// 不替换 SDK NSError；未提供的字段继续使用原有错误信息。
- (nullable NSDictionary<NSString *, NSString *> *)loadErrorReportInfo;

/// 多物料加载的批次竞价价格（分）。未实现时沿用物料价格，不影响非竞价配置价。
- (NSInteger)batchECPM;

/// @param result bid结果对象
/// 竞价结果回调
- (void)didReceiveBidResult:(CQAdBidResult *)result;

@end

NS_ASSUME_NONNULL_END

#endif
