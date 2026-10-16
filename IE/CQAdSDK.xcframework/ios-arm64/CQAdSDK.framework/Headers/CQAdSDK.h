//
//  CQAdSDK.h
//  CQAdSDK
//
//  Created by bell on 2021/9/27.
//

#import <Foundation/Foundation.h>
#import <CQAdSDK/CQAdSDKConfig.h>
#import <CQAdSDK/CQAdSDKErrorDef.h>
#import <CQAdSDK/CQAdSplashAd.h>
#import <CQAdSDK/CQAdInterstitialAd.h>
#import <CQAdSDK/CQAdExpressFeedAd.h>
#import <CQAdSDK/CQAdRewardVideoAd.h>
#import <CQAdSDK/CQNativeAdsManager.h>
#import <CQAdSDK/CQNativeAd.h>
#import <CQAdSDK/CQNativeAdData.h>
#import <CQAdSDK/CQNativeAdView.h>
#import <CQAdSDK/CQAdStyleDef.h>
#import <CQAdSDK/CQAdPrivqcyConfig.h>
#if __has_include(<CQAdSDK/CQAdGameManager.h>)
#import <CQAdSDK/CQAdGameManager.h>
#endif
#import <CQAdSDK/CQVideoConfig.h>

#if __has_include(<CQAdSDK/CQDrama.h>)
#import <CQAdSDK/CQDrama.h>
#endif

// Adapter 接入协议。媒体自定义 Adapter 及独立 ADN Adapter framework 均依赖这些公开头。
#import <CQAdSDK/CQAdAdapterError.h>
#import <CQAdSDK/CQAdAdapterBidding.h>
#import <CQAdSDK/CQAdCustomAdapter.h>
#import <CQAdSDK/CQAdCustomConfigAdapter.h>
#import <CQAdSDK/CQAdCustomSplashAdapter.h>
#import <CQAdSDK/CQAdCustomInterstitialAdapter.h>
#import <CQAdSDK/CQAdCustomRewardedVideoAdapter.h>
#import <CQAdSDK/CQAdCustomExpressAd.h>
#import <CQAdSDK/CQAdCustomExpressAdapter.h>
#import <CQAdSDK/CQAdCustomNativeAd.h>
#import <CQAdSDK/CQAdCustomNativeAdapter.h>
