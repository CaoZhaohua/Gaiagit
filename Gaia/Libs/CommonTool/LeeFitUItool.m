//
//  LeeFitUItool.m
//  HealthService
//
//  Created by 李宝莉 on 16/6/12.
//  Copyright © 2016年 Bank. All rights reserved.
//

#import "LeeFitUItool.h"

@implementation LeeFitUItool
//屏幕适配的方法
+(CGRect)getRectWithX:(CGFloat)x Y:(CGFloat)y Width:(CGFloat)width andHeight:(CGFloat)height
{
    CGFloat X = x * KUIScreenWidth / 375;
    CGFloat Y = y * KUIScreenHeight / 667;
    
    return CGRectMake(X, Y, width * (KUIScreenWidth / 375), (height * KUIScreenHeight / 667));
}
+(CGFloat)getXWithX:(CGFloat)x {
    return x * KUIScreenWidth / 375;
}
+(CGFloat)getYWithY:(CGFloat)y {
    return y * KUIScreenHeight / 667;
}
@end
