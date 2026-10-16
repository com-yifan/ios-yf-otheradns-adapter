#ifndef CQAD_ADAPTER_API_CQADCUSTOMSPLASHADAPTER_H
#define CQAD_ADAPTER_API_CQADCUSTOMSPLASHADAPTER_H

#import <UIKit/UIKit.h>
#import "CQAdCustomAdapter.h"
NS_ASSUME_NONNULL_BEGIN
/// Core 提供的可选跳过视图；Adapter 只负责放置视图及通知展示时机。
@protocol CQAdCustomSplashSkipView <NSObject>
- (void)showSkipIfNeeded;
- (void)showSkipWhenExhibit;
@end
/// 每次展示时创建视图；手动跳过或倒计时结束时调用 skipAction。
typedef UIView<CQAdCustomSplashSkipView> * _Nullable (^CQAdSplashSkipViewFactory)(dispatch_block_t skipAction);

@protocol CQAdCustomSplashAdapter;
@protocol CQAdCustomSplashAdapterBridge <NSObject>
- (void)cqAdSplashAdLoadSuccess:(id<CQAdCustomSplashAdapter>)port eCPM:(NSInteger)eCPM extraInfo:(nullable NSDictionary<NSString *, id> *)extraInfo;
- (void)cqAdSplashAdLoadFailed:(id<CQAdCustomSplashAdapter>)adapter error:(NSError *)error;
- (void)cqAdSplashAdShowFailed:(id<CQAdCustomSplashAdapter>)adapter error:(nullable NSError *)error;
- (void)cqAdSplashAdRenderSuccess:(id<CQAdCustomSplashAdapter>)adapter;
- (void)cqAdSplashAdRenderFailed:(id<CQAdCustomSplashAdapter>)adapter error:(nullable NSError *)error;
- (void)cqAdSplashAdVisible:(id<CQAdCustomSplashAdapter>)adapter;
- (void)cqAdSplashAdExposure:(id<CQAdCustomSplashAdapter>)adapter;
- (void)cqAdSplashAdDidClick:(id<CQAdCustomSplashAdapter>)adapter;
- (void)cqAdSplashAdDidClose:(id<CQAdCustomSplashAdapter>)adapter;
@optional
- (void)cqAdSplashAdDetailDidClose:(id<CQAdCustomSplashAdapter>)adapter;
@end
@protocol CQAdCustomSplashAdapter <CQAdCustomAdapter>

/// 构造方法
/// 通过bridge回传广告状态
- (nonnull instancetype)initWithBridge:(id <CQAdCustomSplashAdapterBridge> _Nonnull)bridge;

- (void)showAdInWindow:(UIWindow *)window bottomView:(nullable UIView *)bottomView;
@end
NS_ASSUME_NONNULL_END

#endif
