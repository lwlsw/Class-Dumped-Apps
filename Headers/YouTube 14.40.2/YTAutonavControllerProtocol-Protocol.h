//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLPlayerStickySettings, YTICommand, YTIPlayerOverlayAutoplayRenderer;

@protocol YTAutonavControllerProtocol <NSObject>
@property(readonly, nonatomic) _Bool countdownActive;
@property(readonly, nonatomic) _Bool endscreenWasCancelled;
@property(nonatomic) __weak id <YTAutonavPlayabilityDelegate> playabilityDelegate;
@property(nonatomic) __weak id <YTAutonavPauseControllerDelegate> pauseDelegate;
@property(nonatomic) __weak id <YTAutonavPreviousVideoDelegateProtocol> previousVideoDelegate;
- (void)setMediaStickySettings:(MLPlayerStickySettings *)arg1;
- (void)autonavCountdownDidReachTriggerWindow;
- (double)autonavCountdownWindow;
- (YTIPlayerOverlayAutoplayRenderer *)autonavRenderer;
- (YTICommand *)autonavEndpoint;
- (void)removeAutonavCountdownObserver:(id <YTAutonavCountdownObserver>)arg1;
- (void)addAutonavCountdownObserver:(id <YTAutonavCountdownObserver>)arg1;
- (void)reset;
- (void)cancelEndscreen;
- (void)stopCountdown;
- (void)startCountdown;
- (void)playAutonavEndscreenCountdown;
- (void)playAutonav;
- (void)playPrevious;
- (void)playNext;
- (_Bool)hasAutonavSpinner;
- (_Bool)hasAutonavVideo;
- (_Bool)hasPreviousVideo;
- (_Bool)hasNextVideo;
@end
