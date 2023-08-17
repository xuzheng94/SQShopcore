//
//  SQShopApi.h
//  shopcore
//
//  Created by Sunny on .
//

#import <UIKit/UIKit.h>
#import <shopcore/shopcore.h>

@interface SQShopApi : NSObject

/**
 @brief 注册
 @param config 店铺配置
 */
+ (void)registerShopConfig:(SQShopConfig *)config;

/**
 @brief 处理外部链接回跳，微信支付等
 @param url 外部链接
 */
+ (BOOL)handleOpenURL:(NSURL *)url;

/**
 @brief sso授权登录
 @param ssoModel sso相关信息
 @param isForce YES：每次调用强制重新授权；NO：优先使用本地已存在登录态
 @param callback 授权成功后的回调
 */
+ (void)sso:(SQSsoModel *)ssoModel
    isForce:(BOOL)isForce
   callback: (void (^)(NSNumber *code, NSString *msg))callback;

/// 退出登录
+ (void)logout;

/**
 @brief 获取是否登录
 @return YES为已登录
 */
+ (BOOL)isLogin;

/// 实例化Tab页面
+ (UITabBarController *)createPageTabs;

/// 实例化微首页
+ (SPViewController *)createPageMicroHome;

/// 实例化购物车页面
+ (SPViewController *)createPageShopCart;

/// 实例化我的订单列表
+ (SPViewController *)createPageMyOrderList;

/**
 @brief 实例化商品详情
 @param productId 商品ID
 */
+ (SPViewController *)createPageProduct:(NSString*)productId;

/**
 @brief 实例化一个新页面
 @param url 页面路径
 */
+ (SPViewController *)createPageWithURL:(NSString*)url;

@end

