//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol BMVideoSurface;

@interface SPTPodcastVideoViewControllerTransitionView : UIView
{
    UIView<BMVideoSurface> *_videoSurface;
    UIView *_shadowView;
    struct CGVector _shadowViewScalingVector;
}

@property(readonly, nonatomic) struct CGVector shadowViewScalingVector; // @synthesize shadowViewScalingVector=_shadowViewScalingVector;
@property(readonly, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(readonly, nonatomic) UIView<BMVideoSurface> *videoSurface; // @synthesize videoSurface=_videoSurface;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithVideoSurface:(id)arg1 shadowView:(id)arg2;

@end

