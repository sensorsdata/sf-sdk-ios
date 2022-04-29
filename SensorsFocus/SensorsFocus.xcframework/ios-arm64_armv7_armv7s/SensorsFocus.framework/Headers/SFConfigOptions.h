//
//  SFConfigOptions.h
//  SensorsFocus
//
//  Created by 陈玉国 on 2020/3/9.
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

#import <Foundation/Foundation.h>
#import "SFInteractionProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface SFConfigOptions : NSObject

- (instancetype)init NS_UNAVAILABLE;

/**
 Returns an object initialized from base url.

 @param apiBaseURL a base url
 @return self, initialized using the base url.
 */
- (instancetype)initWithApiBaseURL:(NSString *)apiBaseURL NS_DESIGNATED_INITIALIZER;

/// 可以通过这个接口，设置弹窗展示的代理对象
@property (nonatomic, weak) id<SensorsFocusPopupDelegate> popupDelegate;
@property (nonatomic, weak) id<SensorsFocusCampaignDelegate> campaignDelegate;

//default to YES, if set to NO, will not pre-download image
@property (nonatomic, assign) BOOL preloadImage;

@end

NS_ASSUME_NONNULL_END
