//
//  CQAdSplashAd.h
//  CQAdSDK
//
//  Created by bell on 2021/10/8.
//

#import <CQAdSDK/CQAdBaseAd.h>

NS_ASSUME_NONNULL_BEGIN

@class CQAdSplashAd;
@class UIWindow;
@class UIView;

@protocol CQAdSplashAdDelegate<NSObject>

@optional

/**
 * @brief 开屏广告加载成功回调
 */
- (void)cqAdSplashAdLoadSuccess:(CQAdSplashAd*)splashAd;

/**
 * @brief 开屏广告加载失败回调
 */
- (void)cqAdSplashAdLoadFailed:(CQAdSplashAd*)splashAd error:(NSError*)error;

/**
 * @brief 开屏广告展示失败回调
 */
- (void)cqAdSplashAdShowFailed:(CQAdSplashAd *)splashAd error:(NSError *)error;
/**
 * @brief 开屏广告准备开始展示
 */
- (void)cqAdSplashAdVisible:(CQAdSplashAd*)splashAd;

/**
 * @brief 开屏广告被点击
 */
- (void)cqAdSplashAdDidClick:(CQAdSplashAd*)splashAd;

/**
 * @brief 开屏广告被关闭，包括 手动关闭 或者 倒计时自动关闭等。
 */
- (void)cqAdSplashAdDidClose:(CQAdSplashAd*)splashAd;

/**
 * @brief 开屏广告落地页被关闭
 */
- (void)cqAdSplashAdDetailDidClose:(CQAdSplashAd*)splashAd;

@end

@interface CQAdSplashAd : CQAdBaseAd

@property (nonatomic, weak) id<CQAdSplashAdDelegate> delegate;


@property (nonatomic, strong, readonly) UIWindow* window;

@property (nonatomic, readonly) UIView* bottomView;

@property (nonatomic, readonly) NSTimeInterval timeoutSeconds; 

- (instancetype)init NS_UNAVAILABLE;
/**
 * @brief 初始化开屏广告
 * @param placementId 广告位ID
 * @param window 广告显示所需window
 * @param bottomView 开屏底部可以添加不超过屏幕 1/4 高度的 自定义view, 可以为空。
 * @param timeoutSeconds 开屏超时时间（单位秒，支持小数）
 */
- (instancetype)initWithPlacementId:(NSString*)placementId 
                             window:(UIWindow*)window 
                         bottomView:(UIView* _Nullable)bottomView 
                            timeout:(NSTimeInterval)timeoutSeconds;

/**
 * @brief 开始加载广告
 */
- (void)loadAd;

/**
 * @brief 在收到广告成功回调(cqAdSplashAdLoadSuccess:)后，可以调用此方法展示广告
 */
- (void)showAd;

/**
 * @brief 在指定 window 展示广告。用于 load 到 show 之间 window 发生变化的场景。
 */
- (void)showAdInWindow:(UIWindow*)window;

@end

NS_ASSUME_NONNULL_END
