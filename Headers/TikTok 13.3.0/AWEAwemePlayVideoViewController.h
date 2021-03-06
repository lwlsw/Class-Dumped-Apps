//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPlayVideoViewController.h"

#import "AWEVideoInteractiveViewDataSource-Protocol.h"

@class AWEAwemeModel, MediaDecrypter, NSString, NSTimer, UIImageView, UILabel, UIView;

@interface AWEAwemePlayVideoViewController : AWEPlayVideoViewController <AWEVideoInteractiveViewDataSource>
{
    _Bool _isAdLearnMoreShowed;
    _Bool _skipDouPlusToastRemove;
    _Bool _isAutoPlay;
    AWEAwemeModel *_repostItem;
    UIView *_topGradientView;
    UIView *_bottomGradientView;
    UIView *_gradientBackgroundView;
    UIView *_coverBottomGradientView;
    UIImageView *_pauseIcon;
    MediaDecrypter *_decrypter;
    UILabel *_rotateTipLabel;
    NSTimer *_videoRotateTimer;
    double _rotateTimeDuration;
    struct CGAffineTransform _bottomGradientViewTransform;
}

@property(nonatomic) _Bool isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) double rotateTimeDuration; // @synthesize rotateTimeDuration=_rotateTimeDuration;
@property(retain, nonatomic) NSTimer *videoRotateTimer; // @synthesize videoRotateTimer=_videoRotateTimer;
@property(retain, nonatomic) UILabel *rotateTipLabel; // @synthesize rotateTipLabel=_rotateTipLabel;
@property(retain, nonatomic) MediaDecrypter *decrypter; // @synthesize decrypter=_decrypter;
@property(nonatomic) _Bool skipDouPlusToastRemove; // @synthesize skipDouPlusToastRemove=_skipDouPlusToastRemove;
@property(nonatomic) _Bool isAdLearnMoreShowed; // @synthesize isAdLearnMoreShowed=_isAdLearnMoreShowed;
@property(nonatomic) struct CGAffineTransform bottomGradientViewTransform; // @synthesize bottomGradientViewTransform=_bottomGradientViewTransform;
@property(retain, nonatomic) UIImageView *pauseIcon; // @synthesize pauseIcon=_pauseIcon;
@property(retain, nonatomic) UIView *coverBottomGradientView; // @synthesize coverBottomGradientView=_coverBottomGradientView;
@property(retain, nonatomic) UIView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
@property(retain, nonatomic) UIView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) UIView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) AWEAwemeModel *repostItem; // @synthesize repostItem=_repostItem;
- (void).cxx_destruct;
- (_Bool)enableInfoCheckBeforeTap:(id)arg1;
- (double)videoCurrentPlayBackTime;
- (id)getPlayExtraFromSubclass;
- (void)player:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playerDidReadyForDisplay:(id)arg1;
- (void)playerWillLoopPlaying:(id)arg1;
- (void)player:(id)arg1 didChangePlaybackStateWithAction:(long long)arg2;
- (id)modelImpreType;
- (id)rotateTipKey;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)videoRoteteTimerTriggle;
- (void)showTipLabel;
- (void)checkVideoRotateOnPlayStatus:(long long)arg1;
- (void)addRotateTipView;
- (_Bool)_isAdvertisement;
- (void)_showLiveBubbleGuideIfNeed;
- (void)_showLiveGuideIfNeed;
- (void)applyStickerInfo:(id)arg1;
- (id)getVideoInformation:(id)arg1;
- (void)checkAdVideo;
- (void)_setupAdCardIfNeeded;
- (void)_setupAdLearnMoreView;
- (void)_trackAdWhenStopped;
- (_Bool)isVideoInFestivalHashtag;
- (void)handleFestivalIconChange;
- (void)updatePlayerController:(id)arg1 withPlayVideoVC:(id)arg2;
- (_Bool)isAutoPlaying;
- (long long)type;
- (_Bool)pause;
- (_Bool)stop;
- (_Bool)play;
- (void)trackVideoPlaySubTasksWithAttributes:(id)arg1;
- (_Bool)videoShouldPlay;
- (void)reset;
- (_Bool)alertIfNotValid;
- (void)updatePlayerIfNeeded;
- (void)activatePauseAnimation;
- (void)activatePlayAnimation;
- (void)_playWithAnimation;
- (void)playWithAnimation;
- (void)setPauseHidden:(_Bool)arg1;
- (void)hidePauseIcon;
- (void)_pauseWithAnimation;
- (void)pauseWithAnimation;
- (void)_setupAdTrackIfNeeded;
- (void)setBottomGradientAlpha:(double)arg1 duration:(double)arg2;
- (void)_addCoverGradientView;
- (void)_interactionDescriptionLabelAnimation:(id)arg1;
- (struct CGAffineTransform)_transformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
- (void)_addGradientViews;
- (void)viewWillLayoutSubviews;
- (void)_updatePlayerConfiguration;
- (void)_setupQuartileObserver;
- (void)dealloc;
- (void)setModel:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_addObservers;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

