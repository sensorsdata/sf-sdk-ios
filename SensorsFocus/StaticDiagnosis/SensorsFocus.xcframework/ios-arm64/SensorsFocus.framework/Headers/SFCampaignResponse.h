//
//  SFCampaignResponse.h
//  SensorsFocus
//
//  Created by 陈玉国 on 2023/11/3.
//  Copyright © 2023 Sensors Data Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFCampaignResponse : NSObject

@property (nonatomic, assign) BOOL success;
@property (nonatomic, copy, nullable) NSDictionary *campaigns;
@property (nonatomic, copy, nullable) NSError *error;

@end

NS_ASSUME_NONNULL_END
