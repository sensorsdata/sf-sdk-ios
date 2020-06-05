//
//  SFPopupViewController.h
//  Example
//
//  Created by 张敏超🍎 on 2020/3/2.
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

#import <UIKit/UIKit.h>
#import "SFPopupWindowPlanEvent.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSUInteger, SFPopupAnimationType) {
    SFPopupAnimationTypeNone,
    SFPopupAnimationTypeScaleAndFade,
    SFPopupAnimationTypeScale,
    SFPopupAnimationTypeFade,
    SFPopupAnimationTypeSlidUp,
    SFPopupAnimationTypeSlidDown
};

@class SFPopupActionModel;
@class SFPopupElementModel;
@class SFPopupViewController;
@protocol SFPopupViewControllerDelegate <NSObject>

- (void)willShowPopupViewController:(SFPopupViewController *)viewController;
- (void)didShowPopupViewController:(SFPopupViewController *)viewController;
- (void)willDismissViewController:(SFPopupViewController *)viewController;
- (void)didDismissViewController:(SFPopupViewController *)viewController;

- (void)popupViewController:(SFPopupViewController *)viewController didClickForElement:(UIView *)view;

@end

#pragma mark -
@interface SFPopupViewController : UIViewController

@property (nonatomic) SFPopupAnimationType animationType;
@property (nonatomic) NSTimeInterval animationDuration;
@property (nonatomic) UIWindowLevel maxSupportedWindowLevel;

@property (nonatomic, copy) NSString *maskActionId;
@property (nonatomic, strong) UIColor *maskColor;
@property (nonatomic) BOOL maskCloseEnabled;

@property (nonatomic, copy, readonly) NSString *planID;
@property (nonatomic, strong, readonly) UIView *contentView;

@property (nonatomic, strong) SFPopupWindowPlanEvent *planEvent;

@property (nonatomic, weak) id<SFPopupViewControllerDelegate> delegate;

@property (nonatomic, copy) void(^actionCallback)(NSArray<SFPopupActionModel *> *);

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil NS_UNAVAILABLE;

- (instancetype)initWithPlanID:(NSString * _Nullable)planID contentView:(UIView *)contentView NS_DESIGNATED_INITIALIZER;

- (void)show;
- (void)dismiss;

- (void)goToNewViewController:(UIViewController *)newViewController;

@end

NS_ASSUME_NONNULL_END
