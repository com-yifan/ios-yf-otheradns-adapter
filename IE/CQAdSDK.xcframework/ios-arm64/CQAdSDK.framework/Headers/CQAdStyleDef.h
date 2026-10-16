//
//  CQAdStyleDef.h
//  CQAdSDK
//
//  Created by hanxiaoyu on 2021/12/20.
//
#import <UIKit/UIKit.h>

#ifndef CQAdStyleDef_h
#define CQAdStyleDef_h

FOUNDATION_EXPORT NSBundle * _Nullable CQAdResourceBundle(void);
FOUNDATION_EXPORT NSString * _Nullable CQAdResourcePath(NSString *name, NSString *type);
//跳过按钮位置
typedef NS_ENUM(NSUInteger, CQAdSkipLocation) {
    CQAdSkipLocationRightTop = 0,//右上
    CQAdSkipLocationLeftTop,//左上
};

typedef NS_ENUM(NSUInteger, CQAdPicShowType) {
    CQAdPicShowTypeFill = 1,
    CQAdPicShowTypeWidth = 2,
};

typedef NS_ENUM(NSUInteger, CQAdStyle) {
    CQAdStyle_Right_Pic = 201,//左文右图
    CQAdStyle_Left_Pic = 202,//右文左图
    CQAdStyle_Big_Image = 103,//大图
    CQAdStyle_Big_Image_Title = 104,//大图带标题
    CQAdStyle_Splash = 401,//开屏
    CQAdStyle_Splash_Common = 001,//默认开屏
    CQAdStyle_Interstitial = 503,//插屏
    CQAdStyle_Interstitial_SpecialClose = 504,//插屏(503的复制版本，区别是关闭按钮在右上角)
    CQAdStyle_Interstitial_1_1 = 505,//1:1插屏
    CQAdStyle_Interstitial_Common = 002,//默认插屏
    CQAdStyle_Feed_Normal_Pic = 108,//恋爱季feed
    CQAdStyle_Banner = 109,//恋爱季banner
    CQAdStyle_LAJ_Big_Feed = 113,//恋爱记信息流
    CQAdStyle_Banner1 = 114,//运帮科技banner
    CQAdStyle_Banner2 = 115,//翼支付banner
    CQAdStyle_Flow_Feed = 116,//翼支付信息流
    CQAdStyle_Flow_Border_Feed = 117,//翼支付信息流带边框
    CQAdStyle_Banner3 = 125,//翼支付banner带关闭
};


typedef NS_ENUM(NSUInteger, CQSplashCoverType) {
    CQSplashCoverTypeFit = 0,
    CQSplashCoverTypeBlack,
    CQSplashCoverTypeBlue,
};

typedef NS_ENUM(NSUInteger, CQAdObjectInteractiveType) {
    CQAdObjectInteractiveTypeClick = 1,//点击
    CQAdObjectInteractiveTypeShake = 2,//摇一摇
    CQAdObjectInteractiveTypeTurn = 3,//转一转
    CQAdObjectInteractiveTypeSlide = 4,//滑
    CQAdObjectInteractiveTypeThroughClick = 5,//点击
};

typedef NS_ENUM(NSUInteger, CQAdSplashAniType) {
    /**
     @brief creativeInteractStyle 原本支持 0、1、2、3、4、5，目前支持0、1、3、4，删除2、5样式。
     */
    CQAdSplashAniTypeNone = 0, //无动画
    CQAdSplashAniTypeClick = 1, //点击
    CQAdSplashAniTypeClickShake,//点击+ 摇动
    CQAdSplashAniTypeClickShakeSwing,//点击+摇动+转动
    CQAdSplashAniTypeClickShakeSlide,//点击+摇动+滑动
    CQAdSplashAniTypeClickSwingSlide//点击+转动+滑动
};


#define CQAdViewFit(value)  [UIScreen mainScreen].bounds.size.width / 375.0 * value
#define CQRGBHex(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define CQRGBHexAlpha(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]

#define CQBunldeResource(name) CQAdResourcePath(name, @"png")

#define CQBunldeResourceWithType(name,type) CQAdResourcePath(name, type)


#define CQ_IS_IPHONEX   ([[UIScreen mainScreen] bounds].size.height >= 812)
#define CQAPIStatusBarHeight        (CQ_IS_IPHONEX ? 44.0f : 20.0f)
#define CQAPIBottomAreaHeight       (CQ_IS_IPHONEX ? 34.0 : 0)
#define CQScreenWidth [UIScreen mainScreen].bounds.size.width
#define CQScreenHeight [UIScreen mainScreen].bounds.size.height

#define CQ_STATUSBAR_HEIGHT \
({ \
    CGFloat height = 0.0; \
    if (@available(iOS 11.0, *)) { \
        UIWindow *keyWin = nil; \
        for (UIWindow *w in UIApplication.sharedApplication.windows) { if (w.isKeyWindow) { keyWin = w; break; } } \
        UIEdgeInsets insets = keyWin.safeAreaInsets; \
        height = insets.top > 0 ? insets.top : 20.0; \
    } else { \
        height = 20.0; \
    } \
    height; \
})

#endif /* CQAdStyleDef_h */
