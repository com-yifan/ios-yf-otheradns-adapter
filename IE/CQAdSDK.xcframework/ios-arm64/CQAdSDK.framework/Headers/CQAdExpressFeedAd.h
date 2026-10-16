//
//  CQAdExpressFeedAd.h
//  CQAdSDK
//
//  Created by splendourbell on 2021/10/12.
//

#ifndef CQAdExpressFeedAd_h
#define CQAdExpressFeedAd_h

#import <UIKit/UIKit.h>
#import <CQAdSDK/CQAdBaseAd.h>
#import <CQAdSDK/CQAdExpressFeedAdObject.h>

NS_ASSUME_NONNULL_BEGIN

@class CQAdExpressFeedAd;
@class CQAdExpressFeedAdObject;

@class UIViewController;

@protocol CQAdExpressFeedAdDelegate<NSObject>

@optional

/**
 * @brief 信息流广告加载成功回调
 */
- (void)cqAdExpressFeedAdLoadSuccess:(CQAdExpressFeedAd *)expressFeedAd adObjects:(NSArray<CQAdExpressFeedAdObject*>*)adObjects;

/**
 * @brief 信息流广告失败成功回调
 */
- (void)cqAdExpressFeedAdLoadFailed:(CQAdExpressFeedAd *)expressFeedAd error:(NSError *)error;

/**
 * @brief 信息流广告渲染成功回调
 */
- (void)cqAdExpressFeedAdViewRenderSuccess:(CQAdExpressFeedAd *)expressFeedAd adObject:(CQAdExpressFeedAdObject *)adObject;

/**
 * @brief 信息流广告渲染失败回调
 */
- (void)cqAdExpressFeedAdViewRenderFail:(CQAdExpressFeedAd *)expressFeedAd adObject:(CQAdExpressFeedAdObject*)adObjects;

/**
 * @brief 信息流广告展示成功回调
 */
- (void)cqAdExpressFeedAdViewExposure:(CQAdExpressFeedAd *)expressFeedAd adObject:(CQAdExpressFeedAdObject*)adObject;

/**
 * @brief 信息流广告被点击回调
 */
- (void)cqAdExpressFeedAdDidClick:(CQAdExpressFeedAd *)expressFeedAd adObject:(CQAdExpressFeedAdObject*)adObjects;

/**
 * @brief 信息流广告点击关闭后回调
 * @remark 收到此消息回调后，需要将界面上对应展示的本身广告，移除。
 */
- (void)cqAdExpressFeedAdViewDidRemoved:(CQAdExpressFeedAd *)expressFeedAd adObject:(CQAdExpressFeedAdObject*)adObject;

@end

@interface CQAdExpressFeedAd : CQAdBaseAd

@property (nonatomic, weak) id<CQAdExpressFeedAdDelegate> delegate;

@property (nonatomic, weak) UIViewController* viewController;

@property (nonatomic, readonly) NSTimeInterval timeoutSeconds;

- (instancetype)init NS_UNAVAILABLE;

/**
 * @brief 初始化信息流模板广告
 * @param placementId 广告位ID
 * @param width 广告需要展示的宽度
 * @remark 广告高度会根据内容自适应，在渲染完成后，可以读取广告view的高度。
 * @param viewController 广告显示所需UIViewController
 * @return 返回广告对象。 广告展示生命周期内，不应释放些对象。
 */
- (instancetype)initWithPlacementId:(NSString*)placementId width:(CGFloat)width viewController:(UIViewController*)viewController;

/**
 * @brief 开始加载广告
 * @param count 建议获取广告条数。以初始返回数据为准。
 * 
 * @remark !!!【百度广告】不支持传递count参数，指定建议条数。但可能会返回多条，如果只需要一条，仅取第一条。
 */
- (void)loadAds:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END

#endif /* CQAdExpressFeedAd_h */
