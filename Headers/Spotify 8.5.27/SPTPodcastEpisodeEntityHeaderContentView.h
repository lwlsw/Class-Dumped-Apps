//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUEGradientView, GLUEImageView, GLUELabel, GLUETrackAccessoryLabel, NSLayoutConstraint, NSString, SPTPodcastEpisodeEntityHeaderContentViewStyle, UIImage, UIImageView, UIProgressView, UIStackView;
@protocol SPTPodcastEpisodeEntityHeaderContentViewDelegate;

@interface SPTPodcastEpisodeEntityHeaderContentView : UIView <GLUEStyleable>
{
    _Bool _titleHiddenWhenCollapsed;
    id <SPTPodcastEpisodeEntityHeaderContentViewDelegate> _delegate;
    GLUEButton *_actionButton;
    SPTPodcastEpisodeEntityHeaderContentViewStyle *_style;
    double _minimumHeight;
    GLUEImageView *_podcastCoverImage;
    UIStackView *_titleStackView;
    GLUELabel *_titleLabel;
    GLUELabel *_collapsedTitleLabel;
    GLUELabel *_podcastLabel;
    GLUELabel *_metadataLabel;
    UIProgressView *_progressView;
    UIImageView *_playedCheckmark;
    UIStackView *_metadataContainer;
    UIStackView *_contentStackView;
    UIView *_titleSpacer;
    GLUETrackAccessoryLabel *_accessoryLabel;
    UIView *_accessoryContainerView;
    GLUEGradientView *_backgroundGradientView;
    NSLayoutConstraint *_contentConstraint;
    NSLayoutConstraint *_contentLeadingLayoutConstraint;
    NSLayoutConstraint *_contentTrailingLayoutConstraint;
    NSLayoutConstraint *_collapsedTitleTopLayoutConstraint;
    NSLayoutConstraint *_collapsedTitleLeadingLayoutConstraint;
    NSLayoutConstraint *_collapsedTitleTrailingLayoutConstraint;
    NSLayoutConstraint *_backgroundHeightConstraint;
    NSLayoutConstraint *_heightLayoutConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *heightLayoutConstraint; // @synthesize heightLayoutConstraint=_heightLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *backgroundHeightConstraint; // @synthesize backgroundHeightConstraint=_backgroundHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *collapsedTitleTrailingLayoutConstraint; // @synthesize collapsedTitleTrailingLayoutConstraint=_collapsedTitleTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *collapsedTitleLeadingLayoutConstraint; // @synthesize collapsedTitleLeadingLayoutConstraint=_collapsedTitleLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *collapsedTitleTopLayoutConstraint; // @synthesize collapsedTitleTopLayoutConstraint=_collapsedTitleTopLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentTrailingLayoutConstraint; // @synthesize contentTrailingLayoutConstraint=_contentTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentLeadingLayoutConstraint; // @synthesize contentLeadingLayoutConstraint=_contentLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentConstraint; // @synthesize contentConstraint=_contentConstraint;
@property(retain, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(retain, nonatomic) UIView *accessoryContainerView; // @synthesize accessoryContainerView=_accessoryContainerView;
@property(retain, nonatomic) GLUETrackAccessoryLabel *accessoryLabel; // @synthesize accessoryLabel=_accessoryLabel;
@property(retain, nonatomic) UIView *titleSpacer; // @synthesize titleSpacer=_titleSpacer;
@property(retain, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(retain, nonatomic) UIStackView *metadataContainer; // @synthesize metadataContainer=_metadataContainer;
@property(retain, nonatomic) UIImageView *playedCheckmark; // @synthesize playedCheckmark=_playedCheckmark;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) GLUELabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) GLUELabel *podcastLabel; // @synthesize podcastLabel=_podcastLabel;
@property(retain, nonatomic) GLUELabel *collapsedTitleLabel; // @synthesize collapsedTitleLabel=_collapsedTitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIStackView *titleStackView; // @synthesize titleStackView=_titleStackView;
@property(retain, nonatomic) GLUEImageView *podcastCoverImage; // @synthesize podcastCoverImage=_podcastCoverImage;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(copy, nonatomic) SPTPodcastEpisodeEntityHeaderContentViewStyle *style; // @synthesize style=_style;
@property(nonatomic, getter=isTitleHiddenWhenCollapsed) _Bool titleHiddenWhenCollapsed; // @synthesize titleHiddenWhenCollapsed=_titleHiddenWhenCollapsed;
@property(readonly, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak id <SPTPodcastEpisodeEntityHeaderContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)updateOffset:(double)arg1;
- (void)updateMinimumHeight:(double)arg1;
- (void)updateVisibleRect:(struct CGRect)arg1 minimumHeight:(double)arg2 navBarHeight:(double)arg3;
@property(nonatomic) double listeningProgress;
@property(nonatomic, getter=isPlayed) _Bool played;
@property(nonatomic, getter=isExplicit) _Bool explicit;
@property(copy, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *metadataText;
@property(copy, nonatomic) NSString *podcastText;
@property(copy, nonatomic) NSString *title;
- (double)heightAdjustment;
- (double)contentAdjustment;
- (id)accessoryContainerForLabel:(id)arg1 spacing:(double)arg2;
- (void)setupConstraints;
- (void)initializeInterface;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
