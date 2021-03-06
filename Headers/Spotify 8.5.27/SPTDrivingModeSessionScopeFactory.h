//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDrivingModeContextMenuFactory-Protocol.h"
#import "SPTDrivingModePivotViewFactory-Protocol.h"

@class NSString, SPTDrivingModeLogger, SPTDrivingModeSession;
@protocol SPTGLUEService, SPTNowPlayingService, SPTPlayer, SPTUIPresentationService;

@interface SPTDrivingModeSessionScopeFactory : NSObject <SPTDrivingModePivotViewFactory, SPTDrivingModeContextMenuFactory>
{
    id <SPTUIPresentationService> _presentationService;
    id <SPTNowPlayingService> _nowPlayingService;
    id <SPTPlayer> _player;
    id <SPTGLUEService> _glueService;
    SPTDrivingModeSession *_session;
    SPTDrivingModeLogger *_logger;
}

@property(retain, nonatomic) SPTDrivingModeLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTDrivingModeSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTNowPlayingService> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
- (void).cxx_destruct;
- (id)createContextMenuViewController;
- (id)createPivotViewViewController;
- (id)initWithSession:(id)arg1 presentationService:(id)arg2 nowPlayingService:(id)arg3 player:(id)arg4 logger:(id)arg5 glueService:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

