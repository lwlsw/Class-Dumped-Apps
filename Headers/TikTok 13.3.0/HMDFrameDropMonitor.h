//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDMonitor.h"

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDFrameDropMonitor : HMDMonitor
{
    _Bool _lastScrolling;
    double _lastUpdateTime;
    double _startScrollingTime;
    NSMutableDictionary *_frameInfoDictionary;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableDictionary *frameInfoDictionary; // @synthesize frameInfoDictionary=_frameInfoDictionary;
@property(nonatomic) _Bool lastScrolling; // @synthesize lastScrolling=_lastScrolling;
@property(nonatomic) double startScrollingTime; // @synthesize startScrollingTime=_startScrollingTime;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (void).cxx_destruct;
- (long long)getFrameDropLevel:(long long)arg1;
- (void)applicationDidReceiveFrameNotification:(double)arg1 frameDuration:(double)arg2;
- (Class)storeClass;
- (id)init;

@end

