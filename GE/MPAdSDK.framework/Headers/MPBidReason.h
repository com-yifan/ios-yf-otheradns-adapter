//
//  BidReason.h
//  MPAdSDK
//
//  Created by yongjiu on 2025/1/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    /// 比普通常规广告低
    BidLossCodeNormal = 1001,
    /// 比竞价广告低
    BidLossCodeHB = 1002,
    /// 竞价超时 如长时间无竞价结果通知mp sdk
    BidLossCodeTimeout = 1003,
    /// 广告换成过期
    BidLossCodeExpire = 1004,
    /// 其他
    BidLossCodeOther = 1005,
} MPBidLossCode;

typedef enum : NSInteger {
    MPADNIDCSJ = 101,        // 穿山甲
    MPADNIDYLH = 102,        // 优量汇
    MPADNIDBD = 103,         // 百度
    MPADNIDKS = 104,         // 快手
    MPADNIDADMOB = 108,      // AdMob
    MPADNIDMINTEGRAL = 109,  // Mintegral
    MPADNIDSIGMOB = 110,     // Sigmob
    MPADNIDOTHER = -1        // 其他
} MPADNID;

@interface MPBidReason : NSObject

/* ==========竞价失败时使用============ */
/// 竞价失败code
@property(nonatomic,assign)MPBidLossCode lossCode;
/// 当lossCode == BidLossCodeOther时 可以传递自定义的竞价失败原因
@property(nonatomic,copy)NSString *lossOtherReason;
/// 竞胜方价格
@property(nonatomic,assign)double winPrice;
/// 竞胜方渠道id
@property(nonatomic,assign)MPADNID winAdnId;
/// 额外字段 用于媒体自定义 key value 均为NSString 类型
@property(nonatomic,strong)NSDictionary<NSString *,NSString *> *extra;


@property(nonatomic,strong,readonly)NSDictionary<NSString *,NSString *> *lossParams;


@end

NS_ASSUME_NONNULL_END
