//
//  SensorsFocus+Diagnosis.h
//  SensorsFocus
//
//  Created by 陈玉国 on 2023/5/12.
//  Copyright © 2023 Sensors Data Co., Ltd. All rights reserved.
//
#import "SensorsFocus+Public.h"

NS_ASSUME_NONNULL_BEGIN

@interface SensorsFocus (Diagnosis)

/// disable diagnostic info collection
@property (class, nonatomic, assign) BOOL disableDiagnosticsCollection;

@end

@interface SFConfigOptions (Diagnosis)

@property (nonatomic, assign) NSTimeInterval diagnosisExpiration;

@end

NS_ASSUME_NONNULL_END
