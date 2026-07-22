//
//  CQAdRewardVideoAd.h
//  CQAdSDK
//
//  Created by splendourbell on 2021/11/8.
//

#import <CQAdSDK/CQAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@class CQAdRewardVideoAd;
@class UIViewController;

@protocol CQAdRewardVideoAdDelegate <NSObject>

@optional

- (void)cqAdRewardVideoAdLoadSuccess:(CQAdRewardVideoAd *)rewardVideoAd;

- (void)cqAdRewardVideoAdLoadFailed:(CQAdRewardVideoAd *)rewardVideoAd error:(NSError*)error;

- (void)cqAdRewardVideoAdVisible:(CQAdRewardVideoAd *)rewardVideoAd;

- (void)cqAdRewardVideoAdDidClick:(CQAdRewardVideoAd *)rewardVideoAd;

- (void)cqAdRewardVideoAdDidClose:(CQAdRewardVideoAd *)rewardVideoAd;

- (void)cqAdRewardVideoAdPlayFinished:(CQAdRewardVideoAd *)rewardVideoAd;

/**
 * @brief 成功获取到奖励
 */
- (void)cqAdRewardVideoAdRewarded:(CQAdRewardVideoAd *)rewardVideoAd;

@end

@interface CQAdRewardVideoAd : CQAdBaseAd

@property (nonatomic, weak) id<CQAdRewardVideoAdDelegate> delegate;

@property (nonatomic, weak) UIViewController* viewController;

@property (nonatomic, readonly) NSTimeInterval timeoutSeconds;
/**
 广告是否有效
 */
@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;

- (instancetype)init NS_UNAVAILABLE;

/**
 * @brief 初始化广告
 * @param placementId 广告位ID
 * @param viewController 广告显示所需UIViewController
 */
- (instancetype)initWithPlacementId:(NSString*)placementId viewController:(UIViewController*)viewController;

/**
 * @brief 开始加载广告
 */
- (void)loadAd;

/**
 * @brief 在收到广告成功回调(cqAdRewardVideoAdLoadSuccess:)后，可以调用此方法展示广告
 */
- (void)showAd;

@end

NS_ASSUME_NONNULL_END
