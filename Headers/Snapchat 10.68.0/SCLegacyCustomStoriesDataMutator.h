//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyCustomStoriesDataMutating-Protocol.h"

@class FriendStoriesCollection, NSString, SCGroupStoryCollection, SCLazy, SCMyContributionStoriesCollection;

@interface SCLegacyCustomStoriesDataMutator : NSObject <SCLegacyCustomStoriesDataMutating>
{
    SCGroupStoryCollection *_groupStoryCollection;
    FriendStoriesCollection *_friendStoriesCollection;
    SCMyContributionStoriesCollection *_myContributionStoriesCollection;
    SCLazy *_groupsDataFetcher;
}

- (void).cxx_destruct;
- (void)_createCustomStoryWithResponse:(id)arg1;
- (void)_updateLocalGroupChatStoryOnMainThreadWithMetadata:(id)arg1;
- (void)_resetCustomStoriesOnMainThread;
- (void)_removeCustomStoryOnMainThreadWithPublicationId:(id)arg1;
- (void)_prepareRemoveCustomStoryOnMainThreadWithPublicationId:(id)arg1;
- (void)createCustomStoryWithResponse:(id)arg1;
- (void)updateOrCreateLocalGroupChatStoryWithMetadata:(id)arg1;
- (void)resetCustomStories;
- (void)removeCustomStoryWithPublicationId:(id)arg1;
- (void)prepareRemoveCustomStoryWithPublicationId:(id)arg1;
- (id)initWithGroupStoryCollection:(id)arg1 friendStoriesCollection:(id)arg2 myContributionStoriesCollection:(id)arg3 groupsDataFetcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

