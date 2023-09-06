//
//  SQTabBarController.h
//  shopcore
//
//  Created by Sunny on .
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SQTabBarController : UITabBarController

/// 获取当前实例
+ (SQTabBarController *)currentInstance;

/// 重新初始化生成所有的控制器
- (void)configViewControllers;

/// 切换主题颜色
- (void)changeSkin;

/// 切换多语言
- (void)changeLanguage;

+ (NSArray<NSString *> *)itemsOriginTagArray;

- (void)showTabBarRedDot:(NSString *)url;

- (void)hideTabBarRedDot:(NSString *)url;


@end

NS_ASSUME_NONNULL_END
