//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLQueuePlayerDelegate-Protocol.h"
#import "YTAVDAIPlayerControls-Protocol.h"
#import "YTBackgroundabilityPolicyObserver-Protocol.h"
#import "YTPlayerControls-Protocol.h"
#import "YTPlayerItemControls-Protocol.h"
#import "YTSingleVideoObservable-Protocol.h"

@class GIMMe, MLFormat, MLNerdStatsPlaybackData, MLPlayerPool, MLPlayerStickySettings, MLQOEError, NSArray, NSData, NSDictionary, NSError, NSHashTable, NSString, UIView, YTBackgroundabilityPolicy, YTCaptionViewController, YTMediaPlayerManager, YTPlayerView, YTSingleVideo, YTSingleVideoAirplaySkipDetector, YTSingleVideoEventCenter, YTSingleVideoLoggingController, YTSingleVideoMediaTimeAccumulator, YTVSSControllerState;
@protocol HAMClock, MLAudioFormatConstraint, MLCaptionTrack, MLPlayer, MLPlayerConfig, MLPlayerItem, MLPlayerViewProtocol, MLVideoFormatConstraint, YTSingleVideoControllerDelegate, YTSingleVideoControllerQueuePlayerDelegate, YTSingleVideoControllerVideoSequencerDelegate, YTSingleVideoData;

@interface YTSingleVideoController : NSObject <MLQueuePlayerDelegate, YTAVDAIPlayerControls, YTBackgroundabilityPolicyObserver, YTSingleVideoObservable, YTPlayerControls, YTPlayerItemControls>
{
    id <MLPlayer> _player;
    MLPlayerPool *_playerPool;
    YTBackgroundabilityPolicy *_backgroundabilityPolicy;
    YTSingleVideoLoggingController *_loggingController;
    YTPlayerView *_playerView;
    YTSingleVideoAirplaySkipDetector *_airplaySkipDetector;
    _Bool _isBackgroundingForcedDisabled;
    _Bool _currentlyBackgroundable;
    double _lastAspectRatio;
    _Bool _userRequestedPlay;
    YTSingleVideoMediaTimeAccumulator *_mediaTimeAccumulator;
    NSHashTable *_cuepointObservers;
    CDStruct_d60ef703 _lastActiveMediaPlayerTime;
    id <HAMClock> _clock;
    _Bool _externalPlaybackAllowed;
    _Bool _blockAirplaySeeks;
    YTSingleVideoEventCenter *_eventCenter;
    long long _lifecycleState;
    YTMediaPlayerManager *_mediaPlayerManager;
    id <MLVideoFormatConstraint> _videoFormatConstraint;
    GIMMe *_gimme;
    YTSingleVideo *_singleVideo;
    MLPlayerStickySettings *_mediaStickySettings;
    id <YTSingleVideoControllerDelegate> _delegate;
    id <YTSingleVideoControllerVideoSequencerDelegate> _sequencerDelegate;
    id <YTSingleVideoControllerQueuePlayerDelegate> _queuePlayerDelegate;
    id <MLPlayerItem> _playerItem;
}

