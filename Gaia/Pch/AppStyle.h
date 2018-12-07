//
//  AppStyle.h
//  Gaia
//
//  Created by 曹兆华 on 2018/12/4.
//  Copyright © 2018年 曹兆华. All rights reserved.
//

#ifndef AppStyle_h
#define AppStyle_h


#define KUIScreenWidth [UIScreen mainScreen].bounds.size.width
#define KUIScreenHeight [UIScreen mainScreen].bounds.size.height
#define kWindow [UIApplication sharedApplication].keyWindow




#define Padding 10



//判断是否iPhone X
#define kIS_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125,2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define  kStatusBarHeight      (kIS_iPhoneX ? 44.f :20.f)
#define  kTabbarHeight        (kIS_iPhoneX ? (49.f+34.f) :49.f)
#define  kStatusBarAndNavigationBarHeight  (kIS_iPhoneX ? 88.f : 64.f)
#define  kTabbarSafeBottomMargin        (kIS_iPhoneX ? 34.f : 0.f)







#endif /* AppStyle_h */
