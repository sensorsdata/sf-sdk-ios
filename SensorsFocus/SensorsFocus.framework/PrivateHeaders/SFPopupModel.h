//
//  SFPopupModel.h
//  Example
//
//  Created by 张敏超🍎 on 2020/2/25.
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
#import "SensorsFocusActionModel.h"

NS_ASSUME_NONNULL_BEGIN

id dictionary_valueForKey(NSDictionary *dic, NSString *key);

#pragma mark -
typedef NS_ENUM(NSUInteger, SFPopupActionType) {
    SFPopupActionTypeClose,
    SFPopupActionTypeOpenlink,
    SFPopupActionTypeCopy,
    SFPopupActionTypeCustomize,
    SFPopupActionTypeTel,
    SFPopupActionTypeEmail,
    SFPopupActionTypeSMS,
    SFPopupActionTypeCamera,
};

extern NSString * const SFPopupCloseMask;

@interface SFPopupActionModel : SensorsFocusActionModel

@property (nonatomic, copy) NSString *objectID;
@property (nonatomic, copy) NSString *typeName;
@property (nonatomic) BOOL closeable;
@property (nonatomic, copy) NSString *closeType;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)toDictionary;

@end

#pragma mark -
typedef NS_ENUM(NSInteger, SFPopupLayoutAlign) {
    SFPopupLayoutAlignLeft,
    SFPopupLayoutAlignCenter,
    SFPopupLayoutAlignRight
};

@interface SFPopupLayoutModel : NSObject

@property (nonatomic) SFPopupLayoutAlign align;

@property (nonatomic) UIEdgeInsets margin;
@property (nonatomic) UIEdgeInsets padding;

@property (nonatomic) CGFloat x;
@property (nonatomic) CGFloat y;
@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;
@property (nonatomic, readonly) CGRect frame;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

#pragma mark -
@interface SFPopupPropertyModel : NSObject

@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic) CGFloat borderWidth;
@property (nonatomic, strong) UIColor *borderColor;
@property (nonatomic) BOOL closeEnabled;
@property (nonatomic, copy) NSString *closeStyle;
@property (nonatomic, strong) UIColor *color;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat font;
@property (nonatomic) CGFloat height;
@property (nonatomic, copy) NSString *image;
@property (nonatomic) CGFloat lineHeight;
@property (nonatomic, copy) NSString *localImage;
@property (nonatomic, copy) NSString *msgType;
@property (nonatomic, copy) NSString *maskActionId;
@property (nonatomic) BOOL maskCloseEnabled;
@property (nonatomic, strong) UIColor *maskColor;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) NSTextAlignment textAlign;
@property (nonatomic) CGFloat width;

@property (nonatomic, strong) NSAttributedString *attributedText;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

#pragma mark -
typedef NS_ENUM(NSInteger, SFPopupElementType) {
    SFPopupElementTypeRow,
    SFPopupElementTypeColumn,
    SFPopupElementTypeLabel,
    SFPopupElementTypeImage,
    SFPopupElementTypeButton,
    SFPopupElementTypeLink
};

@interface SFPopupElementModel : NSObject

@property (nonatomic, strong) SFPopupLayoutModel *layout;
@property (nonatomic, strong) SFPopupPropertyModel *properties;
@property (nonatomic) SFPopupElementType type;
@property (nonatomic, copy) NSString *typeName;
@property (nonatomic, strong) NSArray<SFPopupActionModel *> *actions;
@property (nonatomic, strong) NSArray<SFPopupElementModel *> *subviews;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

#pragma mark -
@interface SFPopupModel : NSObject

@property (nonatomic, copy) NSString *cname;
@property (nonatomic, copy) NSString *objectID;
@property (nonatomic, strong) SFPopupPropertyModel *properties;
@property (nonatomic, strong) SFPopupElementModel *element;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
