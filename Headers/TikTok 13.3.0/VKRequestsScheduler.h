//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VKObject.h"

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VKRequestsScheduler : VKObject
{
    NSObject<OS_dispatch_queue> *_schedulerQueue;
    long long _currentLimitPerSecond;
    NSMutableDictionary *_scheduleDict;
    _Bool _enabled;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)scheduleRequest:(id)arg1;
- (double)currentAvailableInterval;
- (void)setEnabled:(_Bool)arg1;
- (id)init;

@end
