//
//  MainTabBarController.h
//  CYLTabBarController
//
//  v1.16.0 Created by 微博@iOS程序犭袁 ( http://weibo.com/luohanchenyilong/ ) on 15/11/3.
//  Copyright © 2015年 https://github.com/ChenYilong .All rights reserved.
//

#import <Foundation/Foundation.h>
#if __has_include(<CYLTabBarController/CYLTabBarController.h>)
#import <CYLTabBarController/CYLTabBarController.h>
#else
#import "CYLTabBarController.h"
#endif

@interface MainTabBarController : CYLTabBarController

@property (nonatomic, assign, getter=isDarkMode) BOOL darkMode;

@end

