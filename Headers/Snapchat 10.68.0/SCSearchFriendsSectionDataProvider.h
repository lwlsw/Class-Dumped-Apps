//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSString, SCAddFriendsSnapchatterDataProvider, SCEventListenerAnnouncer, SCLazy, SCPreferences, SCScopedAccess, SCSearchFriendsDataProvider, SCSearchSession;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCSearchFriendsSectionDataProvider : NSObject <SCUpdateListener, SCSnapchattersDataRequestListener, SCSectionDataProviding, SCDataCoordinatorListener>
{
    SCSearchSession *_searchSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    long long _dataLoadingStatus;
    NSArray *_personViewModels;
    NSArray *_snapchatterViewModels;
    SCAddFriendsSnapchatterDataProvider *_addFriendsSnapchatterDataProvider;
    SCSearchFriendsDataProvider *_friendDataProvider;
    SCScopedAccess *_friendsFeedDataAccess;
    SCPreferences *_preferences;
    SCLazy *_snapchatterFetcher;
    SCLazy *_snapchatterTracker;
    SCLazy *_pinnedConversationsDataCoordinator;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_reloadSection;
- (void)_configureFriendCardCollectionViewCell:(id)arg1;
- (id)_feedIconsForSnapchatters:(id)arg1;
- (id)_actionTextForSnapchatters:(id)arg1;
- (id)_snapchatterViewModelAtIndexPath:(id)arg1;
- (id)_containerViewModelAtIndexPath:(id)arg1;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (long long)dataLoadingStatus;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)_fetchRecentSearchedFriendsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_updateDataModelsWithSnapchatters:(id)arg1 friendsSectionDataModel:(id)arg2 feedIcons:(id)arg3 actionTexts:(id)arg4;
- (void)_updateWithBestFriends:(id)arg1 friendsSectionDataModel:(id)arg2;
- (void)_updateViewModels;
- (id)initWithSearchSession:(id)arg1 snapchatterFetcher:(id)arg2 snapchatterTracker:(id)arg3 pinnedConversationsDatCoordinator:(id)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

