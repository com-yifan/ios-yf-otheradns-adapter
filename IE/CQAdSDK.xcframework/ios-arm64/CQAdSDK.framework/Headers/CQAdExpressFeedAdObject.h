//
//  CQAdExpressFeedAdObject.h
//  CQAdSDK
//
//  Created by splendourbell on 2021/10/13.
//

#ifndef CQAdExpressFeedAdObject_h
#define CQAdExpressFeedAdObject_h

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class UIView;

@interface CQAdExpressFeedAdObject : NSObject

- (instancetype)init NS_UNAVAILABLE;

/**
 * @brief 信息流广告加载成功后，需要主动调用 render方法后，对应广告内容才会加载。
 * 需要在此广告真实显示前，调用render, 渲染成功回调后，才可在界面上正常显示。
 */
- (void)render;

/**
 * @brief 调用渲染后，可以取到广告对应的view, 渲染成功回调后，才可在界面上正常显示。
 */
- (UIView*)view;

/**
 * @brief 广告在可视区域后，需要调用此方法，上报展示，多次调用，不影响结果。
 * 尤其是在 可滑动视图里，广告被滑动到可视区域后，需要调用。
 * 
 * @remark !!!如果支持了百度的广告，需要调用此方法。 
 * 注：后台明确未配置百度信息流广告，可以不进行调用
 */
- (void)trackImpression;

@end

NS_ASSUME_NONNULL_END

#endif /* CQAdExpressFeedAdObject_h */
