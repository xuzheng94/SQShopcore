//
//  SQShopConfig.h
//  shopcore
//
//  Created by user on 2023/8/8.
//

#import <Foundation/Foundation.h>

@interface SQShopConfig : NSObject

/// 店铺ID，必填
@property (nonatomic, strong) NSString *mchID;

/// app url scheme，必填
@property (nonatomic, strong) NSString *urlScheme;

/* --------------微信支付相关-------------- */
/// 开发平台移动应用APPID，选填
/// 若app内注册了wx的api则无需传递
@property (nonatomic, strong) NSString *wxAppId;

/// app universalLink，选填
/// 若app内注册了wx的api则无需传递
@property (nonatomic, strong) NSString *universalLink;


@end
