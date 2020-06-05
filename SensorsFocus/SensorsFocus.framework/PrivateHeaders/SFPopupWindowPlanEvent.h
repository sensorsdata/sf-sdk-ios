//
//  SFPopupWindowPlanEvent.h
//  SensorsFocus
//
//  Created by 张敏超🍎 on 2020/3/6.
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

#import <Foundation/Foundation.h>
#import "SFPopupModel.h"
#import "SFPopupPlanModel.h"

NS_ASSUME_NONNULL_BEGIN

#pragma mark Super Property Key
extern NSString * const SFPlanIDKey;
extern NSString * const SFPlanTypeKey;
extern NSString * const SFChannelServiceNameKey;
extern NSString * const SFChannelCategoryKey;
extern NSString * const SFAudienceIdKey;
extern NSString * const SFPlanStrategyIdKey;
extern NSString * const SFMsgIdKey;
extern NSString * const SFPlatformTag;
extern NSString * const SFLibVersion;

#pragma mark - $PlanPopupDisplay
extern NSString * const SFPlanPopupDisplayEventName;

extern NSString * const SFMsgTitleKey;
extern NSString * const SFMsgContentKey;
extern NSString * const SFSuccessKey;
extern NSString * const SFFailReasonKey;

#pragma mark - $PlanPopupClicked
extern NSString * const SFPlanPopupClickEventName;

extern NSString * const SFMsgElementTypeKey;
extern NSString * const SFMsgElementActionKey;
extern NSString * const SFMsgElementContentKey;
extern NSString * const SFMsgActionIdKey;
extern NSString * const SFMsgImageURLKey;

extern NSString * const SFCloseTypeKey;

@interface SFPopupWindowPlanEvent : NSObject

@property (nonatomic, copy) NSString *msgTitle;
@property (nonatomic, copy) NSString *msgContent;
@property (nonatomic, copy) NSString *msgImageURL;

- (instancetype)initWithPlan:(SFPopupPlanModel * _Nullable)planModel popupUUID:(NSString *)popupUUID NS_DESIGNATED_INITIALIZER;

- (NSDictionary *)displayPropertiesWithError:(NSError * _Nullable)error;
- (NSDictionary *)clickedPropertiesWithElementModel:(SFPopupElementModel *)model;

/// 采集 $PlanPopupDisplay 事件
/// @param error 弹窗展示失败错误对象，展示成功为 nil
- (void)trackPlanPopupDisplayWithError:(NSError * _Nullable)error;

/// 采集 $PlanPopupClick 事件
/// @param model 点击的元素对象
- (void)trackPlanPopupClickWithElementModel:(SFPopupElementModel *)model;

@end

NS_ASSUME_NONNULL_END
