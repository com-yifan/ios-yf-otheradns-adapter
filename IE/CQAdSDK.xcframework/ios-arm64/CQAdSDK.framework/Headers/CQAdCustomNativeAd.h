#ifndef CQAD_ADAPTER_API_CQADCUSTOMNATIVEAD_H
#define CQAD_ADAPTER_API_CQADCUSTOMNATIVEAD_H

#import <UIKit/UIKit.h>
#import "CQNativeAdData.h"

NS_ASSUME_NONNULL_BEGIN

/// 可选的 Native 模板容器契约；普通媒体自绘容器无需遵循。
/// 显式遵循表示允许 ADN 将整个模板包装进其 SDK 容器，并返回该容器。
/// 角色视图由模板提供，Adapter 不依赖 Core 的模板类或配置对象。
@protocol CQAdNativeTemplateView <NSObject>
/// 模板内容点击区域，与包含关闭按钮等控件的外层容器区分。
@property (nonatomic, strong, readonly, nullable) UIView *contentView;
@property (nonatomic, strong, readonly, nullable) UILabel *titleLabel;
@property (nonatomic, strong, readonly, nullable) UILabel *desLabel;
/// 主图，同时作为 ADN 媒体视图的挂载位置。
@property (nonatomic, strong, readonly, nullable) UIImageView *imageView;
/// 已应用模板图标配置的广告标识，可与模板原有 logo 视图不同。
@property (nonatomic, strong, readonly, nullable) UIImageView *adapterLogoImageView;
@property (nonatomic, strong, readonly, nullable) UIButton *closeBtn;

@optional
/// ADN 接管关闭按钮后，将关闭事件交回模板；由 Core 通知宿主移除广告。
- (void)cq_notifyCloseFromAdapter;
@end

/// 单条 Native 广告协议。
/// 每家 ADN 的广告对象自行持有底层 SDK 对象，并负责物料、视图绑定和播放控制。
@protocol CQAdCustomNativeAd <CQNativeAdData>

/// 将媒体渲染的容器和可点击视图交给 ADN 完成绑定。
/// 普通 ADN 返回 containerView；Tanx 等可在内部包装后返回最终容器。
- (UIView *)registerContainerView:(UIView *)containerView
                   clickableViews:(NSArray<UIView *> *)clickableViews;

@optional

/// 广告被缓存或视图进入新页面时，更新展示和跳转所需的宿主控制器。
- (void)updateViewController:(UIViewController *)viewController;

/// 视频或其他由 ADN 提供的媒体视图。
@property (nonatomic, strong, readonly, nullable) UIView *mediaView;

/// 单条广告的竞价和扩展信息。不支持时无需实现。
@property (nonatomic, assign, readonly) NSInteger eCPM;
@property (nonatomic, copy, readonly) NSDictionary<NSString *, id> *adapterInfo;

- (void)unregisterAdView;
- (void)trackImpressionInView:(UIView *)view;
- (void)resizeMediaView;
- (void)setMediaViewSoundEnabled:(BOOL)enabled;
- (void)playMedia;
- (void)pauseMedia;

/// 仅供 Core 的摇一摇、扭一扭等主动交互触发点击；普通点击由 ADN 绑定 clickableViews。
- (void)performClickInView:(UIView *)view;

@end

NS_ASSUME_NONNULL_END

#endif
