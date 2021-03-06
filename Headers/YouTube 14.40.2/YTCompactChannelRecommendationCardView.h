//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "GA11YMixinEmbedder.h"
#import "UIGestureRecognizerDelegate.h"
#import "YTReusableView.h"
#import "YTThumbnailMapping.h"

@class NSString, UIImageView, UITapGestureRecognizer, UIView, YTFormattedStringLabel, YTICompactChannelRecommendationCardRenderer, YTImageView, YTNotificationMultiToggleButton, YTQTMButton, YTSubscribeSwitch;

@interface YTCompactChannelRecommendationCardView : UIControl <GA11YMixinEmbedder, UIGestureRecognizerDelegate, YTReusableView, YTThumbnailMapping>
{
    YTImageView *_thumbnail;
    UIImageView *_backgroundProtectionView;
    YTImageView *_avatarImageView;
    YTFormattedStringLabel *_channelTitleLabel;
    YTFormattedStringLabel *_channelDescriptionLabel;
    YTFormattedStringLabel *_subscriberCountLabel;
    YTQTMButton *_actionButton;
    UITapGestureRecognizer *_tapRecognizer;
    _Bool _isLeftAlignedStyle;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTCompactChannelRecommendationCardCellDelegate> _delegate;
    YTICompactChannelRecommendationCardRenderer *_renderer;
    YTSubscribeSwitch *_subscribeSwitch;
    YTNotificationMultiToggleButton *_notificationMultiToggleButton;
}

+ (_Bool)isLargeChannelCardStyle:(id)arg1;
@property(readonly, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton; // @synthesize notificationMultiToggleButton=_notificationMultiToggleButton;
@property(retain, nonatomic) YTSubscribeSwitch *subscribeSwitch; // @synthesize subscribeSwitch=_subscribeSwitch;
@property(retain, nonatomic) YTICompactChannelRecommendationCardRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak id <YTCompactChannelRecommendationCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)insertBackgroundProtectionWithColor:(id)arg1;
- (double)largeChannelCardDescriptionHeight:(double)arg1;
- (double)cardHeightLargeChannelCard:(double)arg1;
- (void)didTapOverflowMenu:(id)arg1;
- (void)didTapCell:(id)arg1;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)thumbnailMappings;
- (void)prepareForReuse;
@property(readonly, nonatomic) UIView *menuAnchorView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)subscribeButtonTextForState:(long long)arg1;
- (void)layoutSubviews_normalCardStyle;
- (void)layoutSubviews_largeCardStyle;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)thumbnailHeight;
- (double)avatarSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)leftAlignedStyleButtonSpacing;
- (double)leftAlignedStyleAvatarPadding;
- (double)leftAlignedStyleCardHeight;
- (double)bottomPaddingY;
- (double)descriptionPaddingX;
- (double)descriptionPaddingYWithBell;
- (double)descriptionPaddingY;
- (double)titlePadding;
- (double)contentMargin;
- (double)thumbnailHeightLargeChannelCard;
- (double)cardHeight;
- (double)cardWidthLargeChannelCard;
- (double)cardWidth;
- (double)itemSpacingLargeChannelCard;
- (double)itemSpacing;
- (double)subscriberCountPadding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

