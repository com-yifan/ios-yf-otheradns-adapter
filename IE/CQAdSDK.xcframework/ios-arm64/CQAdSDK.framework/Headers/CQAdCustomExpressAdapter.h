#ifndef CQAD_ADAPTER_API_CQADCUSTOMEXPRESSADAPTER_H
#define CQAD_ADAPTER_API_CQADCUSTOMEXPRESSADAPTER_H

#import "CQAdCustomAdapter.h"
#import "CQAdCustomExpressAd.h"
NS_ASSUME_NONNULL_BEGIN
@protocol CQAdCustomExpressAdapter;
@protocol CQAdCustomExpressAdapterBridge <NSObject>
- (void)cqAdExpressFeedAdLoadSuccess:(id<CQAdCustomExpressAdapter>)adapter adObjects:(NSArray<CQAdCustomExpressAd *> *)adObjects;
- (void)cqAdExpressFeedAdLoadFailed:(id<CQAdCustomExpressAdapter>)adapter error:(NSError *)error;
- (void)cqAdExpressFeedAdViewRenderSuccess:(id<CQAdCustomExpressAdapter>)adapter adObject:(CQAdCustomExpressAd *)adObject;
- (void)cqAdExpressFeedAdViewRenderFail:(id<CQAdCustomExpressAdapter>)adapter adObject:(CQAdCustomExpressAd *)adObject;
- (void)cqAdExpressFeedAdViewExposure:(id<CQAdCustomExpressAdapter>)adapter adObject:(CQAdCustomExpressAd *)adObject;
- (void)cqAdExpressFeedAdDidClick:(id<CQAdCustomExpressAdapter>)adapter adObject:(CQAdCustomExpressAd *)adObject;
- (void)cqAdExpressFeedAdViewDidRemoved:(id<CQAdCustomExpressAdapter>)adapter adObject:(CQAdCustomExpressAd *)adObject;
- (void)cqAdExpressFeedAdViewDidDismissLandingView:(id<CQAdCustomExpressAdapter>)adapter adObject:(CQAdCustomExpressAd *)adObject;
@end

@protocol CQAdCustomExpressAdapter <CQAdCustomAdapter>

/// 构造方法
/// 通过bridge回传广告状态
- (nonnull instancetype)initWithBridge:(id <CQAdCustomExpressAdapterBridge> _Nonnull)bridge;

- (void)render:(CQAdCustomExpressAd *)adObject viewController:(nullable UIViewController *)viewController;

@optional

/// 将媒体的手动曝光请求交给对应 SDK 物料；实际曝光仍通过 SDK 回调通知。
- (void)trackImpressionForAd:(CQAdCustomExpressAd *)adObject;

@end
NS_ASSUME_NONNULL_END

#endif
