//
//  CZHAppNetAPIClient.h
//  GeeCityManager
//
//  Created by 聚城科技 on 16/3/9.
//  Copyright © 2016年 聚城科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFHTTPSessionManager.h"

@interface CZHAppNetAPIClient : AFHTTPSessionManager

+ (instancetype)sharedClient;

@end
