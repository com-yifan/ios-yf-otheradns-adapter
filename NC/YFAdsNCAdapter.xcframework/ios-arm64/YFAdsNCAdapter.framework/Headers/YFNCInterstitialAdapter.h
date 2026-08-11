#import <YFAdsSDK/YFAdBaseAdPosition.h>
#import <YFAdsSDK/YFAdInterstitialDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface YFNCInterstitialAdapter : YFAdBaseAdPosition

@property (nonatomic, weak) id<YFAdInterstitialDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
