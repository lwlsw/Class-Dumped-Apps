//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MoPub_AvidVideoPlaybackListener-Protocol.h"

@class MoPub_AvidEventDispatcher, MoPub_InternalAvidManagedVideoAdSession, NSString;

@interface MoPub_AvidVideoPlaybackListenerImpl : NSObject <MoPub_AvidVideoPlaybackListener>
{
    MoPub_AvidEventDispatcher *_dispatcher;
    MoPub_InternalAvidManagedVideoAdSession *_avidVideoAdSession;
}

@property(readonly, nonatomic) MoPub_InternalAvidManagedVideoAdSession *avidVideoAdSession; // @synthesize avidVideoAdSession=_avidVideoAdSession;
@property(nonatomic) __weak MoPub_AvidEventDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
- (void).cxx_destruct;
- (void)publishVideoEvent:(id)arg1 data:(id)arg2;
- (void)recordAdErrorWithMessage:(id)arg1;
- (void)recordAdDurationChangeEvent:(id)arg1 adRemainingTime:(id)arg2;
- (void)recordAdExitedFullscreenEvent;
- (void)recordAdEnteredFullscreenEvent;
- (void)recordAdVolumeChangeEvent:(long long)arg1;
- (void)recordAdSkippedEvent;
- (void)recordAdUserCloseEvent;
- (void)recordAdUserAcceptInvitationEvent;
- (void)recordAdUserMinimizeEvent;
- (void)recordAdExpandedChangeEvent;
- (void)recordAdPlayingEvent;
- (void)recordAdPausedEvent;
- (void)recordAdVideoThirdQuartileEvent;
- (void)recordAdVideoMidpointEvent;
- (void)recordAdVideoFirstQuartileEvent;
- (void)recordAdClickThruEvent;
- (void)recordAdCompleteEvent;
- (void)recordAdStoppedEvent;
- (void)recordAdVideoStartEvent;
- (void)recordAdLoadedEvent;
- (void)recordAdStartedEvent;
- (void)recordAdImpressionEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
