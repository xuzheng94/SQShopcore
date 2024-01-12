//
//  SQShopConfig.h
//  shopcore
//
//  Created by user on 2023/8/8.
//

#import <Foundation/Foundation.h>

@interface SQShopConfig : NSObject

/// 店铺ID (必填)
@property (nonatomic, strong) NSString *mchID;

/// app url scheme (必填)
/// app外场景打开app时使用，可用项目已定义的scheme，也可为sdk重新定义一个
@property (nonatomic, strong) NSString *urlScheme;

/// 访问域名 (选填)
@property (nonatomic, strong) NSString *h5Domain;

/// 是否是会员制，需要会员进行购买 (选填)
@property (nonatomic, assign) BOOL isMemberMode;


/* --------------微信支付相关-------------- */
/// 开发平台移动应用APPID，选填
/// 若app内注册了wx的api则无需传递
@property (nonatomic, strong) NSString *wxAppId;

/// app universalLink，选填
/// 若app内注册了wx的api则无需传递
@property (nonatomic, strong) NSString *universalLink;


@end
