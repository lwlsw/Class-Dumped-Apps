//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel, UIView;

@interface SCBatchCaptureActionButton : UIButton
{
    UIView *_overlayBackgroundView;
    UIView *_overlayView;
    UIView *_thumbnailBackgroundView;
    UIImageView *_thumbnailImageView;
    UILabel *_thumbnailCountLabel;
    UILabel *_descriptionLabel;
    UIImageView *_arrowView;
}

@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *thumbnailCountLabel; // @synthesize thumbnailCountLabel=_thumbnailCountLabel;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) UIView *thumbnailBackgroundView; // @synthesize thumbnailBackgroundView=_thumbnailBackgroundView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIView *overlayBackgroundView; // @synthesize overlayBackgroundView=_overlayBackgroundView;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)_setupSubViews;
- (void)setThumbnail:(id)arg1 withTotalCount:(long long)arg2;
- (void)scaleUp;
- (void)moveLower;
- (void)scaleDown;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
