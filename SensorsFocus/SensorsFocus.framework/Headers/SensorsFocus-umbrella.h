#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "SFConfigOptions.h"
#import "SensorsFocus.h"
#import "SensorsFocusActionModel.h"
#import "SFInteractionProtocol.h"

FOUNDATION_EXPORT double SensorsFocusVersionNumber;
FOUNDATION_EXPORT const unsigned char SensorsFocusVersionString[];

