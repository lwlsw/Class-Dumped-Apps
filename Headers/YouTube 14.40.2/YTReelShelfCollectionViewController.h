//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewController.h"

#import "YTReelWatchEndpointsResponderProvider.h"

@class NSArray, NSDate, NSString, YTReelShelfCollection, YTReelShelfSectionControllerBuilder, YTSectionController;

@interface YTReelShelfCollectionViewController : YTCollectionViewController <YTReelWatchEndpointsResponderProvider>
{
    YTReelShelfCollection *_shelfCollection;
    YTSectionController *_sectionController;
    YTReelShelfSectionControllerBuilder *_builder;
    NSArray *_items;
    NSDate *_createdDate;
    _Bool _didInteractWithShelf;
    _Bool _hideOverflow;
    _Bool _overflowItemsHidden;
    id <YTResponder> _parentResponder;
}

+ (id)layout;
+ (id)collectionViewUIFormatter;
@property(nonatomic) _Bool overflowItemsHidden; // @synthesize overflowItemsHidden=_overflowItemsHidden;
@property(nonatomic) _Bool hideOverflow; // @synthesize hideOverflow=_hideOverflow;
- (id)parentResponder;
- (void).cxx_destruct;
- (id)cellFactory;
- (void)setUpSectionControllerWithItems:(id)arg1;
- (id)visibleItemsFromItems:(id)arg1 excludingOverflow:(_Bool)arg2;
- (long long)numberOfFullyVisibleItems;
- (double)itemWidth;
- (void)setItems:(id)arg1 hideOverflow:(_Bool)arg2;
- (unsigned long long)indexOfWatchEndpoint:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollToViewForEndpoint:(id)arg1;
- (id)viewForEndpoint:(id)arg1;
- (id)createdDate;
- (id)reelWatchEndpoints;
- (void)updateFromShelfCollection;
- (_Bool)shouldScrollToTop;
- (void)viewDidLoad;
- (id)initWithShelfCollection:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

