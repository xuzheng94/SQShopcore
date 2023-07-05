//
//  ConfigRequest.h
//  shopcore
//
//  Created by Sunny on 2021/11/24.
//

#import <Foundation/Foundation.h>

@interface ConfigRequest : NSObject

+ (instancetype)sharedInstance;

- (void)loadConfig;

- (void)loadShopStyleConfig;

- (void)awaitLoadShopFacade;

+ (void)loadConfigWithKeys:(NSArray *)keys resp:(void (^)(NSDictionary *resp))resp;

+ (void)loadResourceWithUrl:(NSString *)url resp:(void (^)(NSData *data))resp;

@end
