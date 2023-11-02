//
//  NavigationManager.h
//  shopcore
//
//  Created by Sunny on 2022/2/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NavigationManager : NSObject

+ (UIWindow *)rootWindow;

/**
 获取跟视图控制器
 装修门脸的商家为门脸  --> FacadeViewController
 其他 --> TabBarViewController
 */
+ (UIViewController *)rootViewController;

/**
 重设跟视图控制器
 */
+ (void)resetRootViewControllerWithViewController: (UIViewController *)viewController;

/**
 重新进入tabBar页
 */
+ (void)reLaunchToTabBarController;

/**
 获得当前活动窗口控制器
 */
+ (UIViewController *)currentViewController;

/**
 根据url选中tab页，
 会默认先检查当前url是否是tab页
 */
+ (void)switchTabWithUrl:(NSString *)url;

/**
 根据index选中tab页面
 */
+ (void)switchTabWithIndex:(NSInteger)index;

/**
 根据url获取当前tabindex
 若不是tab页则返回-1
 */
+ (NSInteger)getTabItemIndexWithUrl:(NSString *)url;

+ (void)navigationBackWithViewController:(UIViewController *)viewController;


@end

NS_ASSUME_NONNULL_END
