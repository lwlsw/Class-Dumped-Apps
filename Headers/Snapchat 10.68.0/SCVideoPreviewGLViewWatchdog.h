//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCVideoPreviewGLViewWatchdog-Protocol.h"

@class NSString, SCWeakTimer;
@protocol OS_dispatch_semaphore, SCVideoPreviewGLViewWatchdogBehavior;

@interface SCVideoPreviewGLViewWatchdog : NSObject <SCVideoPreviewGLViewWatchdog>
{
    SCWeakTimer *_timer;
    id <SCVideoPreviewGLViewWatchdogBehavior> _behavior;
    double _activationInterval;
    double _startActivationTime;
    double _lastRegisteredActivityTime;
    double _timerTolerance;
    NSObject<OS_dispatch_semaphore> *_activityRegistrationSemaphore;
    _Bool _isActivated;
}

- (void).cxx_destruct;
- (double)_workTimeSinceTimerStarted;
- (void)_resetActivityCounter;
- (void)_activityRegistration;
- (void)_timerDidFire;
- (void)_startTimerWithTimeInterval:(double)arg1;
- (void)_invalidateTimer;
- (void)_startCountdownTimerWithActivationInterval:(double)arg1;
- (void)_startCountdownTimer;
- (void)registerActivity;
- (void)deactivate;
- (void)activate;
- (id)initWithActivationInterval:(double)arg1 behavior:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

