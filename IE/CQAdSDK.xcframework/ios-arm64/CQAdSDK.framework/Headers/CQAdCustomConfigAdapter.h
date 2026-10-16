#ifndef CQAD_ADAPTER_API_CQADCUSTOMCONFIGADAPTER_H
#define CQAD_ADAPTER_API_CQADCUSTOMCONFIGADAPTER_H

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// CQAdAdapterAPI 协议版本。Adapter 必须返回其编译时遵循的版本。
typedef NS_ENUM(NSInteger, CQAdAdapterAPIVersion) {
    CQAdAdapterAPIVersionUnknown = 0,
    CQAdAdapterAPIVersion1_0 = 100,
};

FOUNDATION_EXPORT NSString * const CQAdAdapterInitConfigDeviceIdentifierKey;
/// 后台 sdkConfig 下发的模板广告 logo URL（按 ADN）。
FOUNDATION_EXPORT NSString * const CQAdAdapterInitConfigTemplateIconKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterPrivacyLimitProgrammaticAdsKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterPrivacyDisableLocationKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterPrivacyLongitudeKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterPrivacyLatitudeKey;
FOUNDATION_EXPORT NSString * const CQAdAdapterPrivacyNotAdultKey;

/// 初始化 Adapter 所需的媒体配置。
@interface CQAdAdapterInitConfig : NSObject <NSCopying>

@property (nonatomic, copy, readonly) NSString *appId;
@property (nonatomic, copy, readonly) NSString *appKey;
@property (nonatomic, assign, readonly) BOOL limitPersonalizedAds;
@property (nonatomic, copy, readonly) NSDictionary<NSString *, id> *extras;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithAppId:(NSString *)appId
                       appKey:(nullable NSString *)appKey
         limitPersonalizedAds:(BOOL)limitPersonalizedAds
                       extras:(nullable NSDictionary<NSString *, id> *)extras NS_DESIGNATED_INITIALIZER;

@end

typedef void (^CQAdCustomConfigAdapterCompletion)(NSError * _Nullable error);

/// ADN 初始化协议。初始化时序及幂等由 CQAdSDK 管理，Adapter 只负责初始化底层 SDK 并回调结果。
@protocol CQAdCustomConfigAdapter <NSObject>

/// 当前运行环境是否包含 Adapter 正常工作所需的底层 ADN SDK。
/// Core 会在创建 SDKPort 和初始化 Adapter 前调用；返回 NO 时直接忽略该 ADN。
+ (BOOL)isNetworkSDKAvailable;

- (void)initializeAdapterWithConfiguration:(CQAdAdapterInitConfig *)configuration
                                completion:(CQAdCustomConfigAdapterCompletion)completion;

/// Adapter 自身版本。
- (NSString *)adapterVersion;

/// 底层 ADN SDK 版本。
- (NSString *)networkSDKVersion;

/// Adapter 编译时遵循的 CQAdAdapterAPI 协议版本。
- (CQAdAdapterAPIVersion)basedOnAdapterAPIVersion;

@optional

/// 隐私配置发生变化时通知 Adapter；未实现时仅在首次初始化中传递隐私配置。
- (void)didRequestAdPrivacyConfigUpdate:(NSDictionary<NSString *, id> *)config;

@end

NS_ASSUME_NONNULL_END

#endif
