//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTLightweightCell.h"

#import "YTLightweightLongPressMenuHandling-Protocol.h"
#import "YTMSubtitleBadgesViewDelegate-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, UILabel, UIView, YTFormattedStringLabel, YTIMusicSingleItemShelfRenderer, YTMMusicThumbnailView, YTMPotentialOverlaysStackView, YTMSubtitleBadgesView;

@interface YTMLightweightSingleItemShelfCell : YTLightweightCell <YTMSubtitleBadgesViewDelegate, YTThumbnailMapping, YTLightweightLongPressMenuHandling>
{
    YTIMusicSingleItemShelfRenderer *_renderer;
    YTFormattedStringLabel *_itemTitleLabel;
    YTFormattedStringLabel *_itemSubtitleLabel;
    YTFormattedStringLabel *_itemCompanionTextLabel;
    YTMMusicThumbnailView *_musicThumbnailView;
    YTMSubtitleBadgesView *_subtitleBadgesView;
    YTMPotentialOverlaysStackView *_overlaysStackView;
    UILabel *_titleLabel;
    UILabel *_straplineLabel;
    UIView *_titleAndStraplineContainer;
    UIView *_subtitleContainer;
}

+ (id)itemCompanionTextLabelFont;
+ (id)straplineLabelFont;
+ (id)titleLabelFont;
+ (id)itemSubtitleLabelFont;
+ (id)itemTitleLabelFont;
+ (double)labelHeightForString:(id)arg1 font:(id)arg2 maxLines:(int)arg3 maxWidth:(double)arg4;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)subtitleBadgesView:(id)arg1 visibleIconCountChangedTo:(unsigned long long)arg2;
- (void)setUpOverlayViews:(id)arg1;
- (void)layoutViewsForPortrait;
- (void)layoutViewsForLandscape;
- (void)layoutLabels:(double)arg1;
- (id)yt_menuRenderer;
- (id)thumbnailMappings;
- (id)yt_longPressAccessibilityHintString;
- (id)doubleTapNavigationEndpoint;
- (id)navigationEndpoint;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
