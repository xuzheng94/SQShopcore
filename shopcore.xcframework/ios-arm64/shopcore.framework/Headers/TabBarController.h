//
//  TabBarController.h
//  app
//
//  Created by Sunny on 2021/10/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TabBarController : UITabBarController
/**
 重新初始化生成所有的控制器
 */
- (void)configViewControllers;

/**
 切换主题颜色
 */
- (void)changeSkin;

- (void)changeLanguage;

+ (NSArray<NSString *> *)itemsOriginTagArray;

+ (TabBarController *)currentInstance;

@end

NS_ASSUME_NONNULL_END