@property(retain, nonatomic) id <MLPlayerItem> playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool blockAirplaySeeks; // @synthesize blockAirplaySeeks=_blockAirplaySeeks;
@property(nonatomic) __weak id <YTSingleVideoControllerQueuePlayerDelegate> queuePlayerDelegate; // @synthesize queuePlayerDelegate=_queuePlayerDelegate;
@property(nonatomic) __weak id <YTSingleVideoControllerVideoSequencerDelegate> sequencerDelegate; // @synthesize sequencerDelegate=_sequencerDelegate;
@property(nonatomic) __weak id <YTSingleVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MLPlayerStickySettings *mediaStickySettings; // @synthesize mediaStickySettings=_mediaStickySettings;
@property(readonly, nonatomic) YTSingleVideo *singleVideo; // @synthesize singleVideo=_singleVideo;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) long long lifecycleState; // @synthesize lifecycleState=_lifecycleState;
@property(readonly, nonatomic) YTSingleVideoEventCenter *eventCenter; // @synthesize eventCenter=_eventCenter;
- (void).cxx_destruct;
- (id)mediaPlayer;
- (void)updateLifecycleState:(long long)arg1;
- (_Bool)isAppInBackground;
- (void)setInitialAudioAndVideoConstraints;
- (void)updateCurrentlyBackgroundable;
- (void)updateVideoFormatConstraintForNewPlayer;
- (void)updateExternalPlaybackAllowedForNewPlayer;
- (void)updateCuepointObserversForNewPlayer;
- (void)initializePlayerLoggingForNewPlayerWithPlayerVisibility:(int)arg1 isPrefetch:(_Bool)arg2 isPrebuffer:(_Bool)arg3;
- (void)segmentAtMediaTime:(double)arg1 shouldApproximateSegment:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)productionTimeFromMediaTime:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)mediaTimeFromProductionTime:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool attemptingToPlay;
@property(readonly, nonatomic) int mediaPlayerType;
@property(readonly, nonatomic) _Bool isCurrentAspectRatioVertical;
@property(readonly, nonatomic) double currentAspectRatio;
@property(readonly, nonatomic) _Bool isPeggedToLive;
@property(readonly, nonatomic) _Bool isCurrentlyBackgroundable;
@property(readonly, nonatomic) _Bool isExternalPlaybackActive;
@property(readonly, nonatomic) _Bool currentVideoIsLocal;
@property(readonly, nonatomic) double maximumSeekableMediaTime;
@property(readonly, nonatomic) double minimumSeekableMediaTime;
@property(readonly, nonatomic) double totalMediaTime;
@property(readonly, nonatomic) double bufferedMediaTime;
@property(readonly, nonatomic) CDStruct_d60ef703 currentTime;
@property(readonly, nonatomic) long long mediaState;
@property(readonly, nonatomic) id <YTSingleVideoData> videoData;
- (void)backgroundableByUserSettingsDidChange;
- (void)playerItem:(id)arg1 captionsDidFailWithError:(id)arg2;
- (void)playerItem:(id)arg1 captionDisplayControllerDidChange:(id)arg2;
- (void)playerItem:(id)arg1 availableCaptionTracksDidChange:(id)arg2;
- (void)playerItem:(id)arg1 activeCaptionTrackDidChange:(id)arg2;
- (void)playerItem:(id)arg1 peggedToLiveDidChange:(_Bool)arg2;
- (void)playerItem:(id)arg1 didSelectVideoFormat:(id)arg2 audioFormat:(id)arg3;
- (void)playerItem:(id)arg1 hasSelectableVideoFormats:(id)arg2;
- (void)playerItem:(id)arg1 hasSelectableAudioFormats:(id)arg2;
- (void)playerItem:(id)arg1 seekableTimeRangeDidChangeToMinimumTime:(double)arg2 maximumTime:(double)arg3;
- (void)playerItem:(id)arg1 bufferedMediaTimeDidChangeToTime:(double)arg2;
- (void)playerItem:(id)arg1 currentTimeDidChange:(CDStruct_d60ef703)arg2;
- (void)playerItem:(id)arg1 totalMediaTimeDidChangeToTime:(double)arg2;
- (void)playerForegroundAudioOnlyPlaybackReasonDidChange:(int)arg1;
- (void)playerDidSwitchToTimelineSection:(id)arg1 absoluteTime:(double)arg2;
- (void)playerRateDidChange:(float)arg1;
- (void)refreshStreamingDataAndStartPlayback:(_Bool)arg1;
- (void)reloadPlayerAndStartPlayback:(_Bool)arg1;
- (void)playerExternalPlaybackActiveStateDidChange:(_Bool)arg1;
- (void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)queuePlayer:(id)arg1 currentSegmentDidChangeFromSegment:(id)arg2 toSegment:(id)arg3;
- (void)recordAdPlaybackDidStartWithCPN:(id)arg1 adFormat:(id)arg2 adBreakType:(long long)arg3;
- (void)appDidEnterBackgroundWithUnbackgroundableVideo;
- (void)appDidEnterBackgroundAndWillNotBeSuspended;
- (void)appWillBeSuspended;
- (void)recordClientIssueFeedbackEvent;
- (void)recordUserIntentToPlayWithTime:(double)arg1;
- (void)recordSpeedyGAlert;
- (void)playerStatusDidChange:(id)arg1;
@property(readonly, nonatomic) YTVSSControllerState *VSSControllerStateCopy;
@property(readonly, nonatomic) MLQOEError *fatalError;
- (void)removeCuepointObserver:(id)arg1;
- (void)addCuepointObserver:(id)arg1;
@property(readonly, nonatomic) _Bool supportsSegmentTimelineQueries;
@property(readonly, nonatomic) double accumulatedMediaTime;
@property(readonly, nonatomic) long long rawMediaState;
@property(readonly, nonatomic) id <MLAudioFormatConstraint> audioFormatConstraint;
@property(readonly, nonatomic) id <MLVideoFormatConstraint> videoFormatConstraint; // @synthesize videoFormatConstraint=_videoFormatConstraint;
@property(readonly, nonatomic, getter=isExternalPlaybackAllowed) _Bool externalPlaybackAllowed; // @synthesize externalPlaybackAllowed=_externalPlaybackAllowed;
- (void)setExternalPlaybackAllowed:(_Bool)arg1;
- (void)setPeakBitrateFraction:(float)arg1;
- (void)setPreferredMaxReadahead:(double)arg1;
- (void)setBackgroundingForcedDisabled:(_Bool)arg1;
- (void)enableCaptionsIfAvailable;
- (void)seekToEnd;
- (void)seekToProductionTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekToTime:(double)arg1;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) _Bool isMuted;
- (void)setVolume:(float)arg1;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic) _Bool supportsChangingPlaybackRate;
- (void)setPlaybackRate:(float)arg1;
@property(readonly, nonatomic) float playbackRate;
- (void)setLiveCaptionsVerticalRatio:(double)arg1;
- (void)setViewportSizeProvider:(id)arg1;
- (void)setActiveCaptionTrack:(id)arg1;
- (void)setVideoFormatConstraint:(id)arg1;
- (void)setAudioFormatConstraint:(id)arg1;
@property(readonly, nonatomic) id <MLCaptionTrack> activeCaptionTrack;
@property(readonly, nonatomic) MLFormat *selectedVideoFormat;
@property(readonly, nonatomic) MLFormat *selectedAudioFormat;
@property(readonly, nonatomic) NSArray *selectableVideoFormats;
@property(readonly, nonatomic) NSArray *selectableAudioFormats;
@property(readonly, nonatomic) NSError *playerError;
@property(readonly, nonatomic) NSDictionary *playerDebugParameters;
@property(readonly, nonatomic) NSData *playerDebugLogs;
@property(readonly, nonatomic) id <MLPlayerConfig> playerConfig;
@property(readonly, nonatomic) MLNerdStatsPlaybackData *nerdStatsPlaybackData;
- (void)addVideoToHLSPlaylistSplicer:(id)arg1;
- (void)setHLSPlaylistSplicerVideoTimeline:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)suspendAndClearRenderingView:(_Bool)arg1;
- (void)shutDown;
- (void)activateWithPlayerView:(id)arg1 playerStatus:(id)arg2 autoplay:(_Bool)arg3 playlistID:(id)arg4 timelineSection:(id)arg5;
- (void)initializeWithLoadedQueuePlayer:(id)arg1 playerItem:(id)arg2 playerVisibility:(int)arg3 isPrefetch:(_Bool)arg4 isPrebuffer:(_Bool)arg5;
- (void)loadVideoWithViewportSizeProvider:(id)arg1 playerVisibility:(int)arg2 mediaVideoTimeline:(id)arg3 isPrefetch:(_Bool)arg4;
- (void)loadVideoWithViewportSizeProvider:(id)arg1 playerVisibility:(int)arg2 mediaVideoTimeline:(id)arg3;
- (void)resetAndReleaseMediaPlayer;
@property(retain, nonatomic) YTMediaPlayerManager *mediaPlayerManager; // @synthesize mediaPlayerManager=_mediaPlayerManager;
@property(readonly, nonatomic) NSArray *availableCaptionTracks;
@property(readonly, nonatomic) YTCaptionViewController *captionViewController;
@property(readonly, nonatomic) UIView<MLPlayerViewProtocol> *playerRenderingView;
- (void)dealloc;
- (id)initWithSingleVideo:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isCurrentlyBackgroundable) _Bool currentlyBackgroundable;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

