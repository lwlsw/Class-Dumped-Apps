//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIPlayerCollectionInternalDelegate-Protocol.h"
#import "NFUIPlayerValidationDelegate-Protocol.h"

@class NFUIPlayerCollectionInternal, NSMutableDictionary, NSString;
@protocol NFUIPlaybackValidatorProtocol;

@interface NFUIPlaybackManager : NSObject <NFUIPlayerCollectionInternalDelegate, NFUIPlayerValidationDelegate>
{
    NFUIPlayerCollectionInternal *_defaultPlayerCollectionInternal;
    NSMutableDictionary *_playerCollectionMap;
    unsigned long long _maxAllowedPlayers;
    NSString *_currentAudioSessionCategory;
    id <NFUIPlaybackValidatorProtocol> _playbackValidator;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <NFUIPlaybackValidatorProtocol> playbackValidator; // @synthesize playbackValidator=_playbackValidator;
@property(retain, nonatomic) NSString *currentAudioSessionCategory; // @synthesize currentAudioSessionCategory=_currentAudioSessionCategory;
@property(nonatomic) unsigned long long maxAllowedPlayers; // @synthesize maxAllowedPlayers=_maxAllowedPlayers;
@property(retain, nonatomic) NSMutableDictionary *playerCollectionMap; // @synthesize playerCollectionMap=_playerCollectionMap;
@property(retain, nonatomic) NFUIPlayerCollectionInternal *defaultPlayerCollectionInternal; // @synthesize defaultPlayerCollectionInternal=_defaultPlayerCollectionInternal;
- (void).cxx_destruct;
- (void)deactivateAudioSession;
- (void)activateAudioSession;
- (void)setAudioSessionCategory:(id)arg1;
- (void)setAudioMixing:(long long)arg1;
- (void)setAudioMixing:(long long)arg1 forPlayer:(id)arg2;
- (void)handleAudioRouteChanged:(id)arg1;
- (void)handleBecomeActive:(id)arg1;
- (void)handleResignActive:(id)arg1;
- (void)handleEnterForeground:(id)arg1;
- (void)handleEnterBackground:(id)arg1;
- (void)handleAudioInterruption:(id)arg1;
- (void)attemptToSetSessionCategoryAmbientForPlayer:(id)arg1;
- (void)collection:(id)arg1 player:(id)arg2 volumeChange:(float)arg3 previous:(float)arg4;
- (void)collection:(id)arg1 player:(id)arg2 stateChange:(unsigned long long)arg3 previous:(unsigned long long)arg4;
- (void)removePlayer:(id)arg1 fromCollectionWithId:(id)arg2;
- (void)removePlayer:(id)arg1;
- (void)resumeAllPlayersInCollectionWithId:(id)arg1;
- (void)pauseAllPlayersInCollectionWithId:(id)arg1;
- (void)stopAllPlayersInCollectionWithId:(id)arg1;
- (void)resumeAllPlayers;
- (void)pauseAllPlayers;
- (void)stopAllPlayersExceptPlayer:(id)arg1;
- (void)stopAllPlayers;
- (id)collectionWithId:(id)arg1;
- (id)playerWithId:(id)arg1;
- (id)initializeCollectionWithId:(id)arg1;
- (_Bool)hasPinProtectionForPlaybackRequest:(id)arg1;
- (void)validatePlayback:(id)arg1 forPlayer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)validatePlayback:(id)arg1 forPlayer:(id)arg2 inCollection:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initializePlayerWithId:(id)arg1 inCollection:(id)arg2 playbackRequest:(id)arg3;
- (id)initializePlayerWithId:(id)arg1 playbackRequest:(id)arg2;
- (id)defaultPlayerCollection;
- (void)dealloc;
- (id)init;
- (unsigned long long)maxConcurrentLoadingForDevice;
- (unsigned long long)maxPlayersForDevice;
- (double)percentFreeVM;
- (_Bool)is32Bit;
- (_Bool)isIPad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

