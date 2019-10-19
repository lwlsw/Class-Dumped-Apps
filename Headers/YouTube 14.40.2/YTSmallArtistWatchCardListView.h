//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTResponder.h"
#import "YTReusableView.h"
#import "YTThumbnailMapping.h"

@class NSArray, NSMutableArray, NSString, YTIFormattedString, YTSmallArtistWatchCardListExpandView;

@interface YTSmallArtistWatchCardListView : UIView <YTReusableView, YTResponder, YTThumbnailMapping>
{
    NSMutableArray *_itemViews;
    YTSmallArtistWatchCardListExpandView *_expandView;
    id _expandTapTarget;
    SEL _expandSelector;
    _Bool _expanded;
    int _numItemsToShow;
    id <YTResponder> _parentResponder;
    NSArray *_items;
    YTIFormattedString *_collapsedLabel;
}

+ (_Bool)isExpandViewHiddenWithExpanded:(_Bool)arg1 itemsCount:(unsigned long long)arg2 numItemsToShow:(unsigned long long)arg3;
+ (double)preferredHeightForItems:(id)arg1 numItemsToShow:(int)arg2 expanded:(_Bool)arg3;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) YTIFormattedString *collapsedLabel; // @synthesize collapsedLabel=_collapsedLabel;
@property(nonatomic) int numItemsToShow; // @synthesize numItemsToShow=_numItemsToShow;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)isExpandViewHidden;
- (void)didTapExpandView;
- (void)didTapListItem:(id)arg1;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (void)removeExpandTapTarget;
- (void)setExpandTapTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
