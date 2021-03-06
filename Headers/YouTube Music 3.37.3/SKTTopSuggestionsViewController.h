//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTContactsCollectionViewController.h"

#import "SKTContactContentViewDelegate-Protocol.h"
#import "SKTContactsDataManagerDelegate-Protocol.h"
#import "SKTTopSuggestionsCollectionViewLayoutDelegate-Protocol.h"
#import "SKTTopSuggestionsDisplay-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class GOOTextContentViewObject, NSMutableArray, NSString, SKTDisplayOptions;
@protocol SKTTopSuggestionsDisplayDelegate;

@interface SKTTopSuggestionsViewController : SKTContactsCollectionViewController <SKTContactContentViewDelegate, SKTTopSuggestionsCollectionViewLayoutDelegate, SKTTopSuggestionsDisplay, SKTContactsDataManagerDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _shouldFadeInDataAppearance;
    id <SKTTopSuggestionsDisplayDelegate> topSuggestionsDisplayDelegate;
    GOOTextContentViewObject *_objectForMoreContacts;
    GOOTextContentViewObject *_objectForFindPeople;
    GOOTextContentViewObject *_objectForNewGroup;
    NSMutableArray *_displayedContactObjects;
    long long _ghostLoadingState;
}

@property long long ghostLoadingState; // @synthesize ghostLoadingState=_ghostLoadingState;
@property(retain, nonatomic) NSMutableArray *displayedContactObjects; // @synthesize displayedContactObjects=_displayedContactObjects;
@property(nonatomic) _Bool shouldFadeInDataAppearance; // @synthesize shouldFadeInDataAppearance=_shouldFadeInDataAppearance;
@property(retain, nonatomic) GOOTextContentViewObject *objectForNewGroup; // @synthesize objectForNewGroup=_objectForNewGroup;
@property(retain, nonatomic) GOOTextContentViewObject *objectForFindPeople; // @synthesize objectForFindPeople=_objectForFindPeople;
@property(retain, nonatomic) GOOTextContentViewObject *objectForMoreContacts; // @synthesize objectForMoreContacts=_objectForMoreContacts;
@property(nonatomic) __weak id <SKTTopSuggestionsDisplayDelegate> topSuggestionsDisplayDelegate; // @synthesize topSuggestionsDisplayDelegate;
- (void).cxx_destruct;
- (void)updateSelectionIndicationForAllContacts;
- (void)indicateContact:(id)arg1 changedToSelectedState:(_Bool)arg2;
- (_Bool)needsFadeInAppearanceAnimationForLayout:(id)arg1;
- (_Bool)isPortraitOrientation;
- (_Bool)shouldAskForPermissionsOnAppearance;
- (CDUnknownBlockType)updateContentOffsetForRTLBlock;
- (id)createContentViewObjectWithContact:(id)arg1;
- (id)appendContacts:(id)arg1 isFinalQueryResult:(_Bool)arg2;
- (void)verticalAlignSingleRowContacts;
- (double)contentHeight;
- (id)placeholderContentViewAtIndex:(long long)arg1;
- (void)stopGhostLoadingAnimations;
- (void)startGhostLoadingAnimation;
- (void)contactsDataManager:(id)arg1 didLoadContacts:(id)arg2 forQueryText:(id)arg3 queryState:(long long)arg4 resultIndex:(unsigned long long)arg5;
- (void)contactsDataManager:(id)arg1 awaitsRemoteDataForQuery:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 widthForCellsInSection:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)maybeLogTapAtIndexPath:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDisplayOptions:(id)arg1 contactsDataManager:(id)arg2 analyticsProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SKTDisplayOptions *displayOptions; // @dynamic displayOptions;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

