//
//  CQAdGameManager.h
//  CQAdSDK
//
//  Created by hanxiaoyu on 2024/7/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CQAdGameManager : NSObject

/**
 * 即将废弃,请使用openGame:extra:completion:方法
 */
+(void)openGame:(NSString *)userId completion:(void(^)(BOOL success, NSError * _Nullable error))completion DEPRECATED_MSG_ATTRIBUTE("即将废弃,请使用openGame:extra:completion:方法");

/*
 * 打开游戏
 * @param userId 用户ID
 * @param extra 额外参数
 * @param completion 完成回调
 */
+(void)openGame:(NSString *)userId extra:(NSDictionary *)extra completion:(void(^)(BOOL success, NSError * _Nullable error))completion;

/*
 * 打开游戏
 * @param userId 用户ID
 * @param extra 游戏ID
 * @param extra 额外参数
 * @param completion 完成回调
 */
+(void)openGame:(NSString *)userId gameId:(NSString *)gameId extra:(NSDictionary *)extra completion:(void(^)(BOOL success, NSError * _Nullable error))completion;


@end

NS_ASSUME_NONNULL_END
