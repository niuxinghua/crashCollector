//
//  Collector.h
//  CrashCollector
//
//  Created by niuxinghua on 2018/4/9.
//  Copyright © 2018年 com.haier. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Collector : NSObject

+ (instancetype)sharedCollector;

- (void)registerHandlerWithAppId:(NSString *)appId;

@property (nonatomic,copy)NSString *appId;

- (NSString *)jsonStringFromArray:(NSArray *)array;

@end
