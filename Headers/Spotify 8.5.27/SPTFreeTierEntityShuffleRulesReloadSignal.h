//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTFreeTierEntitySignalSource.h"

#import "SPTPermissionsOnDemandStateObserver-Protocol.h"

@class NSString;
@protocol SPTPermissionsOnDemandState;

@interface SPTFreeTierEntityShuffleRulesReloadSignal : SPTFreeTierEntitySignalSource <SPTPermissionsOnDemandStateObserver>
{
    id <SPTPermissionsOnDemandState> _onDemandState;
}

@property(retain, nonatomic) id <SPTPermissionsOnDemandState> onDemandState; // @synthesize onDemandState=_onDemandState;
- (void).cxx_destruct;
- (void)onDemandStateDidChange;
- (void)dealloc;
- (void)removeObserver;
- (void)addObserver;
- (id)initWithOnDemandState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
