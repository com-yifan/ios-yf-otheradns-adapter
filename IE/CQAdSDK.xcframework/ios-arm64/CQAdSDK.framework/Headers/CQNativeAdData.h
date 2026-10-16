#ifndef CQAD_ADAPTER_API_CQNATIVEADDATA_H
#define CQAD_ADAPTER_API_CQNATIVEADDATA_H

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, CQNativeAdMode) {
    CQNativeAdModeImage = 0,
    CQNativeAdModeVideo,
    CQNativeAdModeHTML,
};

@protocol CQNativeAdData;

typedef NSObject<CQNativeAdData> CQNativeAdMeterialMeta;

/// Native 广告的通用物料协议，由各 ADN 的 Native 广告对象实现。
@protocol CQNativeAdData <NSObject>

/// 主图片地址。
@property (nonatomic, copy, readonly, nullable) NSString *adImage;

/// App 图标地址。
@property (nonatomic, copy, readonly, nullable) NSString *icon;

/// 广告标识图片地址。
@property (nonatomic, copy, readonly, nullable) NSString *adLogo;

/// ADN SDK 标识图片地址。
@property (nonatomic, copy, readonly, nullable) NSString *sdkLogo;

/// 广告标题。
@property (nonatomic, copy, readonly, nullable) NSString *adTitle;

/// 广告描述。
@property (nonatomic, copy, readonly, nullable) NSString *adDescription;

/// 图片、视频或 HTML 物料类型。
@property (nonatomic, assign, readonly) CQNativeAdMode adMode;

/// App 评分，区间为 1～5；无值时返回 -1。
@property (nonatomic, assign, readonly) NSInteger score;

/// 评论数量；无值时返回 -1。
@property (nonatomic, assign, readonly) NSInteger commentNum;

/// 安装包大小，单位 Byte；无值时返回 -1。
@property (nonatomic, assign, readonly) NSInteger appSize;

/// 视频时长，单位秒；无值时返回 0。
@property (nonatomic, assign, readonly) NSInteger videoDuration;

/// App 价格文案，例如“免费”。
@property (nonatomic, copy, readonly, nullable) NSString *appPrice;

/// 广告主名称或链接。
@property (nonatomic, copy, readonly, nullable) NSString *advertiser;

/// 品牌名称。
@property (nonatomic, copy, readonly, nullable) NSString *brandName;

@end

NS_ASSUME_NONNULL_END

#endif
