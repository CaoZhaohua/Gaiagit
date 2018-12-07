//
//  LeeFitUItool.h
//  HealthService
//
//  Created by 李宝莉 on 16/6/12.
//  Copyright © 2016年 Bank. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LeeFitUItool : NSObject
/**
 *  屏幕适配方法
 */
+(CGRect)getRectWithX:(CGFloat)x Y:(CGFloat)y Width:(CGFloat)width andHeight:(CGFloat)height ;
/**
 *  屏幕适配单个横向尺寸
 */
+(CGFloat)getXWithX:(CGFloat)x ;
/**
 *  屏幕适配单个纵向尺寸
 */
+(CGFloat)getYWithY:(CGFloat)y ;
@end
