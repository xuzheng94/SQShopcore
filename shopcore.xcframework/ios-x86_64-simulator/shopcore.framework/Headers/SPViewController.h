//
//  SPViewController.h
//  shopcore
//
//  Created by ethan on 2021/8/13.
//

#import <UIKit/UIKit.h>
#import <Cordova/Cordova.h>

NS_ASSUME_NONNULL_BEGIN

@interface SPViewController : CDVViewController


@property (strong, nonatomic) NSString *tag;
@property (strong, nonatomic) NSString *statusBarStyle;
@property NSString* titleStyle;

@property (strong, nonatomic) NSString *originTag;

@property (strong, nonatomic) NSDictionary *sATrackProperties;

/**
 是否需要刷新页面
 1. 有新的package时
 */
@property (assign, nonatomic) BOOL needReload;

+ (SPViewController*) create:(NSString*)url;
+ (SPViewController*) create:(NSString*)url titleStyle:(nullable NSString *)titleStyle;
+ (SPViewController*) enter:(UIViewController*)fromVC loadUrl:(NSString*)url;
+ (SPViewController*) enter:(UIViewController*)fromVC loadUrl:(NSString*)url titleStyle:(nullable NSString *)titleStyle;

- (void)createWithUrl:(NSString*)url titleStyle:(nullable NSString *)titleStyle;

- (void)reloadWebview;

- (void)reloadWebviewWithUrl:(NSString *)url;

+ (void)sendJsEvent:(NSString *)event;

+ (SPViewController *)visibleViewController;
@end

NS_ASSUME_NONNULL_END
