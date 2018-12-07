//
//  VDrequestService.m
//  Vincialign
//
//  Created by 曹兆华 on 2018/8/1.
//  Copyright © 2018年 曹兆华. All rights reserved.
//

#import "VDrequestService.h"


static VDrequestService *RemoteServer = nil;

@interface VDrequestService()


@end

@implementation VDrequestService




//post请求带菊花

+(void)postWithURLString:(NSString *)urlString params:(NSMutableDictionary *)params  WithSuccess:(HttpSuccessBlock)success WithFailure:(HttpFailureBlock)failure{
    
    [HUD loading];
//    NSString *timeStr = [VDUtil getNowTimeTimestamp];
//    NSString *radomStr = [VDUtil randomStringWithLength:6];
//    NSString *str = [NSString stringWithFormat:@"%@%@%@",@"5a9fg2c3b6e2",timeStr,radomStr];
    
//    [params setValue:radomStr forKey:@"nonce"];
//    [params setValue:timeStr forKey:@"timestamp"];
//    [params setValue:[VDUtil sha1:str] forKey:@"signature"];
    
    NSLog(@"请求头:%@",params);
    
    [[UIApplication sharedApplication] setNetworkActivityIndicatorVisible:YES];
    
    [[CZHAppNetAPIClient sharedClient] POST:urlString parameters:params progress:^(NSProgress * _Nonnull uploadProgress) {
        //请求的进度
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        [HUD hide];
        //请求成功的回调
        NSDictionary *dict = [NSJSONSerialization JSONObjectWithData:responseObject options:0 error:nil];
        NSLog(@"请求结果:%@",dict);
        if (0 == [dict[@"code"] intValue]) {
            !success?:success(dict);
        }else{
            [HUD error:dict[@"msg"]];
            !success?:success(dict);
        }
        [[UIApplication sharedApplication] setNetworkActivityIndicatorVisible:NO];
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        [HUD hide];
        //请求失败的回调
        [[UIApplication sharedApplication] setNetworkActivityIndicatorVisible:NO];
        [HUD error:NSLocalizedString(@"网络错误", nil)];
        !failure?:failure(error);
    }];
}

+ (void)judgeNetwork{
    //-----------------扩展------------------
    [[AFNetworkReachabilityManager sharedManager] setReachabilityStatusChangeBlock:^(AFNetworkReachabilityStatus status) {
        switch (status) {
            case AFNetworkReachabilityStatusUnknown: // 未知网络
                [HUD warning:NSLocalizedString(@"您现在使用未知网络", nil)];
                break;
            case AFNetworkReachabilityStatusNotReachable: // 没有网络(断网)
                [HUD warning:NSLocalizedString(@"网络异常，请检查网络设置", nil)];
                break;
                
            case AFNetworkReachabilityStatusReachableViaWWAN: // 手机自带网络
                [HUD warning:NSLocalizedString(@"您现在使用的流量", nil)];
                break;
            case AFNetworkReachabilityStatusReachableViaWiFi: // WIFI
//                [HUD warning:@"Wifi已开启"];
                break;
        }
    }];
    [[AFNetworkReachabilityManager sharedManager] startMonitoring];
    //----------------------------------------
}



@end
