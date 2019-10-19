//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIIconButton.h"

@class NFUILottieAnimationView, NSNumber;

@interface NFUIAnimatedButton : NFUIIconButton
{
    NFUILottieAnimationView *_animationView;
    double _yOffset;
    NSNumber *_startFrame;
    NSNumber *_endFrame;
    struct CGSize _explicitAnimationSize;
}

@property struct CGSize explicitAnimationSize; // @synthesize explicitAnimationSize=_explicitAnimationSize;
@property NSNumber *endFrame; // @synthesize endFrame=_endFrame;
@property NSNumber *startFrame; // @synthesize startFrame=_startFrame;
@property double yOffset; // @synthesize yOffset=_yOffset;
@property(retain) NFUILottieAnimationView *animationView; // @synthesize animationView=_animationView;
- (void).cxx_destruct;
- (void)advanceToOffStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)advanceToOnStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)instantSwitchToOffState;
- (void)instantSwitchToOnState;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)configureWithAnimationNamed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
