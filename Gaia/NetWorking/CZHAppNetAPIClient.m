//
//  CZHAppNetAPIClient.m
//  GeeCityManager
//
//  Created by 聚城科技 on 16/3/9.
//  Copyright © 2016年 聚城科技. All rights reserved.
//

#import "CZHAppNetAPIClient.h"

static NSString * const AFAppDotNetAPIBaseURLString = @"";

@implementation CZHAppNetAPIClient

+ (instancetype)sharedClient {

    static CZHAppNetAPIClient *_sharedClient = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedClient = [[CZHAppNetAPIClient alloc] initWithBaseURL:[NSURL URLWithString:AFAppDotNetAPIBaseURLString]];
        
        [_sharedClient.requestSerializer willChangeValueForKey:@"timeoutInterval"];
        _sharedClient.requestSerializer.timeoutInterval = 60.f;
        [_sharedClient.requestSerializer didChangeValueForKey:@"timeoutInterval"];
        
        //        是否通过证书验证
        _sharedClient.securityPolicy = [AFSecurityPolicy policyWithPinningMode:AFSSLPinningModeNone];
        //        接受数据类型
         _sharedClient.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"application/json",@"text/json",@"text/javascript",@"text/html", nil];
        //        数据下载完成，数据为JSON
//        _sharedClient.responseSerializer = [AFJSONResponseSerializer serializer];
        //        数据为XML
        _sharedClient.responseSerializer = [AFHTTPResponseSerializer serializer];
        //        数据为PLIST
        //        _sharedClient.responseSerializer = [AFPropertyListResponseSerializer serializer];
        //        _sharedClient.responseSerializer = [AFXMLDocumentResponseSerializer serializer];
        
        //        AFHTTPResponseSerializer 返回原生的数据
        //        AFJSONResponseSerializer 数组或者是字典
        //        AFXMLParserResponseSerializer  NSXMLParser对象
  //  });

    });
    
    return _sharedClient;
}
@end

