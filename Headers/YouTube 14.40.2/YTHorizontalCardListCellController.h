//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

#import "YTCardListViewDelegate.h"
#import "YTHorizontalCardListViewDelegate.h"
#import "YTSubscriptionServiceObserver.h"

@class NSString, YTHorizontalCardListCellScrollFocusController, YTHorizontalCardListCollectionViewController, YTIHorizontalCardListRenderer, YTSortFilterHeaderViewController;

@interface YTHorizontalCardListCellController : YTInnerTubeCellController <YTSubscriptionServiceObserver, YTCardListViewDelegate, YTHorizontalCardListViewDelegate>
{
    YTIHorizontalCardListRenderer *_renderer;
    struct CGSize _cachedSize;
    struct CGSize _lastSize;
    double _updateEntryDelay;
    id <YTHorizontalCardListRendererInfoProvider> _cardInfoProvider;
    NSString *_activeStateExperimentName;
    _Bool _scrollFocusOnHome;
    YTHorizontalCardListCellScrollFocusController *_horizontalCardListCellScrollFocusController;
    YTHorizontalCardListCollectionViewController *_collectionVC;
    YTSortFilterHeaderViewController *_sortFilterHeaderViewController;
}

@property(retain, nonatomic) YTSortFilterHeaderViewController *sortFilterHeaderViewController; // @synthesize sortFilterHeaderViewController=_sortFilterHeaderViewController;
@property(readonly, nonatomic) YTHorizontalCardListCollectionViewController *collectionVC; // @synthesize collectionVC=_collectionVC;
- (void).cxx_destruct;
- (void)dealloc;
- (id)actionSheetActionForSortFilterItem:(id)arg1 pageStyle:(long long)arg2;
- (void)handleCommands:(id)arg1 channelID:(id)arg2;
- (void)handleLongPressBegan:(id)arg1;
- (void)handleAction:(id)arg1;
- (void)didSelectItem;
- (void)subscriptionRemovedWithChannelID:(id)arg1 response:(id)arg2;
- (void)subscriptionAddedWithChannelID:(id)arg1 response:(id)arg2;
- (void)didTapOverflowMenu:(id)arg1;
- (void)didTapCardListCollectionViewItemAtIndex:(long long)arg1;
- (void)didTapSortFilterButton:(id)arg1;
- (void)didTapMenuActionButton:(id)arg1;
- (void)didTapActionButton:(id)arg1;
- (void)didTapAvatarView:(id)arg1;
- (void)didTapHeader:(id)arg1;
- (void)cellWillBecomeVisibleWithVisibilityEventType:(int)arg1;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1;
- (void)setCell:(id)arg1;
- (void)setCollectionVCEntry:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
