//
//  SQShopViewController.h
//  shopcore
//
//  Created by Sunny on .
//

#import <UIKit/UIKit.h>
#import <shopcore/SPViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface SQShopViewController : SPViewController

//@property (assign, nonatomic) BOOL scrollEnable;
@property (nonatomic, copy) void (^onHeight)(CGFloat height);

+ (instancetype)cellViewControllerWithWidth:(CGFloat)width;

- (void)adjustHeightWithSize:(NSDictionary *)sizeDic;


@end

NS_ASSUME_NONNULL_END
