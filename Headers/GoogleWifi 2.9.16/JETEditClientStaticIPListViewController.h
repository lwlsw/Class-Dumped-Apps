//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

#import "GOONavigationCustomization-Protocol.h"

@class GOONavigationStyle, JETInsightsDataCache, NSSet, NSString, UIScrollView, UIView;

@interface JETEditClientStaticIPListViewController : JETGroupAwareCollectionViewController <GOONavigationCustomization>
{
    JETInsightsDataCache *_cache;
}

@property(retain, nonatomic) JETInsightsDataCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)friendlyNameForStationWithID:(id)arg1;
- (void)deleteMapping:(id)arg1;
- (void)populateModel;
- (void)deleteButtonTappedForMapping:(id)arg1;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)accessPointsGroupIsUpdated;
- (id)initWithUserState:(id)arg1 group:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end
