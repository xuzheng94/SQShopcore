//
//  SQSsoModel.h
//  shopcore
//
//  Created by user on 2023/8/2.
//

#import <Foundation/Foundation.h>

@interface SQSsoModel : NSObject

// 用户唯一标识，必填
@property (nonatomic, strong) NSString *userUUID;


/* --------------用户相关-------------- */

// 用户昵称，必填
@property (nonatomic, strong) NSString *nickName;

// 用户头像，必填
@property (nonatomic, strong) NSString *avatar;

// 加密手机号，选填
@property (nonatomic, strong) NSString *cryptedMobile;

// 手机区号，选填
@property (nonatomic, strong) NSString *mobileAreaCode;


/* --------------签名相关-------------- */

// 参与签名时间戳(精确到秒)，必填
@property (nonatomic, strong) NSNumber *signTimestamp;

// 签名，必填
// 签名算法：采用MD5算法。 签名字符串组织方式： userUUID + nickName + avatar + mobileAreaCode + cryptedMobile + signTimestamp + signDelimiter + secret 将上述组织的字符串进行MD5即可，如果不传手机号则mobileAreaCode 和cryptedMobile不需要拼接。 其中signDelimiter固定为：|，secret 为双方服务端约定好的密钥
@property (nonatomic, strong) NSString *sign;


@end

