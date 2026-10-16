#ifndef CQAD_ADAPTER_API_CQADCUSTOMINTERSTITIALADAPTER_H
#define CQAD_ADAPTER_API_CQADCUSTOMINTERSTITIALADAPTER_H

#import <UIKit/UIKit.h>
#import "CQAdCustomAdapter.h"
NS_ASSUME_NONNULL_BEGIN
@protocol CQAdCustomInterstitialAdapter;
@protocol CQAdCustomInterstitialAdapterBridge <NSObject>
- (void)cqAdInterstitialAdLoadSuccess:(id<CQAdCustomInterstitialAdapter>)adapter eCPM:(NSInteger)eCPM extraInfo:(nullable NSDictionary<NSString *, id> *)extraInfo;
- (void)cqAdInterstitialAdLoadFailed:(id<CQAdCustomInterstitialAdapter>)adapter error:(NSError *)error;
- (void)cqAdInterstitialAdRenderSuccess:(id<CQAdCustomInterstitialAdapter>)adapter;
- (void)cqAdInterstitialAdRenderFailed:(id<CQAdCustomInterstitialAdapter>)adapter error:(NSError *)error;
- (void)cqAdInterstitialAdVisible:(id<CQAdCustomInterstitialAdapter>)adapter;
- (void)cqAdInterstitialAdDidClick:(id<CQAdCustomInterstitialAdapter>)adapter;
- (void)cqAdInterstitialAdDidClose:(id<CQAdCustomInterstitialAdapter>)adapter;
@end
@protocol CQAdCustomInterstitialAdapter <CQAdCustomAdapter>

/// 构造方法
/// 通过bridge回传广告状态
- (nonnull instancetype)initWithBridge:(id <CQAdCustomInterstitialAdapterBridge> _Nonnull)bridge;

- (void)showAdFromViewController:(UIViewController *)viewController;

@optional

- (void)dismissAd;

- (BOOL)isAdReady;

@end
NS_ASSUME_NONNULL_END

#endif
