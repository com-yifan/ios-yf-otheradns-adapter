//
//  CQAdBaseAd.h
//  CQAdSDK
//
//  Created by splendourbell on 2021/10/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CQAdBaseAd : NSObject

@property (nonatomic, copy, readonly) NSString* sdkName;

@property (nonatomic, copy, readonly) NSString* reqId;

@property (nonatomic, assign, readonly) long long beginTime;

@property (nonatomic, strong)NSDictionary *extraInfo;

@property (nonatomic, assign, readonly) BOOL isCacheConfig;
/**
 返回广告的eCPM，单位：分
 
 @return 成功返回一个大于等于0的值，-1表示无权限或后台出现异常
 */
- (NSInteger)eCPM;



@end

NS_ASSUME_NONNULL_END
