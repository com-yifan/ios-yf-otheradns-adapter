//
//  CQNativeAdData.h
//  CQAdSDK
//
//  Created by hanxiaoyu on 2022/5/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define CQNativeAdDefaultTitle @"去看看>>"
#define CQNativeAdDefaultDesc @"点击查看更多内容"

typedef NS_ENUM (NSInteger, CQNativeAdMode) {
    CQNativeAdModeImage          = 0, // 图片
    CQNativeAdModeVideo          = 1, // 视频
    CQNativeAdModeHTML           = 2, // HTML 模板
};

@protocol CQNativeAdData;

typedef NSObject<CQNativeAdData> CQNativeAdMeterialMeta;

/// 媒体native ad数据协议
@protocol CQNativeAdData <NSObject>

/// 物料图片集
@property (nonatomic, copy, readonly, nullable) NSString *adImage;

/// app图标
@property (nonatomic, strong, readonly, nullable) NSString *icon;
//
/// 广告logo
@property (nonatomic, strong, readonly, nullable) NSString *adLogo;

/// 广告SDKlogo
@property (nonatomic, strong, readonly, nullable) NSString *sdkLogo;

/// 广告标题
@property (nonatomic, copy, readonly, nullable) NSString *adTitle;

/// 广告详情描述
@property (nonatomic, copy, readonly, nullable) NSString *adDescription;

/// 图片/视频
@property (nonatomic, assign, readonly) CQNativeAdMode adMode;

///// app评分，区间为1-5，如果没有值返回-1
@property (nonatomic, assign, readonly) NSInteger score;

/// 评论数量，如果没有值返回-1
@property (nonatomic, assign, readonly) NSInteger commentNum;

/// 广告安装包体大小，单位Byte，如果没有值返回-1
@property (nonatomic, assign, readonly) NSInteger appSize;

/// 视频时长，单位秒，如果没有值返回0
@property (nonatomic, assign, readonly) NSInteger videoDuration;

/// app购买价格，例如'免费'，没有则为nil
@property (nonatomic, strong, readonly, nullable) NSString *appPrice;

/// 广告商标识，广告商的名称或者链接
@property (nonatomic, copy, readonly, nullable) NSString *advertiser;

/// 品牌名称，若广告返回中无品牌名称则为空
@property (copy, nonatomic, readonly, nullable) NSString *brandName;

@property (copy, nonatomic, readonly, nullable) NSString *apiCode;


@end



NS_ASSUME_NONNULL_END
