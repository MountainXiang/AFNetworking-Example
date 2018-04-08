//
//  AFURLSessionManager.h
//  AFNetworking Example
//
//  Created by MountainX on 2018/3/16.
//  Copyright © 2018年 MTX Software Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AFURLSessionManager : NSObject

@property (readonly, nonatomic, strong) NSURLSession *session;

@property (readonly, nonatomic, strong) NSOperationQueue *operationQueue;



@end
