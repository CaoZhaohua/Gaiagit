//
//  NSMutableDictionary+Category.m
//  iOS-Category
//
//  Created by 庄BB的MacBook on 16/7/29.
//  Copyright © 2016年 BBFC. All rights reserved.
//

#import "NSMutableDictionary+Category.h"

@implementation NSMutableDictionary (Category)
- (void)safeSetObject:(id)obj forKeyedSubscript:(id<NSCopying>)key
{
    if (!key) {
        return ;
    }
    
    if (!obj) {
        [self removeObjectForKey:key];
    }
    else {
        [self setObject:obj forKey:key];
    }
}

- (void)safeSetObject:(id)aObj forKey:(id<NSCopying>)aKey
{
    if (aObj && ![aObj isKindOfClass:[NSNull class]] && aKey) {
        [self setObject:aObj forKey:aKey];
    } else {
        return;
    }
}

- (id)safeObjectForKey:(id<NSCopying>)aKey
{
    if(aKey == nil || ![self isKindOfClass:[NSDictionary class]])
        return @"";
    
    id object = [self objectForKey:aKey];
    if (object==nil || object == [NSNull null] ) {
        return @"";
    }
    
    if( [object isKindOfClass:[NSString class]] && [object isEqualToString:@"<null>"])
        return @"";
    
    return object;
}
@end
