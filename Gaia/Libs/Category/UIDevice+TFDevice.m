//
//  UIDevice+TFDevice.m
//  Vincialign
//
//  Created by 曹兆华 on 2018/11/19.
//  Copyright © 2018年 曹兆华. All rights reserved.
//

#import "UIDevice+TFDevice.h"

@implementation UIDevice (TFDevice)

+ (void)switchNewOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    
    NSNumber *resetOrientationTarget = [NSNumber numberWithInt:UIInterfaceOrientationUnknown];
    
    [[UIDevice currentDevice] setValue:resetOrientationTarget forKey:@"orientation"];
    
    NSNumber *orientationTarget = [NSNumber numberWithInt:interfaceOrientation];
    
    [[UIDevice currentDevice] setValue:orientationTarget forKey:@"orientation"];
    
}

@end
