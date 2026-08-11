#import <YFAdsSDK/YFAdBaseAdPosition.h>
#import <YFAdsSDK/YFAdFusionBannerDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface YFNCFusionBannerAdapter : YFAdBaseAdPosition

@property (nonatomic, weak) id<YFAdFusionBannerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
