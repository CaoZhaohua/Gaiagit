//
//  UIDevice+TFDevice.h
//  Vincialign
//
//  Created by 曹兆华 on 2018/11/19.
//  Copyright © 2018年 曹兆华. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (TFDevice)

/**
 * @interfaceOrientation 输入要强制转屏的方向
 */
+ (void)switchNewOrientation:(UIInterfaceOrientation)interfaceOrientation;

@end

NS_ASSUME_NONNULL_END
