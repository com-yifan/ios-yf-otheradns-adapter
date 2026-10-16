#ifndef CQAD_ADAPTER_API_CQADCUSTOMNATIVEADAPTER_H
#define CQAD_ADAPTER_API_CQADCUSTOMNATIVEADAPTER_H

#import "CQAdCustomAdapter.h"
#import "CQAdCustomNativeAd.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CQAdCustomNativeAdapter;

@protocol CQAdCustomNativeAdapterBridge <NSObject>

/// Loader 事件。
- (void)cqAdNativeAdLoadSuccess:(id<CQAdCustomNativeAdapter>)adapter
                      adObjects:(NSArray<id<CQAdCustomNativeAd>> *)adObjects;
- (void)cqAdNativeAdLoadFailed:(id<CQAdCustomNativeAdapter>)adapter error:(NSError *)error;

/// 单条广告事件。事件源直接是 NativeAd，不再经过 Loader 转发身份。
- (void)cqAdNativeAdViewExposure:(id<CQAdCustomNativeAd>)nativeAd;
- (void)cqAdNativeAdDidClick:(id<CQAdCustomNativeAd>)nativeAd;
- (void)cqAdNativeAdDetailClose:(nullable id<CQAdCustomNativeAd>)nativeAd;

@optional

/// 某些内部 Adapter 需要在真实跳转前回调点击，用于 Core 的前置补量策略。
- (BOOL)cqAdNativeAdShouldNotifyClickBeforeNavigation;

@end

/// Native Loader 只负责加载；绑定、点击和播放等行为属于 CQAdCustomNativeAd。
@protocol CQAdCustomNativeAdapter <CQAdCustomAdapter>

- (instancetype)initWithBridge:(id<CQAdCustomNativeAdapterBridge>)bridge;

@end

NS_ASSUME_NONNULL_END

#endif
