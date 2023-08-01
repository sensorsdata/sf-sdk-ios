//
//  SensorsFocus+Public.h
//  SensorsFocus
//
//  Created by 陈玉国 on 2023/7/6.
//  Copyright © 2023 Sensors Data Co., Ltd. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "SFConfigOptions.h"

NS_ASSUME_NONNULL_BEGIN

@interface SensorsFocus : NSObject

/**
 SDK 初始化方法，
 在调用 sharedManager 方法获取单例对象之前，需要调用这个方法进行初始化

 @param options 初始化配置对象
 */
+ (void)startWithConfigOptions:(SFConfigOptions *)options NS_SWIFT_NAME(start(configOptions:));

/**
 Handle the test popup window url.
 Your scheme url must like: scheme://popupwindow?sf_popup_test=true&popup_window_id=xxx

 @param url the scheme url
 @return If the sdk can handle the url, return YES.
 */
+ (BOOL)handleOpenURL:(NSURL *)url NS_SWIFT_NAME(handleOpenURL(url:));

/// SDK Version
+ (NSString *)SDKVersion;

@end

NS_ASSUME_NONNULL_END
