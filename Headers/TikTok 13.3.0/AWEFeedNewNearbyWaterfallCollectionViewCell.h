//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWEFeedNearbyCollectionCellProtocol-Protocol.h"

@class AWEAwemeModel, AWEGradientView, AWEMarkView, NSString, UIImageView, UILabel, UIView;

@interface AWEFeedNewNearbyWaterfallCollectionViewCell : UICollectionViewCell <AWEFeedNearbyCollectionCellProtocol>
{
    _Bool _shouldShowPOIButton;
    _Bool _shouldOptimizeUI;
    _Bool _isLiveStreaming;
    NSString *_enterFrom;
    UIView *_contentContainerView;
    UIImageView *_coverImageView;
    AWEGradientView *_bottomGradientMaskView;
    AWEMarkView *_poiButton;
    AWEMarkView *_poiColorfulButton;
    AWEMarkView *_distanceButton;
    AWEMarkView *_goodsSeedAnchorButton;
    UIImageView *_userImageView;
    UIImageView *_mixVideoIconView;
    UILabel *_userNameLabel;
    UILabel *_liveTypeTagLabel;
    UIView *_liveTypeTagView;
    UILabel *_descriptionLabel;
    UIView *_likeContainerView;
    UIImageView *_likeImageView;
    UILabel *_likeNumberLabel;
    AWEGradientView *_topGradientMaskView;
    UIImageView *_photoImageView;
    AWEAwemeModel *_model;
    UIView *_liveViewContainer;
}

+ (double)descriptionLabelLineSpacingForOptimizeUI:(_Bool)arg1;
+ (double)descriptionLabelInsetForOptimizeUI:(_Bool)arg1;
+ (double)coverImageRatioForAweme:(id)arg1;
+ (double)cellHeightForModel:(id)arg1 withWidth:(double)arg2 shouldShowPOI:(_Bool)arg3 shouldOptimizeNearbyUI:(_Bool)arg4;
+ (double)cellHeightForModel:(id)arg1 withWidth:(double)arg2;
+ (id)appendMixVideoTagIfNeededWithAweme:(id)arg1 attributedString:(id)arg2 fontSize:(double)arg3;
+ (_Bool)enableMixVideo:(id)arg1;
@property(nonatomic) _Bool isLiveStreaming; // @synthesize isLiveStreaming=_isLiveStreaming;
@property(retain, nonatomic) UIView *liveViewContainer; // @synthesize liveViewContainer=_liveViewContainer;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) AWEGradientView *topGradientMaskView; // @synthesize topGradientMaskView=_topGradientMaskView;
@property(retain, nonatomic) UILabel *likeNumberLabel; // @synthesize likeNumberLabel=_likeNumberLabel;
@property(retain, nonatomic) UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
@property(retain, nonatomic) UIView *likeContainerView; // @synthesize likeContainerView=_likeContainerView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *liveTypeTagView; // @synthesize liveTypeTagView=_liveTypeTagView;
@property(retain, nonatomic) UILabel *liveTypeTagLabel; // @synthesize liveTypeTagLabel=_liveTypeTagLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *mixVideoIconView; // @synthesize mixVideoIconView=_mixVideoIconView;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
@property(retain, nonatomic) AWEMarkView *goodsSeedAnchorButton; // @synthesize goodsSeedAnchorButton=_goodsSeedAnchorButton;
@property(retain, nonatomic) AWEMarkView *distanceButton; // @synthesize distanceButton=_distanceButton;
@property(retain, nonatomic) AWEMarkView *poiColorfulButton; // @synthesize poiColorfulButton=_poiColorfulButton;
@property(retain, nonatomic) AWEMarkView *poiButton; // @synthesize poiButton=_poiButton;
@property(retain, nonatomic) AWEGradientView *bottomGradientMaskView; // @synthesize bottomGradientMaskView=_bottomGradientMaskView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(nonatomic) _Bool shouldOptimizeUI; // @synthesize shouldOptimizeUI=_shouldOptimizeUI;
@property(nonatomic) _Bool shouldShowPOIButton; // @synthesize shouldShowPOIButton=_shouldShowPOIButton;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
- (void).cxx_destruct;
- (id)distanceAccessiblityLabelForAweme:(id)arg1;
- (id)likeCountAccessibilityLabelForAweme:(id)arg1;
- (id)coverAccessibilityLabelForAweme:(id)arg1;
- (void)enterUserDetail:(_Bool)arg1;
- (void)usernameClicked;
- (void)avatarClicked;
- (void)updateLayout;
- (void)prepareForReuse;
- (void)scrollViewDidScroll:(id)arg1;
- (void)resignLiveAnimated:(_Bool)arg1;
- (void)showLiveWithContentView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateWithAweme:(id)arg1 imageLoadCompletion:(CDUnknownBlockType)arg2;
- (void)updateWithAweme:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

