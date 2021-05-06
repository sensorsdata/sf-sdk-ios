//
//  SFCampaign.h
//  SensorsFocus
//
//  Created by 陈玉国 on 2021/3/30.
//  Copyright © 2021 Sensors Data Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, SFCampaignType) {
    SFCampaignTypePreset,
    SFCampaignTypeCustomized,
};

NS_ASSUME_NONNULL_BEGIN

@interface SFCampaign : NSObject

@property (nonatomic, copy, readonly, nullable) NSString *planID;
@property (nonatomic, copy, readonly, nullable) NSString *name;
@property (nonatomic, copy, readonly, nonnull) NSString *content;
@property (nonatomic, assign, readonly) SFCampaignType type;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
