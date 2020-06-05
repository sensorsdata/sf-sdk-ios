//
//  SFImageDownloader.h
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

typedef void(^SFImageDownloaderCompletion)(UIImage * _Nullable image, NSError * _Nullable error);

NS_ASSUME_NONNULL_BEGIN

@interface SFImageDownloader : NSObject

/**
 The shared instance of `SFImageDownloader` initialized with default values.
 */
+ (instancetype)sharedInstance;

/**
 Creates a data task using the `sessionManager` instance for the specified URL request.

 If the same data task is already in the queue or currently being downloaded, the success and failure blocks are
 appended to the already existing task. Once the task completes, all success or failure blocks attached to the
 task are executed in the order they were added.

 @param url The URL request.
 @param completion A block to be executed when the image data task finishes successfully. This block has no return value and takes three arguments: the request sent from the client, the response received from the server, and the image created from the response data of request. If the image was returned from cache, the response parameter will be `nil`.
 */
- (void)downloadImageWithURL:(NSURL * _Nullable)url completion:(SFImageDownloaderCompletion _Nullable)completion;

@end

NS_ASSUME_NONNULL_END
