#import <YFAdsSDK/YFAdBaseAdPosition.h>
#import <YFAdsSDK/YFAdSplashDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface YFNCSplashAdapter : YFAdBaseAdPosition

@property (nonatomic, weak) id<YFAdSplashDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
