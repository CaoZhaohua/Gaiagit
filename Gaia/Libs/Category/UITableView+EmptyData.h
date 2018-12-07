//
//  UITableView+EmptyData.h
//  Vincialign
//
//  Created by 曹兆华 on 2018/9/4.
//  Copyright © 2018年 曹兆华. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableView (EmptyData)

//添加一个方法
- (void) tableViewDisplayWitMsg:(NSString *) message ifNecessaryForRowCount:(NSUInteger) rowCount;


@end
