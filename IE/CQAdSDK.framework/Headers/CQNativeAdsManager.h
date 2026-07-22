//
//  CQNativeAdsManager.h
//  CQAdSDK
//
//  Created by hanxiaoyu on 2022/5/9.
//

#import <CQAdSDK/CQAdSDK.h>
#import <CQAdSDK/CQNativeAd.h>
#import <CQAdSDK/CQVideoConfig.h>
NS_ASSUME_NONNULL_BEGIN
@class CQNativeAdsManager;

/// Native 广告回调协议
@protocol CQNativeAdsManagerDelegate <NSObject>

@optional

/// Native 广告加载成功回调
/// @param adsManager 广告管理对象
/// @param nativeAdArray 自渲染广告
- (void)cqNativeAdsManagerSuccessToLoad:(CQNativeAdsManager *_Nonnull)adsManager nativeAds:(NSArray<CQNativeAd *> *_Nullable)nativeAdArray;

/// Native 广告加载失败回调
/// @param adsManager 广告管理对象
/// @param error  加载出错信息
- (void)cqNativeAdsManager:(CQNativeAdsManager *_Nonnull)adsManager didFailWithError:(NSError *_Nullable)error;

@end


@interface CQNativeAdsManager : CQAdBaseAd

@property (nonatomic, weak) id<CQNativeAdsManagerDelegate> delegate;

@property (nonatomic, readonly,weak) UIViewController* viewController;

@property (nonatomic, readonly) NSTimeInterval timeoutSeconds;

@property (nonatomic, strong) CQVideoConfig *videoConfig;

- (instancetype)init NS_UNAVAILABLE;

/**
 * @brief 初始化信息流模板广告
 * @param placementId 广告位ID
 * @param viewController 广告显示所需UIViewController
 * @return 返回广告对象。 广告展示生命周期内，不应释放些对象。
 */
- (instancetype)initWithPlacementId:(NSString*)placementId viewController:(UIViewController*)viewController;



/**
 * @brief 开始加载广告
 * @param count 建议获取广告条数。以初始返回数据为准。
 */
- (void)loadAds:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END
