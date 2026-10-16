#ifndef CQAD_ADAPTER_API_CQADAPTERBIDDING_H
#define CQAD_ADAPTER_API_CQADAPTERBIDDING_H

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, CQAdBidLossReason) {
    CQAdBidLossReasonOther = 0, /// 未知原因
    CQAdBidLossReasonNoAd, /// 无填充
    CQAdBidLossReasonTimeout, /// 超时
    CQAdBidLossReasonLowPrice, /// 竞价失败
    CQAdBidLossReasonLoadFailed = 4, /// 加载失败，与未知原因区分；已有枚举值保持不变
    CQAdBidLossReasonExpired = 5, /// 已加载广告缓存过期，不是请求超时
};

#endif
