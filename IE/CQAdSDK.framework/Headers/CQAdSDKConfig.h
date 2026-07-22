//
//  CQAdSDKConfig.h
//  CQAdSDK
//
//  Created by bell on 2021/9/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CQAdSDKConfig : NSObject

@property (nonatomic, copy, readonly, nullable) NSString *templateIcon;
@property (nonatomic, copy, readonly, nullable) NSString *selfRenderIcon;

+ (nullable NSString *)templateIcon;
+ (nullable NSString *)selfRenderIcon;
+ (nullable NSString *)templateIconForSDKName:(NSString *)sdkName;
+ (nullable NSString *)selfRenderIconForSDKName:(NSString *)sdkName;

/**
 *  @brief 因为支持按需导入第三方SDK平台，
 *  ！！！所以务必调用此方法，检查一下是否链接成功对应SDK
 */
+ (NSArray<NSString*>*)supportSDKs;

/**
 *  @brief SDK初始化配置 请求广告前，必须优先调用。
 *  @param appId appId
 *  @param mediaVersion 媒体自定义版本号
 */
+ (void)config:(NSString*)appId mediaVersion:(NSString *)mediaVersion;

/**
 *  @return 当前版本号
 */
+ (NSString*)version;

/**
 * @brief 打印部分开发日志，
 * 如果想开启 广点通，快手，百度，穿山甲 平台的广告日志，可以直接调用对应sdk接口进行打开。
 */
+ (void)setDebug:(BOOL)debug;

/**
 * 限制个性化广告
 * @param limit YES限制，默认NO
 */
+ (void)setLimitPersonalAds:(BOOL)limit;

/**
 * 用户id
 * @param userId 媒体自定义id
 */
+ (void)setCustomUserId:(NSString *)userId;

/**
 * 当明确得知程序没有权限获取用户的idfa，且接入方知道用户的idfa的情况下，为了提升收益，可以选择传入idfa。
 * 当传入自定义idfa时，SDK直接使用传入的idfa，如果不传，SDK会尝试获取用户的idfa。
 */
+ (void)setCustomIDFA:(NSString *)customIdfa;

/**
 * 传入 CAID（中国广告标识符）及旧版 CAID，由接入方自行获取后传入。
 * 不传时不影响任何现有逻辑。
 */
+ (void)setCustomCAID:(NSString *)caid version:(NSString *)version
              oldCAID:(NSString *)oldCaid oldVersion:(NSString *)oldVersion;


/**
 * extra info
 * @param extraInfo 媒体自定义参数
 */
+ (void)setExtraInfo:(NSDictionary *)extraInfo;

/**
 * 调起微信小程序（包含小游戏）广告，是指APP用户点击SDK广告后，调起微信并直接到达投放广告主的小程序/小游戏，并在微信内完成广告转化的一种新的广告主预算投放形式。
 * SDK初始化时传入微信appid和universal link链接
 * 保证已经集成了微信openSDK，iOS SDK版本要求高于：1.8.6.1
 * 接入新版百度广告SDK，百度SDK版本要求高于：4.892
 */
+ (void)setWXAppId:(NSString *)appid universalLink:(NSString *)universalLink;

/**
 * 开启主动反调试防御。
 * 开启后，调试器尝试 attach 到宿主 App 时进程将退出（预期安全行为）。
 * 默认关闭，需在 config:mediaVersion: 之前调用。
 * @param enabled YES 开启主动防御，NO 关闭（默认）
 */
+ (void)setActiveAntiDebugEnabled:(BOOL)enabled;

@end

NS_ASSUME_NONNULL_END
