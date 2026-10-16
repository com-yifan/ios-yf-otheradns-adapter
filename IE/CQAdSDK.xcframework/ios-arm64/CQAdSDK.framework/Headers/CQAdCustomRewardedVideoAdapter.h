#ifndef CQAD_ADAPTER_API_CQADCUSTOMREWARDEDVIDEOADAPTER_H
#define CQAD_ADAPTER_API_CQADCUSTOMREWARDEDVIDEOADAPTER_H

#import <UIKit/UIKit.h>
#import "CQAdCustomAdapter.h"
NS_ASSUME_NONNULL_BEGIN
@protocol CQAdCustomRewardedVideoAdapter;
@protocol CQAdCustomRewardedVideoAdapterBridge <NSObject>
- (void)cqAdRewardVideoAdLoadSuccess:(id<CQAdCustomRewardedVideoAdapter>)adapter eCPM:(NSInteger)eCPM extraInfo:(nullable NSDictionary<NSString *, id> *)extraInfo;
- (void)cqAdRewardVideoAdLoadFailed:(id<CQAdCustomRewardedVideoAdapter>)adapter error:(NSError *)error;
- (void)cqAdRewardVideoAdRenderSuccess:(id<CQAdCustomRewardedVideoAdapter>)adapter;
- (void)cqAdRewardVideoAdRenderFailed:(id<CQAdCustomRewardedVideoAdapter>)adapter error:(NSError *)error;
- (void)cqAdRewardVideoAdVisible:(id<CQAdCustomRewardedVideoAdapter>)adapter;
- (void)cqAdRewardVideoAdDidClick:(id<CQAdCustomRewardedVideoAdapter>)adapter;
- (void)cqAdRewardVideoAdDidClose:(id<CQAdCustomRewardedVideoAdapter>)adapter;
- (void)cqAdRewardVideoAdPlayFinished:(id<CQAdCustomRewardedVideoAdapter>)adapter;
- (void)cqAdRewardVideoAdRewarded:(id<CQAdCustomRewardedVideoAdapter>)adapter;
@end
@protocol CQAdCustomRewardedVideoAdapter <CQAdCustomAdapter>

/// 构造方法
/// 通过bridge回传广告状态
- (nonnull instancetype)initWithBridge:(id <CQAdCustomRewardedVideoAdapterBridge> _Nonnull)bridge;

- (void)showAdFromViewController:(UIViewController *)viewController;

@optional

- (BOOL)isAdReady;

@end
NS_ASSUME_NONNULL_END

#endif
