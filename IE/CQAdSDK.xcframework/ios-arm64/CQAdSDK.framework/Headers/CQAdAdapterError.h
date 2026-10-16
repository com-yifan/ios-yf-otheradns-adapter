#ifndef CQAD_ADAPTER_API_CQADAPTERERROR_H
#define CQAD_ADAPTER_API_CQADAPTERERROR_H

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSErrorDomain const CQAdAdapterErrorDomain;

typedef NS_ERROR_ENUM(CQAdAdapterErrorDomain, CQAdAdapterErrorCode) {
    CQAdAdapterErrorCodeUnknown = 1,
    CQAdAdapterErrorCodeNotSupported,
    CQAdAdapterErrorCodeInvalidRequest,
    CQAdAdapterErrorCodeSDKNotReady,
    CQAdAdapterErrorCodeNoFill,
    CQAdAdapterErrorCodeTimeout,
    CQAdAdapterErrorCodeCancelled,
    CQAdAdapterErrorCodeInvalidAdapter,
    CQAdAdapterErrorCodeIncompatibleAPIVersion,
    CQAdAdapterErrorCodeDuplicateSDKId,
    CQAdAdapterErrorCodeRenderFailed,
};

NS_ASSUME_NONNULL_END

#endif
