//
//  SensorsFocus.h
//  SensorsFocus
//
//  Created by 陈玉国 on 2020/3/17.
//  Copyright © 2020 Sensors Data Co., Ltd. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#if ! __has_feature(objc_arc)
#error This file must be compiled with ARC. Either turn on ARC for the project or use -fobjc-arc flag on this file.
#endif

#import <UIKit/UIKit.h>
#import "SensorsFocusActionModel.h"
#import "SFConfigOptions.h"
#import "SFInteractionProtocol.h"
#import "SFCampaign.h"

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
