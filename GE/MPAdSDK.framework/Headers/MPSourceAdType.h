//
//  MPSourceAdType.h
//  Pods
//
//  Created byttt on 2023/1/29.
//

#ifndef MPSourceAdType_h
#define MPSourceAdType_h

typedef enum : NSUInteger {
    MPAdUnknown,           // 未知的广告源
    MPAdCSJ,               // 穿山甲
    MPAdGDT,               // 广点通
    MPAdKS,                // 快手
    MPAdFancy,             // MPFAPI
    MPAdJD,                // 京东
    MPADMY,                // 美约
    MPAdUbixMerak,         // ubix 自有预算
    MPAdOneAd
} MPAdSourceType;


#endif /* MPSourceAdType_h */
