//
//  SFPopupElementLabelModel.h
//  Example
//
//  Created by 张敏超🍎 on 2020/2/28.
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

#import "SFPopupModel.h"
#import "SFPopupElementLayoutProtocol.h"

NS_ASSUME_NONNULL_BEGIN

#pragma mark SFPopupElementModel
@interface SFPopupElementModel (SFLayout)

- (CGFloat)originXWithContainerWidth:(CGFloat)width;
- (void)layoutWithContainerWidth:(CGFloat)containerWidth;

@end

#pragma mark - Element
@interface SFPopupElementLabelModel : SFPopupElementModel <SFPopupElementLayoutProtocol>

@end

@interface SFPopupElementImageModel : SFPopupElementModel <SFPopupElementLayoutProtocol>

@end

@interface SFPopupElementButtonModel : SFPopupElementModel <SFPopupElementLayoutProtocol>

@end

@interface SFPopupElementLinkModel : SFPopupElementModel <SFPopupElementLayoutProtocol>

@end

#pragma mark - Layout
@interface SFPopupLayoutColumnModel : SFPopupElementModel <SFPopupElementLayoutProtocol>

@end

@interface SFPopupLayoutRowModel : SFPopupElementModel <SFPopupElementLayoutProtocol>

@end

NS_ASSUME_NONNULL_END
