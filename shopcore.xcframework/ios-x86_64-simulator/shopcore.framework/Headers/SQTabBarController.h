//
//  SQTabBarController.h
//  shopcore
//
//  Created by Sunny on .
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, SQShopTabPageType) {
    SQShopTabPageTypeHome      = 0,
    SQShopTabPageTypeCart      = 1,
    SQShopTabPageTypeOrder     = 2,
};

NS_ASSUME_NONNULL_BEGIN

@interface SQTabBarController : UITabBarController

/// SDK 根据pageType定位到对应的item
- (void)switchTabWithPageType:(SQShopTabPageType)pageType;


/// 获取当前实例
+ (SQTabBarController *)currentInstance;
/// 重新初始化生成所有的控制器
- (void)configViewControllers;
/// 切换主题颜色
- (void)changeSkin;
/// 切换多语言
- (void)changeLanguage;
///
- (NSArray<NSString *> *)itemsOriginTagArray;
/// 显示红点(ICON右上方)
- (void)showTabBarRedDot:(NSString *)url;
/// 隐藏红点(ICON右上方)
- (void)hideTabBarRedDot:(NSString *)url;
/// 根据url获取index
- (NSInteger)getItemIndexWithUrl:(NSString *)url;

@end

NS_ASSUME_NONNULL_END
