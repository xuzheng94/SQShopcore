//
//  ShopCoreManager.h
//  shopcore
//
//  Created by Sunny on 2022/1/10.
//


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    OPEN_MINIPROGRAM_TYPE_PAY = 1
} OPEN_MINIPROGRAM_TYPE;

@interface ShopCoreManager : NSObject

@property (nonatomic, strong) NSURL *linkUrl;

@property (nonatomic, assign) OPEN_MINIPROGRAM_TYPE openMiniType;

@property (nonatomic, strong) NSMutableDictionary *sessionStorage;

+ (instancetype)sharedInstance;

+ (UIViewController *)windowRootViewController;

+ (void)registerApp:(NSDictionary *)launchOptions;

+ (void)registerSDKsAfterPrivacy;

+ (BOOL)handleOpenURL:(NSURL *)url;

+ (BOOL)isWXAppInstalled;

/**
 打开微信小程序
 @param userName 拉起的小程序的原始id(gh开头)
 @param path 拉起小程序页面的可带参路径，不填默认拉起小程序首页，对于小游戏，可以只传入 query 部分，来实现传参效果，如：传入 "?foo=bar"。
 @param miniProgramType 拉起小程序的类型（0:正式，1:开发，2:体验）
 */
+ (void)openMiniProgramWithUserName:(NSString *)userName
                               path:(NSString *)path
                    miniProgramType:(NSUInteger)miniProgramType;

+ (void)handleLink;

/** 分享微信小程序
 @param userName 拉起的小程序的原始id(gh开头)
 @param path 拉起小程序页面的可带参路径，不填默认拉起小程序首页，对于小游戏，可以只传入 query部分，来实现传参效果，如：传入 "?foo=bar"。
 @param miniProgramType 拉起小程序的类型（0:正式，1:开发，2:体验）
 @param title 分享卡片标题
 @param thumbData 分享卡片背景图,小程序新版本的预览图二进制数据，6.5.9及以上版本微信客户端支持
 限制大小不超过128KB，自定义图片建议长宽比是 5:4。
 @param webpageUrl 兼容低版本的网页链接
 */
+ (void)shareMiniProgramWithUserName:(NSString *)userName
                                path:(NSString *)path
                     miniProgramType:(NSUInteger)miniProgramType
                               title:(NSString *)title
                           thumbData:(NSData *)thumbData
                          webpageUrl:(NSString *)webpageUrl;

/** 分享网页
 @param title 分享卡片标题
 @param thumbImage 缩略图
 @param webpageUrl 网页链接
 */
+ (void)shareWebpageWithUrl:(NSString *)webpageUrl
                      title:(NSString *)title
                 thumbImage:(UIImage* )thumbImage;
                                

+ (void)postSwithTab:(NSDictionary *)obj;
+ (void)postLogin:(NSDictionary *)obj;

@end

NS_ASSUME_NONNULL_END
