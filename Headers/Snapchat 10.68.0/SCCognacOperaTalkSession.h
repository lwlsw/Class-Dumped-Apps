//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacAppViewLifeCycleListener-Protocol.h"
#import "SCCognacOperaSession-Protocol.h"
#import "SCCognacOperaSessionParticipantTracking-Protocol.h"
#import "SCOperaViewProvider-Protocol.h"
#import "SCOperaWebAppPresenceFrameProvider-Protocol.h"
#import "SCTCognacServices-Protocol.h"

@class NSDictionary, NSString, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacButtonTooltipController, SCCognacOperaDataSource, SCCognacOperaSessionParticipantTracker, SCQueuePerformer, UIView;
@protocol SCTCognacSession, SCTalkManager;

@interface SCCognacOperaTalkSession : NSObject <SCTCognacServices, SCOperaWebAppPresenceFrameProvider, SCCognacOperaSession, SCOperaViewProvider, SCCognacOperaSessionParticipantTracking, SCCognacAppViewLifeCycleListener>
{
    id <SCTalkManager> _talkManager;
    id <SCTCognacSession> _cognacTalkSession;
    UIView *_presenceBar;
    NSDictionary *_presenceViews;
    _Bool _isMessageServiceConnected;
    _Bool _isPublishingAudio;
    SCCognacOperaSessionParticipantTracker *_participantTracker;
    SCQueuePerformer *_performer;
    SCCognacButtonTooltipController *_tooltipController;
    double _audioDidStartTime;
    SCCognacAppViewLifeCycleListenerAnnouncer *_viewLifeCycleAnnouncer;
    SCCognacOperaDataSource *_dataSource;
}

+ (id)registeredEventsForOperaSession;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SCCognacAppViewLifeCycleListenerAnnouncer *viewLifeCycleAnnouncer; // @synthesize viewLifeCycleAnnouncer=_viewLifeCycleAnnouncer;
@property(nonatomic) double audioDidStartTime; // @synthesize audioDidStartTime=_audioDidStartTime;
- (void).cxx_destruct;
- (void)cognacAppViewDidUpdateVolumeCategory:(id)arg1 damping:(_Bool)arg2;
- (void)cognacAppViewDidBecomeActive:(_Bool)arg1 event:(id)arg2;
- (id)participantInfo;
- (struct CGRect)presenceRectWithUsername:(id)arg1 containerView:(id)arg2;
- (void)updateView:(id)arg1 withUpdatedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewForProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1 fromUser:(id)arg2;
- (void)handleAudioPublishStateChange:(_Bool)arg1 localSpeaking:(_Bool)arg2 remotePublished:(_Bool)arg3;
- (void)handleConnectivityChange:(_Bool)arg1;
- (void)_updateWithPresentUsers:(id)arg1 sortedPresentUsernames:(id)arg2;
- (void)_fetchSnapchattersMetadata:(id)arg1 localUsername:(id)arg2 conversationId:(id)arg3 snapchatterService:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)handlePresencePositionChange:(id)arg1;
- (void)detachPresenceBar;
- (void)attachPresenceBar:(id)arg1;
- (void)_activateAndUpdateCognacTalkSession;
- (void)_createCognacTalkSession;
- (id)registeredWVJBHandlerNameToHandler;
- (void)resumeSession;
- (void)pauseSession;
- (void)endSession;
- (void)startSession;
- (void)_startPublishingAudioWithLogEvent:(_Bool)arg1;
- (void)_stopPublishingAudio;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)initWithTalkManager:(id)arg1;
- (void)logVoicePartyEndEventIfNecessary;
- (void)logVoicePartyStartEvent;
- (void)logInGameChatSentEvent;
- (void)_logEventWithEventName:(id)arg1 paramDict:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

