#ifndef CQAD_ADAPTER_API_CQADCUSTOMEXPRESSAD_H
#define CQAD_ADAPTER_API_CQADCUSTOMEXPRESSAD_H

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// Adapter 返回的模板广告值对象，仅承载 ADN 对象、渲染视图和竞价信息。
@interface CQAdCustomExpressAd : NSObject

@property (nonatomic, strong, readonly) id originAdObject;
@property (nonatomic, strong, readonly) UIView *renderView;
@property (nonatomic, assign, readonly) NSInteger eCPM;
@property (nonatomic, copy, readonly) NSDictionary<NSString *, id> *adapterInfo;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithOriginAdObject:(id)originAdObject
                            renderView:(UIView *)renderView
                                  eCPM:(NSInteger)eCPM
                           adapterInfo:(nullable NSDictionary<NSString *, id> *)adapterInfo NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

#endif
