//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEAVPlayerWrapper-Protocol.h"

@class IESSounder, NSError, NSString, NSURL;

@interface AWEAVPlayerWrapper_IES : NSObject <AWEAVPlayerWrapper>
{
    unsigned long long _playStatus;
    IESSounder *_player;
}

@property(retain, nonatomic) IESSounder *player; // @synthesize player=_player;
@property(nonatomic) unsigned long long playStatus; // @synthesize playStatus=_playStatus;
- (void).cxx_destruct;
- (void)playerStatusChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)statusMap;
@property(readonly, nonatomic) NSURL *url;
- (void)seekToTime:(double)arg1;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) NSError *error;
- (void)replaceCurrentItemWith:(id)arg1;
- (id)init;
- (void)clearCurrentPlayer;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
