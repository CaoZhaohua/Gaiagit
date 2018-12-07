//
//  UINavigationBar+navAlpha.h
//  导航栏隐藏
//
//  Created by PW on 17/3/11.
//  Copyright © 2017年 Oriental Horizon. All rights reserved.
//

#import <UIKit/UIKit.h>
#define NavigationBarBGColor [UIColor colorWithRed:32/255.0f green:177/255.0f blue:232/255.0f alpha:1]
@interface UINavigationBar (navAlpha)

// 改变透明度的view
@property (nonatomic, strong) UIView *alphaView;

// 根据颜色改变透明度
- (void)changeNavigationBarAlphaWith:(UIColor *)color;
- (void) resetNavBar;
@end
