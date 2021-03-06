//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIVisualEffectView;

@interface SCChatInputAudioNoteTrack : UIView
{
    UIVisualEffectView *_blurView;
    UIView *_visualEffectsContainerView;
    unsigned long long _style;
    UIImageView *_cancelIcon;
    UIImageView *_audioNoteIcon;
    UIImageView *_trailingChevron;
    UIImageView *_leadingChevron;
    UILabel *_slideLabel;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UILabel *slideLabel; // @synthesize slideLabel=_slideLabel;
@property(retain, nonatomic) UIImageView *leadingChevron; // @synthesize leadingChevron=_leadingChevron;
@property(retain, nonatomic) UIImageView *trailingChevron; // @synthesize trailingChevron=_trailingChevron;
@property(retain, nonatomic) UIImageView *audioNoteIcon; // @synthesize audioNoteIcon=_audioNoteIcon;
@property(retain, nonatomic) UIImageView *cancelIcon; // @synthesize cancelIcon=_cancelIcon;
- (void).cxx_destruct;
- (void)_constructAudioNoteIconConstraints;
- (void)_constructSlideLabelConstraints;
- (void)_constructChevronConstraints;
- (void)_constructCancelIconConstraints;
- (void)_constructConstraints;
- (void)_createSlideLabel;
- (void)_createChevron;
- (void)_createCancelIcon;
- (void)_createAudioNoteIcon;
- (void)_createBlurView;
- (void)_createViews;
- (void)_setShadowForStyle:(unsigned long long)arg1;
- (void)_stylize;
- (void)_renderRoundedCorners;
- (void)setStyle:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)init;

@end

