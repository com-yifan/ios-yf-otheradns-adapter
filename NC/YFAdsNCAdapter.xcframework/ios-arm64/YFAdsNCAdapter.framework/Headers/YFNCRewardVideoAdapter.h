#import <YFAdsSDK/YFAdBaseAdPosition.h>
#import <YFAdsSDK/YFAdRewardVideoDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface YFNCRewardVideoAdapter : YFAdBaseAdPosition

@property (nonatomic, weak) id<YFAdRewardVideoDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
