//
//  AdProfBaseAd.h
//  AdProfSDK
//
//  Created by coderqi on 2025/12/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/**
 * 广告素材信息对象。
 * 负责承载单条广告返回的素材标识与素材地址，
 * 仅当全局配置 canGetMaterialInfo（m_ext.c_g_m_i=1）开启时由各广告对象的 getMaterialInfo 返回。
 */
@interface AdProfMaterialInfo : NSObject

/// 素材ID，服务端未下发时为空字符串
@property (nonatomic, copy, nullable) NSString *materialID;

/// 视频素材地址，非视频广告时为 nil
@property (nonatomic, copy, nullable) NSString *videoUrl;

/// 图片素材地址集合，无图片素材时为空数组
@property (nonatomic, copy, nullable) NSArray<NSString *> *imgUrls;

/// 落地页地址，同 getLandpageUrl 取值来源，未下发时为 nil
@property (nonatomic, copy, nullable) NSString *landUrl;

@end

@interface AdProfBaseAd : NSObject

/// 广告的拓展信息
@property (nonatomic, strong, readonly)NSMutableDictionary *extInfo;

- (BOOL)isReady;

@end

NS_ASSUME_NONNULL_END
