//
//  CQVideoConfig.h
//  CQAdSDK
//
//  Created by hanxiaoyu on 2025/6/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CQVideoConfig : NSObject

/**
 是否支持用户点击 MediaView 改变视频播放暂停状态，默认 NO
 设为 YES 时，用户点击会切换播放器播放、暂停状态
 */
@property (nonatomic, assign) BOOL userControlEnable;


@end

NS_ASSUME_NONNULL_END
