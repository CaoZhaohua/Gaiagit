//
//  VDrequestService.h
//  Vincialign
//
//  Created by 曹兆华 on 2018/8/1.
//  Copyright © 2018年 曹兆华. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZHAppNetAPIClient.h"


//oss云服务
extern NSString* const BUCKET_NAME;
extern NSString* const BUCKET_TEST_NAME;
extern NSString* const UPLOAD_OBJECT_KEY;
extern NSString * const ALIAccessKeyId;
extern NSString * const ALISecretKeyId;
extern NSString * const endPoint;



typedef void (^HttpSuccessBlock)(id responseObject);
typedef void (^HttpFailureBlock)(NSError *error);

@interface VDrequestService : NSObject


/**
 OSS 服务器
 */
+(void) ossInit;

+(id) RemoteServer;

+(NSString *)imageURLWithKey:(NSString *)key;

-(void) asyncGetFileListFromRemoteFilePath:(NSString *) filePath
                                onComplete:(void (^)(BOOL success, NSArray *fileList)) onComplete;

-(void) asyncGetObject:(NSString *)objectKey
            onComplete:(void (^)(BOOL success, NSData *result)) onComplete
       downloadProcess:(void (^)(int64_t bytesWritten, int64_t totalBytesWritten, int64_t totalBytesExpectedToWrite)) process;

-(void) asyncPutImage:(NSString *)objectKey
        localFilePath:(NSURL *)filePath
           onComplete:(void (^)(BOOL success, NSString *result)) onComplete;

- (void) asyncGetImage:(NSString *)objectKey
            onComplete:(void (^)(BOOL success, NSData *resultData))onComplete;

- (void)asyncDeleteImage:(NSString *)objectKey
              onComplete:(void (^)(BOOL success, NSData *resultData))onComplete;


/**
 *  网络判断
 *
 */
+ (void)judgeNetwork;

#pragma mark  ---------------  AFNetWork3.0
-(void) userValidate:(void (^)(BOOL success)) complete;
+ (BOOL)creatFileWithPath:(NSString *)filePath withData:(NSData*) data;

/**
 Http请求 POST请求:
 param参数列表,
 method请求方法,
 */
+(void)postWithURLString:(NSString *)urlString params:(NSDictionary *)params  WithSuccess:(HttpSuccessBlock)success WithFailure:(HttpFailureBlock)failure;

//post请求不带菊花

+(void)postnoLodingWithURLString:(NSString *)urlString params:(NSMutableDictionary *)params  WithSuccess:(HttpSuccessBlock)success WithFailure:(HttpFailureBlock)failure;



@end
