//
//  SFConfigOptions+ID3.h
//  SensorsFocus
//
//  Created by 陈玉国 on 2024/2/21.
//  Copyright © 2024 Sensors Data Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFConfigOptions.h"

NS_ASSUME_NONNULL_BEGIN

@interface SFConfigOptions (IDM3)

/// access token for gateway
@property (nonatomic, copy) NSString *accessToken;

/// organization ID for gateway, if enableHttpEncrypt, ordID should not be empty
@property (nonatomic, copy) NSString *orgID;

/// enable http encrypt
@property (nonatomic, assign) BOOL enableHttpEncrypt;

@end

NS_ASSUME_NONNULL_END
