//
//  UIColor+ColorChange.h
//  VincialignD
//
//  Created by 曹兆华 on 2018/5/21.
//  Copyright © 2018年 曹兆华. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (ColorChange)

// 颜色转换：iOS中（以#开头）十六进制的颜色转换为UIColor(RGB)
+ (UIColor *) colorWithHexString: (NSString *)color;

@end
