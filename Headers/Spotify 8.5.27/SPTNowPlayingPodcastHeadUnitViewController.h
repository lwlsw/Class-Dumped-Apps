//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingAuxiliaryActionsHandlerObserver-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"
#import "SPTNowPlayingModelObserver-Protocol.h"
#import "SPTNowPlayingPlaybackActionsHandlerObserver-Protocol.h"

@class NSString, SPTNowPlayingHeadUnitView, SPTNowPlayingModel, SPTTheme;
@protocol SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingContainingViewController, SPTNowPlayingPlaybackActionsHandler, SPTPodcastSpeedControlManager;

@interface SPTNowPlayingPodcastHeadUnitViewController : UIViewController <SPTNowPlayingModelObserver, SPTNowPlayingPlaybackActionsHandlerObserver, SPTNowPlayingAuxiliaryActionsHandlerObserver, SPTNowPlayingContainedViewController>
{
    SPTNowPlayingModel *_model;
    id <SPTNowPlayingPlaybackActionsHandler> _playbackActionsHandler;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTTheme *_theme;
    id <SPTPodcastSpeedControlManager> _speedControlManager;
}

@property(readonly, nonatomic) id <SPTPodcastSpeedControlManager> speedControlManager; // @synthesize speedControlManager=_speedControlManager;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) id <SPTNowPlayingPlaybackActionsHandler> playbackActionsHandler; // @synthesize playbackActionsHandler=_playbackActionsHandler;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)auxiliaryActionsHandlerSleepTimerDidUpdateState:(id)arg1;
- (void)auxiliaryActionsHandlerSleepTimer:(id)arg1 timeWasUpdated:(double)arg2;
- (void)auxiliaryActionsHandlerDidChangePodcastSpeed:(id)arg1;
- (void)playbackActionsHandlerDidPlayPause:(id)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)updateUI;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)presentSleepTimer:(id)arg1;
- (void)presentSpeedControlMenu:(id)arg1;
- (void)updateSpeedControlButton;
- (void)updateSeekButtons;
- (void)updatePlayPauseButton;
- (id)speedControlButton;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (struct CGSize)preferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithModel:(id)arg1 playbackActionsHandler:(id)arg2 auxiliaryActionsHandler:(id)arg3 speedControlManager:(id)arg4 theme:(id)arg5;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingHeadUnitView *view; // @dynamic view;

@end

