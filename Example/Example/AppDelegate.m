//
//  AppDelegate.m
//  Example
//
//  Created by 张敏超🍎 on 2020/2/24.
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

#import "AppDelegate.h"
#import "SensorsAnalyticsSDK.h"
#import <SensorsFocus/SensorsFocus.h>

@interface AppDelegate () <SensorsFocusPopupDelegate>

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.

    SAConfigOptions *options = [[SAConfigOptions alloc] initWithServerURL:@"http://10.42.40.99:8106/sa?project=iOS" launchOptions:launchOptions];
    options.autoTrackEventType = SensorsAnalyticsEventTypeAppStart | SensorsAnalyticsEventTypeAppEnd | SensorsAnalyticsEventTypeAppClick | SensorsAnalyticsEventTypeAppViewScreen;
    [SensorsAnalyticsSDK startWithConfigOptions:options];
//    [[SensorsAnalyticsSDK sharedInstance] track:@"TestEvent"];

    [[SensorsAnalyticsSDK sharedInstance] enableLog:YES];

    SFConfigOptions *sfOptions = [[SFConfigOptions alloc] initWithApiBaseURL:@"http://10.42.189.228:8141"];
    sfOptions.popupDelegate = self;
    [SensorsFocus startWithConfigOptions:sfOptions];

    [[SensorsAnalyticsSDK sharedInstance] track:@"test"];
    return YES;
}

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options {
    if ([SensorsFocus handleOpenURL:url]) {
        return YES;
    }
    return NO;
}

- (void)popupLoadSuccessWithPlanID:(NSString *)planID {
    NSLog(@"Popup window load success, planID: %@", planID);
}

- (void)popupLoadFailedWithPlanID:(NSString *)planID error:(NSError *)error {
    NSLog(@"Popup window load failed, planID: %@, error: %@", planID, error);
}

- (void)popupDidClickWithPlanID:(NSString *)planID action:(SensorsFocusActionModel *)action {
    NSLog(@"Did click action: %@,\n Plan id: %@", action, planID);
    switch (action.type) {
        case SensorsFocusActionTypeClose:
            // close popup window
            break;
        case SensorsFocusActionTypeOpenlink:
            // open a link, the value is a string
            NSLog(@"%@", action.value);
            break;
        case SensorsFocusActionTypeCopy:
            // copy the value to Pasteboard
            NSLog(@"%@", action.value);
            break;
        case SensorsFocusActionTypeCustomize:
            // customize
            NSLog(@"%@", action.extra);
            break;
        default:
            break;
    }
}

- (void)popupDidCloseWithPlanID:(NSString *)planID {
    NSLog(@"Popup window did close, planID: %@", planID);
}

@end
