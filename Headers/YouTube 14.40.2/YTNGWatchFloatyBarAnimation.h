//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTNGWatchAnimation.h"

@class CADisplayLink, NSString, YTNGWatchLayerView<YTNGWatchMiniPlayerAnimationDelegate>;

@interface YTNGWatchFloatyBarAnimation : NSObject <YTNGWatchAnimation>
{
    YTNGWatchLayerView<YTNGWatchMiniPlayerAnimationDelegate> *_animationDelegate;
    CADisplayLink *_displayLink;
    double _initialExpansionFraction;
    double _completionExpansionFraction;
    double _animationInitialPosition;
    double _animationFinalPosition;
    struct CGRect _finalFloatyBarFrame;
    struct CGRect _initialWatchPageFrame;
    _Bool _isAnimating;
    double _expansionFraction;
}

@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) double expansionFraction; // @synthesize expansionFraction=_expansionFraction;
- (void).cxx_destruct;
- (void)resetState;
- (void)updateLayoutForExpansionFraction:(double)arg1;
- (void)animateWithDisplayLinkUpdateWithDuration:(double)arg1 completionFraction:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)stopDisplayLink;
- (void)updateDisplayLink:(id)arg1;
- (void)startDisplayLinkWithInitialExpansionFraction:(double)arg1 completionExpansionFraction:(double)arg2;
- (double)statusBarFadeTargetHeightRatio;
- (void)completeCollapseAnimation:(CDUnknownBlockType)arg1 isCancellation:(_Bool)arg2;
- (void)completeExpandAnimation:(CDUnknownBlockType)arg1 isCancellation:(_Bool)arg2;
- (void)prepareCollapseAnimation;
- (void)prepareExpandAnimation;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

