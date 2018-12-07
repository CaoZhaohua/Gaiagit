//
//  AppDelegate.m
//  Gaia
//
//  Created by 曹兆华 on 2018/12/4.
//  Copyright © 2018年 曹兆华. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    self.window = [[UIWindow alloc]initWithFrame:[UIScreen mainScreen].bounds];
    self.window.backgroundColor = [UIColor whiteColor] ;
    [self.window makeKeyAndVisible];
    [self setRootVC];

    return YES;
}

- (void)setRootVC{
    [UIView transitionWithView:[UIApplication sharedApplication].keyWindow duration:0.5f options:UIViewAnimationOptionTransitionCrossDissolve animations:^{
        BOOL oldState = [UIView areAnimationsEnabled];
        [UIView setAnimationsEnabled:NO];
        [self setupViewControllers];
        [UIView setAnimationsEnabled:oldState];
    } completion:^(BOOL finished) {
    }];
}

#pragma mark - 退出登录或者没有登录改变root
-(void)setLoginRoot{
    [UIView transitionWithView:[UIApplication sharedApplication].keyWindow duration:0.5f options:UIViewAnimationOptionTransitionCrossDissolve animations:^{
        BOOL oldState = [UIView areAnimationsEnabled];
        [UIView setAnimationsEnabled:NO];
//        [UIApplication sharedApplication].keyWindow.rootViewController = [[UINavigationController alloc] initWithRootViewController:[[LoginViewController alloc] init]];
        [UIView setAnimationsEnabled:oldState];
    } completion:^(BOOL finished) {
        
    }];
}
- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

- (void)setupViewControllers{
    NSArray *selectedArr = @[@"ic_c_backetball",@"ic_c_eat",@"ic_c_leaf",@"ic_c_montain",@"ic_c_movie"]  ;
    NSArray *unSeleceArr = @[@"ic_c_backetball_gray",@"ic_c_eat_gray",@"ic_c_leaf_gray",@"ic_c_montain_gray",@"ic_c_movie_gray"] ;
    NSArray *titleArr = @[@"首页",@"牙齿测试",@"牙套管家",@"我的"] ;
    XCQ_tabbarViewController *xcq_tab = [[XCQ_tabbarViewController alloc]initWithNomarImageArr:unSeleceArr
                                                                             andSelectImageArr:selectedArr
                                                                                   andtitleArr:titleArr];
    xcq_tab.modalTransitionStyle =UIModalTransitionStyleCrossDissolve ;
    self.window.rootViewController = xcq_tab ;
}

@end
