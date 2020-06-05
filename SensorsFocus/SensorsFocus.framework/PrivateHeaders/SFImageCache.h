//
//  SFImageCache.h
//  SensorsFocus
//
//  Created by 张敏超🍎 on 2020/3/2.
//  Copyright © 2020 Sensors Data Co., Ltd. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the &quot;License&quot;);
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an &quot;AS IS&quot; BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SFMemoryImageCache <NSObject>

/**
 Returns the image associated with a given key.

 @param key An object identifying the value. If nil, just return nil.
 @return The image associated with key, or nil if no value is associated with key.
 */
- (nullable id)imageForKey:(NSString *)key;

/**
 Sets the value of the specified key in the cache (0 cost).

 @param image The image to be stored in the cache.
 @param key    The key with which to associate the value. If nil, this method has no effect.
 @discussion Unlike an NSMutableDictionary object, a cache does not copy the key
 objects that are put into it.
 */
- (void)setImage:(id)image forKey:(NSString *)key;

/**
 Removes the value of the specified key in the cache.

 @param key The key identifying the value to be removed. If nil, this method has no effect.
 */
- (void)removeImageForKey:(NSString *)key;

/**
 Empties the cache immediately.
 */
- (void)removeAllImages;

@end


@interface SFMemoryImageCache : NSObject <SFMemoryImageCache>

/**
 The total memory capacity of the cache in bytes. Default to `100 MB
 */
@property (nonatomic, assign) UInt64 memoryCapacity;

/**
 The current total memory usage in bytes of all images stored within the cache.
 */
@property (nonatomic, assign, readonly) UInt64 memoryUsage;

@end

@protocol SFDiskImageCache <SFMemoryImageCache>

@property (nonatomic, copy, readonly) NSString *cachePath;

- (instancetype)initWithCachePath:(NSString *)cachePath;

/**
 Removes the expired data from the cache. You can choose the data to remove base on `ageLimit`, `countLimit` and `sizeLimit` options.
 */
- (void)removeExpiredData;

@end

@interface SFDiskImageCache : NSObject <SFDiskImageCache>

/**
 * The maximum length of time to keep an image in the disk cache, in seconds.
 * Setting this to a negative value means no expiring.
 * Setting this to zero means that all cached files would be removed when do expiration check.
 * Defaults to 1 week.
 */
@property (assign, nonatomic) NSTimeInterval maxDiskAge;

/**
 * The maximum size of the disk cache, in bytes.
 * Defaults to 0. Which means there is no cache size limit.
 */
@property (assign, nonatomic) NSUInteger maxDiskSize;

@end

NS_ASSUME_NONNULL_END
