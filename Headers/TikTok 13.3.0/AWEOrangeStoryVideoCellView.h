//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEOrangeStoryCellMediaWrapperDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEBlackGradientView, AWELoadingAndVolumeView, AWEOneDayUserStoryModel, AWEOrangeStoryDetailCollectionCell, AWEOrangeStoryVideoCellProgressView, NSDictionary, NSMutableArray, NSString;
@protocol AWEOneDayVideoCellDelegate;

@interface AWEOrangeStoryVideoCellView : UIView <AWEOrangeStoryCellMediaWrapperDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isFirstAppear;
    _Bool _requestNoMore;
    _Bool _isAppear;
    _Bool _isDisappear;
    _Bool _storyListPrepare;
    id <AWEOneDayVideoCellDelegate> _delegate;
    AWEBlackGradientView *_topGradientView;
    AWEBlackGradientView *_leftGradientView;
    AWEOrangeStoryVideoCellProgressView *_progressView;
    AWEOrangeStoryDetailCollectionCell *_collectionCell;
    AWELoadingAndVolumeView *_loadingView;
    AWEOneDayUserStoryModel *_userStoryModel;
    NSDictionary *_paramDic;
    double _eachPlayTime;
    double _currentStoryPlayTime;
    NSMutableArray *_mediaPlayerArray;
}

@property(retain, nonatomic) NSMutableArray *mediaPlayerArray; // @synthesize mediaPlayerArray=_mediaPlayerArray;
@property(nonatomic) double currentStoryPlayTime; // @synthesize currentStoryPlayTime=_currentStoryPlayTime;
@property(nonatomic) double eachPlayTime; // @synthesize eachPlayTime=_eachPlayTime;
@property(nonatomic) _Bool storyListPrepare; // @synthesize storyListPrepare=_storyListPrepare;
@property(nonatomic) _Bool isDisappear; // @synthesize isDisappear=_isDisappear;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(copy, nonatomic) NSDictionary *paramDic; // @synthesize paramDic=_paramDic;
@property(retain, nonatomic) AWEOneDayUserStoryModel *userStoryModel; // @synthesize userStoryModel=_userStoryModel;
@property(nonatomic) _Bool requestNoMore; // @synthesize requestNoMore=_requestNoMore;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(retain, nonatomic) AWELoadingAndVolumeView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak AWEOrangeStoryDetailCollectionCell *collectionCell; // @synthesize collectionCell=_collectionCell;
@property(retain, nonatomic) AWEOrangeStoryVideoCellProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) AWEBlackGradientView *leftGradientView; // @synthesize leftGradientView=_leftGradientView;
@property(retain, nonatomic) AWEBlackGradientView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(nonatomic) __weak id <AWEOneDayVideoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)orangeStoryCellMediaWrapperNullModel:(id)arg1;
- (void)player:(id)arg1 didChangeStallState:(long long)arg2;
- (void)playerDidReadyForDisplay:(id)arg1;
- (void)player:(id)arg1 playbackFailedForURL:(id)arg2 error:(id)arg3;
- (void)player:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playerWillLoopPlaying:(id)arg1;
- (void)player:(id)arg1 didChangePlaybackStateWithAction:(long long)arg2;
- (void)demaciaPlayerPlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)demaciaPlayerDisplayLinkPlayProgress:(double)arg1;
- (void)demaciaImagePlayerView:(id)arg1 playTime:(double)arg2 totalTime:(double)arg3;
- (void)demaciaImagePlayerView:(id)arg1 state:(long long)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tapToNext:(_Bool)arg1;
- (void)tapPlayer:(id)arg1;
- (void)tryReportPlayTime;
- (void)conformToArrayCount;
- (void)loadingStart:(_Bool)arg1;
- (void)hideCurrentToNext:(_Bool)arg1;
- (void)hideCurrentToFont:(_Bool)arg1;
- (void)refreshMediaViewStoryIndex:(long long)arg1;
- (void)replayCurrent;
- (void)reset;
- (void)stop;
- (void)pauseWithAutoPlay:(_Bool)arg1;
- (void)pause;
- (void)play;
- (_Bool)isPlaying;
- (void)collectionUserChangeType:(long long)arg1 enterMethod:(id)arg2;
- (void)hideMediaPlayer:(_Bool)arg1;
- (void)deleteCurrentVideo;
- (long long)mediaType;
- (long long)currentPlayIndex;
- (id)currentStoryCommentModel;
- (void)prepareIndexModel:(_Bool)arg1;
- (void)prepareToPlay;
- (void)refreshAweModel:(id)arg1 paramDic:(id)arg2;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

