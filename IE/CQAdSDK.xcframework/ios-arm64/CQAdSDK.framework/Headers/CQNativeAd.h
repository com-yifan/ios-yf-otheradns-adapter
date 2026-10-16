//
//  CQNativeAd.h
//  CQAdSDK
//
//  Created by hanxiaoyu on 2022/5/9.
//

#import <UIKit/UIKit.h>
#import <CQAdSDK/CQNativeAdData.h>

NS_ASSUME_NONNULL_BEGIN

@class CQNativeAd;
@class CQNativeAdView;

@protocol CQNativeAdDelegate <NSObject>

@optional

/// 广告展示回调，不区分模板与非模板
/// @param nativeAd 广告对象
- (void)cqNativeAdDidBecomeVisible:(CQNativeAd *)nativeAd;

/// 广告点击事件回调
/// @param nativeAd 广告对象
- (void)cqNativeAdDidClick:(CQNativeAd *)nativeAd;

@end


@interface CQNativeAd : NSObject

/// native广告的物料数据
@property (nonatomic, strong, readonly) CQNativeAdMeterialMeta *data;

/// 代理协议对象
@property (nonatomic, weak, readwrite) id<CQNativeAdDelegate> delegate;

/// 媒体视图，即视频广告的视频图层，非视频广告不存在该视图
@property (nonatomic, strong, readonly) UIView *mediaView;


/// API 原生广告宿主渲染，SDK 自动根据 creativeInteractStyle 配置交互提示 UI
- (void)registerNativeAdView:(__kindof UIView *)containerView
          withClickableViews:(NSArray<__kindof UIView *> *)clickableViews;

//解绑注册
- (void)unregister;

///更新模板媒体视图大小
- (void)reSizeMediaView;

/**
 * @brief 广告在可视区域后，需要调用此方法，上报展示，多次调用，不影响结果。
 * 尤其是在 可滑动视图里，广告被滑动到可视区域后，需要调用。
 *
 * @remark !!!如果支持了百度的广告，需要调用此方法。 
 * 注：后台明确未配置百度信息流广告，可以不进行调用
 */
-(void)trackImpression:(UIView *)view;


@end

NS_ASSUME_NONNULL_END
