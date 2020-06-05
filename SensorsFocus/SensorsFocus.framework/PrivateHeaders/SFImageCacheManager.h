//
//  SFImageCacheManager.h
//  SensorsFocus
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

NS_ASSUME_NONNULL_BEGIN

@interface SFImageCacheManager : NSObject

+ (instancetype)sharedInstance;

#pragma mark - Store

/**
 * Asynchronously store an image into memory and disk cache at the given key.
 *
 * @param image           The image to store
 * @param key             The unique image cache key, usually it's image absolute URL
 * @param completion A block executed after the operation is finished
 */
- (void)storeImage:(nullable UIImage *)image forKey:(nullable NSString *)key completion:(nullable void(^)(void))completion;

#pragma mark - Remove

/**
 * Asynchronously remove the image from memory and disk cache
 *
 * @param key             The unique image cache key
 * @param completion      A block that should be executed after the image has been removed (optional)
 */
- (void)removeImageForKey:(nullable NSString *)key completion:(nullable void(^)(void))completion;

#pragma mark - Query

/**
 * Synchronously query the cache (memory and or disk) after checking the memory cache.
 *
 * @param key The unique key used to store the image
 * @return The image for the given key, or nil if not found.
 */
- (nullable UIImage *)imageFromCacheForKey:(nullable NSString *)key;

#pragma mark - Cache clean Ops

/**
 * Synchronously Clear all memory cached images
 */
- (void)clearMemory;

/**
 * Asynchronously clear all disk cached images. Non-blocking method - returns immediately.
 * @param completion    A block that should be executed after cache expiration completes (optional)
 */
- (void)clearDiskOnCompletion:(nullable void(^)(void))completion;

/**
 * Asynchronously remove all expired cached image from disk. Non-blocking method - returns immediately.
 * @param completion A block that should be executed after cache expiration completes (optional)
 */
- (void)deleteOldFilesWithCompletion:(nullable void(^)(void))completion;

@end

NS_ASSUME_NONNULL_END
