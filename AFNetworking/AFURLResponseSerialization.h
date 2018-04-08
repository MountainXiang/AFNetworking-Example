//
//  AFURLResponseSerialization.h
//  AFNetworking Example
//
//  Created by MountainX on 2018/3/16.
//  Copyright © 2018年 MTX Software Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 You can use the following macros around blocks of declarations (functions and variables) in objective c headers:
 NS_ASSUME_NONNULL_BEGIN
 NS_ASSUME_NONNULL_END
 
 You need to then add nullable annotations for references that can be nil within that block. This applies to both function parameters and variable declarations.
 */
NS_ASSUME_NONNULL_BEGIN

@protocol AFURLResponseSerialization <NSObject, NSSecureCoding, NSCopying>

@end

@interface AFHTTPResponseSerializer : NSObject <AFURLResponseSerialization>

- (instancetype)init;

@property (nonatomic, copy, nullable) NSIndexSet *acceptableStatusCodes;

@property (nonatomic, copy, nullable) NSSet <NSString *> *acceptableContentTypes;

@end

NS_ASSUME_NONNULL_END
