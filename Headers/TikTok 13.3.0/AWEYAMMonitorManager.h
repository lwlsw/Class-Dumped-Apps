//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEYAMMonitorMessageDispatch;

@interface AWEYAMMonitorManager : NSObject
{
    long long _currentMonitorOption;
    AWEYAMMonitorMessageDispatch *_dispatch;
}

+ (id)shareInstance;
@property(retain, nonatomic) AWEYAMMonitorMessageDispatch *dispatch; // @synthesize dispatch=_dispatch;
@property(readonly, nonatomic) long long currentMonitorOption; // @synthesize currentMonitorOption=_currentMonitorOption;
- (void).cxx_destruct;
- (id)p_convertMemeryUseageToString:(long long)arg1;
@property(readonly, nonatomic) _Bool isWorking;
- (void)p_handleGrownRatio:(double)arg1 isReachThreshold:(_Bool)arg2;
- (void)p_handleMaxThreshold:(CDStruct_33dcf794)arg1 growningStep:(long long)arg2 riskFactor:(double)arg3;
- (void)p_handleChunkCallback:(unsigned long long)arg1 reachThreshold:(_Bool)arg2;
- (void)configVerboseBlockTimer:(CDUnknownBlockType)arg1 mallocVerboseBlock:(CDUnknownBlockType)arg2;
- (void)startWithConfig:(id)arg1;
- (void)stop;
- (void)setup;
- (id)init;

@end

