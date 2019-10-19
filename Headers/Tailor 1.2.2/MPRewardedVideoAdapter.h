//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPPrivateRewardedVideoCustomEventDelegate-Protocol.h"

@class MPAdConfiguration, MPRealTimeTimer, MPRewardedVideoCustomEvent, MPTimer, NSString;
@protocol MPRewardedVideoAdapterDelegate;

@interface MPRewardedVideoAdapter : NSObject <MPPrivateRewardedVideoCustomEventDelegate>
{
    _Bool _hasTrackedImpression;
    _Bool _hasTrackedClick;
    _Bool _hasSuccessfullyLoaded;
    _Bool _hasExpired;
    id <MPRewardedVideoAdapterDelegate> _delegate;
    MPRewardedVideoCustomEvent *_rewardedVideoCustomEvent;
    MPAdConfiguration *_configuration;
    MPTimer *_timeoutTimer;
    MPRealTimeTimer *_expirationTimer;
    NSString *_urlEncodedCustomData;
}

@property(copy, nonatomic) NSString *urlEncodedCustomData; // @synthesize urlEncodedCustomData=_urlEncodedCustomData;
@property(retain, nonatomic) MPRealTimeTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(nonatomic) _Bool hasExpired; // @synthesize hasExpired=_hasExpired;
@property(nonatomic) _Bool hasSuccessfullyLoaded; // @synthesize hasSuccessfullyLoaded=_hasSuccessfullyLoaded;
@property(nonatomic) _Bool hasTrackedClick; // @synthesize hasTrackedClick=_hasTrackedClick;
@property(nonatomic) _Bool hasTrackedImpression; // @synthesize hasTrackedImpression=_hasTrackedImpression;
@property(retain, nonatomic) MPTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) MPAdConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) MPRewardedVideoCustomEvent *rewardedVideoCustomEvent; // @synthesize rewardedVideoCustomEvent=_rewardedVideoCustomEvent;
@property(nonatomic) __weak id <MPRewardedVideoAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)adUnitId;
- (id)customerIdForRewardedVideoCustomEvent:(id)arg1;
- (void)rewardedVideoShouldRewardUserForCustomEvent:(id)arg1 reward:(id)arg2;
- (void)rewardedVideoDidReceiveTapEventForCustomEvent:(id)arg1;
- (void)rewardedVideoWillLeaveApplicationForCustomEvent:(id)arg1;
- (void)rewardedVideoDidDisappearForCustomEvent:(id)arg1;
- (void)rewardedVideoWillDisappearForCustomEvent:(id)arg1;
- (void)rewardedVideoDidAppearForCustomEvent:(id)arg1;
- (void)rewardedVideoWillAppearForCustomEvent:(id)arg1;
- (void)rewardedVideoDidFailToPlayForCustomEvent:(id)arg1 error:(id)arg2;
- (void)rewardedVideoDidExpireForCustomEvent:(id)arg1;
- (void)rewardedVideoDidFailToLoadAdForCustomEvent:(id)arg1 error:(id)arg2;
- (void)rewardedVideoDidLoadAdForCustomEvent:(id)arg1;
- (id)instanceMediationSettingsForClass:(Class)arg1;
- (void)trackClick;
- (void)trackImpression;
- (id)rewardedVideoCompletionUrlByAppendingClientParams;
- (void)didStopLoading;
- (void)timeout;
- (void)startTimeoutTimer;
- (void)handleAdPlayedForCustomEventNetwork;
- (void)presentRewardedVideoFromViewController:(id)arg1 customData:(id)arg2;
- (_Bool)hasAdAvailable;
- (void)getAdWithConfiguration:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
