//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol YTNonCriticalStartupScheduler <NSObject>
- (void)schedule:(int)arg1 withBlock:(void (^)(void))arg2;
- (id)initWithConfig:(id <YTNonCriticalStartupSchedulerConfig>)arg1;
@end

