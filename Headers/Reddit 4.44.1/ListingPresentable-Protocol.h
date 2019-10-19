//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AnalyticsViewProtocol-Protocol.h"

@class ListingPresenter, NSUUID;

@protocol ListingPresentable <AnalyticsViewProtocol>
@property(readonly, nonatomic) _Bool isViewLoaded;
- (void)updateFirstLoadSpinnerAndEmptyView;
- (void)sendScrollViewEventFromBackground:(_Bool)arg1;
- (void)reloadListData;
- (void)listingDidStartFetching:(ListingPresenter *)arg1;
- (void)listingDidFailFetching:(ListingPresenter *)arg1;
- (void)listingDidFetchMoreData:(ListingPresenter *)arg1;
- (void)displayListingContent:(ListingPresenter *)arg1 correlationID:(NSUUID *)arg2;
@end
