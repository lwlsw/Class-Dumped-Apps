//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextV2Logger-Protocol.h"

@class NSMutableSet, NSString, SCStopwatch;
@protocol SCContextV2UserInfoProvider;

@interface SCContextV2Logger : NSObject <SCContextV2Logger>
{
    long long _sourceType;
    long long _location;
    long long _sourceMediaType;
    NSString *_snapId;
    NSString *_sessionId;
    NSString *_availableContextTypes;
    id <SCContextV2UserInfoProvider> _userInfoProvider;
    NSMutableSet *_contextActions;
    NSString *_inviteId;
    SCStopwatch *_stopwatch;
    long long _lastEntryEvent;
    struct SCContextV2ChatCounts _chatCountsForThisSwipeUp;
    struct SCContextV2ChatCounts _chatCountsForThisSnapView;
    struct {
        long long unidirectionalFriends;
        long long bidirectionalFriends;
        long long nonFriends;
        _Bool includesCurrentUser;
        _Bool hasMinimumFriendCountToLogFriendStatistics;
    } _mentionStats;
    double _snapAppearanceTime;
    double _ctaLoadedTime;
    _Bool _hasLoggedCTALatencyGrapheneMetric;
    long long _sourceTypeForContextActions;
}

@property(nonatomic) long long sourceTypeForContextActions; // @synthesize sourceTypeForContextActions=_sourceTypeForContextActions;
- (void).cxx_destruct;
- (void)_appWillEnterForeground:(id)arg1;
- (void)_appWillTerminate:(id)arg1;
- (void)_appWillResignActive:(id)arg1;
- (void)trackSavedMediaSent;
- (void)trackAudioCallCreated;
- (void)trackVideoCallCreated;
- (void)trackAudioNoteSent;
- (void)trackVideoNoteSent;
- (void)trackStickerSent;
- (void)trackChatSent;
- (void)trackSnapSent;
- (id)snapViewMetrics;
- (void)_logCTAVisibleLatencyToGraphene;
- (void)ctaDidLoad;
- (void)logSnapViewedWithInfoProvider:(id)arg1;
- (void)logCardsDisappeared;
- (void)logCardsReappeared;
- (void)logContextMenuDismissedWithExitEvent:(long long)arg1;
- (void)logActionWithTypeString:(id)arg1 cardType:(id)arg2 cardId:(id)arg3 contextInfoProvider:(id)arg4;
- (void)logContextMenuPresentWithEntryEvent:(long long)arg1 menuType:(long long)arg2 ctaElementType:(id)arg3 ctaElementIndex:(long long)arg4 ctaMaxElementIndex:(long long)arg5 contextInfoProvider:(id)arg6;
- (void)setInviteId:(id)arg1;
- (void)availableContextTypesUpdated:(id)arg1;
- (void)_populateBaseProperties:(id)arg1;
- (id)initWithSourceType:(long long)arg1 contextMenuLocation:(long long)arg2 sourceMediaType:(long long)arg3 userInfoProvider:(id)arg4 contextInfoProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

