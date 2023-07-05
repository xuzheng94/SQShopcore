//
//  SQShopModel.h
//  shopcore
//
//  Created by Sunny on .
//

#import <Foundation/Foundation.h>

typedef enum {
    SQ_SHOP_PAGE_CART = 1,
    SQ_SHOP_PAGE_ORDERLIST = 2,
    SQ_SHOP_PAGE_PRODUCT = 3,
} SQ_SHOP_PAGE;

@interface SQShopModel : NSObject

/**-----------------require-----------------*/
/**
 访问域名 格式: m.shop2c.cn
 */
@property (nonatomic, strong) NSString *h5Domain;
/**
 店铺id
 */

/**-----------------optional-----------------*/
@property (nonatomic, strong) NSString *mchId;
/**
 可信任域名 格式同上 [ ]
 可空，若为空则只信任h5Domain
 */
@property (nonatomic, strong) NSArray *safeHostArray;
/**
 app英文标识
 */
@property (nonatomic, strong) NSString *appEnName;
/**
 是否显示全部商品tab
 */
@property (nonatomic, assign) BOOL showTabProductAll;
/**
 universalLink 微信支付时使用
 */
@property (nonatomic, strong) NSString *universalLink;
/**
 wxAppId 微信支付时使用
 */
@property (nonatomic, strong) NSString *wxAppId;
/**
 wxAppId 微信支付时使用
 */
@property (nonatomic, strong) NSString *urlScheme;

@property (nonatomic, assign) BOOL isCdfi;

+ (instancetype)sharedInstance;

@end
