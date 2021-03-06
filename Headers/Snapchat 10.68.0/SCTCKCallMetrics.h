//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTCKCallMetrics-Protocol.h"

@class NSDate;

@interface SCTCKCallMetrics : NSObject <SCTCKCallMetrics>
{
    _Bool _appBecameActive;
    NSDate *_lockedCallStartedDate;
    NSDate *_lockedCallEndedDate;
    _Bool _withCallKit;
    _Bool _withPhoneLockStart;
    _Bool _withCallStartFromPhoneRecentList;
    _Bool _withCallUpgradeToAppFromPhoneLock;
    _Bool _withMediaUpdateToVideoFromPhoneLock;
    unsigned long long _speakersWhilePhoneLockCount;
    unsigned long long _mutedWhilePhoneLockCount;
    double _withCallLockDurationSec;
}

- (void).cxx_destruct;
- (_Bool)_isPortType:(id)arg1 inRouteOutputs:(id)arg2;
- (void)_handleAudioRouteChange:(id)arg1;
- (void)_appBecameActive:(id)arg1;
- (void)_reset;
- (void)testOnly_triggerAppBecameActiveLogic;
- (unsigned long long)speakersWhilePhoneLockCount;
- (unsigned long long)mutedWhilePhoneLockCount;
- (_Bool)withMediaUpdateToVideoFromPhoneLock;
- (_Bool)withCallStartFromPhoneRecentList;
- (_Bool)withCallUpgradeToAppFromPhoneLock;
- (double)withCallLockDurationSec;
- (_Bool)withStartAndEndPhoneLock;
- (_Bool)withCallKit;
- (void)lockedCallMuted;
- (void)callMediaUpdatedToVideo;
- (void)callEnded;
- (void)_callStarted;
- (void)callStartedFromRecentsList;
- (void)callStartedWithinApp;
- (void)callAnswered;
- (id)initWithCallKit:(_Bool)arg1;

@end

