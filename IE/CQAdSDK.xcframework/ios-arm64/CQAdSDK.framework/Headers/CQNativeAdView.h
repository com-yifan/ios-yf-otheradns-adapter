//
//  CQNativeAdView.h
//  CQAdSDK
//
//  Created by hanxiaoyu on 2021/12/20.
//

#import <UIKit/UIKit.h>
#import <CQAdSDK/CQAdStyleDef.h>
#import <CQAdSDK/CQAdCustomNativeAd.h>
@class CQNativeAd;
NS_ASSUME_NONNULL_BEGIN

typedef void(^CQNativeAdCloseBlock)(void);
typedef void(^CQNativeAdJumpBlock)(void);

@interface CQNativeAdView : UIView <CQAdNativeTemplateView>

@property(nonatomic)CQNativeAd *natvieAd;
@property(nonatomic)CQAdStyle adStyle;
@property(nonatomic)UIView *containerView;
@property(nonatomic)UIView  *contentView;
@property(nonatomic)UILabel *titleLabel;
@property(nonatomic)UILabel *desLabel;
@property(nonatomic)UIButton*closeBtn;
/// 盖在关闭按钮上面的跳转按钮
@property (nonatomic, copy) UIButton *closeBringJumpButton;
@property(nonatomic)UIImageView *imageView;
@property(nonatomic)UIImageView *logoImage;
@property(nonatomic)UILabel *tagLabel;
@property(nonatomic)UIView *logoCover;
@property(nonatomic)UIButton *clickBtn;
/// 点击区域背景，如：点击跳转详情页或第三方应用
@property(nonatomic)UIView *clickBgView;

@property(nonatomic)CGFloat width;
@property(nonatomic)CGFloat height;
//@property(nonatomic)CQNativeAdClickBlock clickBlock;
/// - Note: 点击关闭回调
@property(nonatomic)CQNativeAdCloseBlock closeBlock;
/// - Note: 点击跳转回调
@property (nonatomic, copy) CQNativeAdJumpBlock jumpBlock;

+ (CQNativeAdView *)getNativeAdViewWithSize:(CGSize)size adStyle:(CQAdStyle)adStyle;

-(instancetype)initWithSize:(CGSize)size adStyle:(CQAdStyle)adStyle;

-(void)refreshData:(CQNativeAd *)nativeAd;

-(void)downLoadPic:(UIImage *)image;

- (BOOL)isDealTap;

- (void)delayShowCloseBtn:(NSInteger)delaySec;

- (void)showShake:(BOOL)isShowShake;

-(void)configureAniType:(CQAdSplashAniType)aniType;

-(void)configurePicShowType:(CQAdPicShowType)picShowType;

@end

NS_ASSUME_NONNULL_END
