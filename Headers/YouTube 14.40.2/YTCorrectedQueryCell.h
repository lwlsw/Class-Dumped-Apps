//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "GA11YMixinEmbedder.h"
#import "YTCellLinkProtocol.h"
#import "YTCollectionViewCellProtocol.h"
#import "YTFormattedStringLabelDelegate.h"
#import "YTResponder.h"

@class NSString, YTFormattedStringLabel;

@interface YTCorrectedQueryCell : YTCollectionViewCell <GA11YMixinEmbedder, YTFormattedStringLabelDelegate, YTCollectionViewCellProtocol, YTResponder, YTCellLinkProtocol>
{
    id <YTCorrectedQuery> _renderer;
    YTFormattedStringLabel *_headingLabel;
    YTFormattedStringLabel *_subheadingLabel;
    id <YTResponder> _parentResponder;
    id <YTCellLinkDelegate> _cellLinkDelegate;
    id <GA11YMixinImpl> _accessibilityMixin;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic) __weak id <YTCellLinkDelegate> cellLinkDelegate; // @synthesize cellLinkDelegate=_cellLinkDelegate;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
