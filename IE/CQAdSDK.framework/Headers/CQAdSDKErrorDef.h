//
//  CQAdSDKErrorDef.h
//  CQAdSDK
//
//  Created by bell on 2021/10/8.
//

#ifndef CQAdSDKErrorDef_h
#define CQAdSDKErrorDef_h

typedef enum : NSUInteger {
    CQAdSDKError_None      = 0,    // 没有错误
    CQAdSDKError_NoAds     = 1,    // 没有广告填充
    CQAdSDKError_Timeout   = 2,    // 请求广告超时
    CQAdSDKError_Network   = 3,    // 网络错误
    CQAdSDKError_Server    = 4,    // 服务器错误
    CQAdSDKError_Other     = 5,    // 其它错误
} CQAdSDKError;

#endif /* CQAdSDKErrorDef_h */
