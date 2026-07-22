//
//  CQAdPrivqcyConfig.h
//  CQAdSDK
//
//  Created by hanxiaoyu on 2022/8/8.
//

#import <Foundation/Foundation.h>

/// optional  Number 是否限制个性化广告:0-不限制，1-限制，默认为0。适用于csj、ks、Bd、gdt。
static NSString * const kCQPrivacyLimitPersonalAds = @"CQPrivacyLimitPersonalAds";

/// optional  NSNumber，是否限制程序化广告:0-不限制，1-限制，默认为0。只适用于Ks。
static NSString * const kCQPrivacyLimitProgrammaticAds = @"CQPrivacyLimitProgrammaticAds";

/// optional  是否禁止CAID：0-不禁止，1-禁止，默认为0。只适用于bd。
static NSString * const kCQPrivacyForbiddenCAID = @"CQPrivacyForbiddenCAID";

/// optional  NSNumber，是否禁止定位，0-不禁止，1-禁止，默认0。适用于csj,ks。
static NSString * const kCQPrivacyDisableLocation = @"CQPrivacyDisableLocation";

/// optional  NSNumber，经度的值。默认值是0.0。只适用于csj。
static NSString * const kCQPrivacyLongitude = @"CQPrivacyLongitude";

/// optional  NSNumber，纬度的值。默认值是0.0。只适用于csj。
static NSString * const kCQPrivacyLatitude = @"CQPrivacyLatitude";

/// optional  NSNumber，是成人或者儿童，2-儿童(＜15),1-儿童(15-18岁), 0-成人，默认为0(成人)。只适用于csj。
static NSString * const kCQPrivacyNotAdult = @"CQPrivacyNotAdult";


@interface CQAdPrivqcyConfig : NSObject

// 根据key配置相关隐私项
+ (void)setPrivacyWithKeyValues:(NSDictionary <const NSString *,NSNumber *>*)privacys;

// 获取当前配置项
+ (NSDictionary *)privacyConfig;

@end
