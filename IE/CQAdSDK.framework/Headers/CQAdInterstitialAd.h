//
//  CQAdInterstitialAd.h
//  CQAdSDK
//
//  Created by splendourbell on 2021/10/11.
//

#import <CQAdSDK/CQAdBaseAd.h>

NS_ASSUME_NONNULL_BEGIN

@class CQAdInterstitialAd;
@class UIViewController;

@protocol CQAdInterstitialAdDelegate<NSObject>

@optional

/**
 * @brief 插屏广告加载成功后回调
 */
- (void)cqAdInterstitialAdLoadSuccess:(CQAdInterstitialAd *)interstitialAd;

/**
 * @brief 插屏广告加载失败后回调
 */
- (void)cqAdInterstitialAdLoadFailed:(CQAdInterstitialAd *)interstitialAd error:(NSError *)error;

/**
 * @brief 插屏广告准备展示时回调
 */
- (void)cqAdInterstitialAdVisible:(CQAdInterstitialAd *)interstitialAd;

/**
 * @brief 插屏广告被点击后回调
 */
- (void)cqAdInterstitialAdDidClick:(CQAdInterstitialAd *)interstitialAd;

/**
 * @brief 插屏广告被关闭：包括手动关闭或者倒计时关闭等
 */
- (void)cqAdInterstitialAdDidClose:(CQAdInterstitialAd *)interstitialAd;

@end

@interface CQAdInterstitialAd : CQAdBaseAd

@property (nonatomic, weak) id<CQAdInterstitialAdDelegate> delegate;

@property (nonatomic, weak) UIViewController* viewController;

@property (nonatomic, readonly) NSTimeInterval timeoutSeconds;

- (instancetype)init NS_UNAVAILABLE;

/**
 * @brief 初始化插屏广告
 * @param placementId 广告位ID
 * @param viewController 广告显示所需UIViewController
 */
- (instancetype)initWithPlacementId:(NSString*)placementId viewController:(UIViewController*)viewController;


/**
 * @brief 开始加载广告
 */
- (void)loadAd;

/**
 * @brief 在收到广告成功回调(cqAdInterstitialAdLoadSuccess:)后，可以调用此方法展示广告
 */
- (void)showAd;

@end

NS_ASSUME_NONNULL_END
