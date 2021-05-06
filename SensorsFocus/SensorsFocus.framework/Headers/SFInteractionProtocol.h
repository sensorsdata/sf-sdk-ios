//
//  SFInteractionProtocol.h
//  SensorsFocus
//
//  Created by 陈玉国 on 2020/3/6.
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

@class SensorsFocusActionModel;
@class SFCampaign;
@protocol SensorsFocusPopupDelegate <NSObject>

@optional
/**
 弹窗加载成功回调

 @param planID 计划 ID
 */
- (void)popupLoadSuccessWithPlanID:(nullable NSString *)planID NS_SWIFT_NAME(popupLoadSuccess(planID:));
/**
 弹窗加载失败回调

 @param planID 计划 ID
 @param error 失败错误信息
 */
- (void)popupLoadFailedWithPlanID:(nullable NSString *)planID error:(nonnull NSError *)error NS_SWIFT_NAME(popupLoadFailed(planID:error:));

/**
 点击弹窗中的控件回调

 @param planID 计划 ID
 @param action 点击动作描述对象
 */
- (void)popupDidClickWithPlanID:(nullable NSString *)planID action:(nonnull SensorsFocusActionModel *)action NS_SWIFT_NAME(popupDidClick(planID:action:));

/**
 弹窗关闭回调

 @param planID 计划 ID
 */
- (void)popupDidCloseWithPlanID:(nullable NSString *)planID NS_SWIFT_NAME(popupClose(planID:));

@end

@protocol SensorsFocusCampaignDelegate <NSObject>

@required
- (void)campaignDidStart:(nonnull SFCampaign *)campaign NS_SWIFT_NAME(campaignDidStart(campaign:));

@optional

- (BOOL)campaignShouldStart:(nonnull SFCampaign *)campaign NS_SWIFT_NAME(campaignShouldStart(campaign:));
- (void)campaignDidEnd:(nonnull SFCampaign *)campaign NS_SWIFT_NAME(campaignDidEnd(campaign:));
- (void)campaignFailed:(nonnull SFCampaign *)campaign error:(nonnull NSError*)error NS_SWIFT_NAME(campaignFailed(campaign:error:));

@end
