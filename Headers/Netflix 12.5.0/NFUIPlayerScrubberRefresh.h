//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIPlayerScrubber.h"

@class UIColor, UIImage;

@interface NFUIPlayerScrubberRefresh : NFUIPlayerScrubber
{
    _Bool _enableDelayedProgressStyle;
    UIColor *_trackAndThumbColor;
    UIImage *_trackHeightThumbImage;
    UIImage *_fullHeightThumbImage;
}

@property(retain, nonatomic) UIImage *fullHeightThumbImage; // @synthesize fullHeightThumbImage=_fullHeightThumbImage;
@property(retain, nonatomic) UIImage *trackHeightThumbImage; // @synthesize trackHeightThumbImage=_trackHeightThumbImage;
@property(retain, nonatomic) UIColor *trackAndThumbColor; // @synthesize trackAndThumbColor=_trackAndThumbColor;
@property(nonatomic) _Bool enableDelayedProgressStyle; // @synthesize enableDelayedProgressStyle=_enableDelayedProgressStyle;
- (void).cxx_destruct;
- (void)configureTrackAndThumbImages;
- (void)restoreThumbHandleWithDuration:(double)arg1;
- (void)collapseThumbHandleWithDuration:(double)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)initSlider;

@end

