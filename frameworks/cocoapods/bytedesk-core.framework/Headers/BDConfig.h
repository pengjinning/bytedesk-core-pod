//
//  BDConfig.h
//  bytedesk-core
//
//  Created by 萝卜丝 on 2019/3/26.
//  Copyright © 2019 KeFuDaShi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BDConfig : NSObject

/**
 恢复默认值
 */
+ (void)restoreDefault;

/**
 本地测试，需要本地部署服务器
 */
+ (void)enableLocalHost;

/**
 消息服务器地址

 @return nsstring 注意：地址没有http前缀
 */
+ (NSString *)getMqttHost;

+ (void)setMqttHost:(NSString *)host;

/**
 消息服务器端口号

 @return nsinteger 默认:1883
 */
+ (NSInteger)getMqttPort;

+ (void)setMqttPort:(NSInteger)port;

/**
 消息服务器用户名

 @return nsstring
 */
+ (NSString *)getMqttAuthUsername;

+ (void)setMqttAuthUsername:(NSString *)username;

/**
 消息服务器密码

 @return nsstring
 */
+ (NSString *)getMqttAuthPassword;

+ (void)setMqttAuthPassword:(NSString *)password;

/**
 WebRTC STUN server

 @return string
 */
+ (NSString *)getWebRTCStunServer;

+ (void)setWebRTCStunServer:(NSString *)stunServer;

/**
WebRTC TURN server

 @return string
 */
+ (NSString *)getWebRTCTurnServer;

+ (void)setWebRTCTurnServer:(NSString *)turnServer;

/**
 WebRTC TURN 用户名

 @return 用户名
 */
+ (NSString *)getWebRTCTurnUsername;

+ (void)setWebRTCTurnUsername:(NSString *)username;

/**
 WebRTC TURN 密码

 @return 密码
 */
+ (NSString *)getWebRTCTurnPassword;

+ (void)setWebRTCTurnPassword:(NSString *)password;

/**
 rest api接口host

 @return nsstring 注意：地址以 http或https开头, '/'结尾
 */
+ (NSString *)getRestApiHost;

+ (void)setRestApiHost:(NSString *)host;


/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSString *)getRestApiHostIM;

+ (void)setRestApiHostIM:(NSString *)host;


/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSString *)getRestApiHostKF;

+ (void)setRestApiHostKF:(NSString *)host;

/**
 切换到IM+KF服务器
 */
+ (void)switchToONE;

/**
 分离服务器的情况下，切换到IM服务器
 */
+ (void)switchToIM;

/**
  分离服务器的情况下，切换到KF服务器
 */
+ (void)switchToKF;

///////////////////////////////////////

/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSString *)getQRCodeBaseUrl;

/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSString *)getApiBaseUrl;

/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSString *)getPasswordOAuthTokenUrl;

/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSString *)getApiVisitorBaseUrl;

/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSString *)getVisitorGenerateUsernameUrl;

/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSString *)getVisitorRegisterUserUrl;

/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSString *)getVisitorRegisterUserUidUrl;

/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSString *)getVisitorRegisterAdminUrl;

/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSString *)getUploadImageUrl;

/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSString *)getUploadVoiceUrl;

/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSString *)getUploadFileUrl;



@end

NS_ASSUME_NONNULL_END
