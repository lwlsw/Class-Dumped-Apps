//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyMyStoriesDataUpdateForwarding-Protocol.h"
#import "SCMyStoriesDataCoordinating-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCGroupStoryCollection, SCLazy, SCMyContributionStoriesCollection, SCMyStories;

@interface SCLegacyMyStoriesDataCoordinator : NSObject <SCLegacyMyStoriesDataUpdateForwarding, SCMyStoriesDataCoordinating>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCMyContributionStoriesCollection *_myStoriesCollections;
    SCGroupStoryCollection *_groupStoryCollection;
    SCMyStories *_myStories;
    SCLazy *_mixerRequester;
    NSString *_currentUserId;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)handleDataRequest:(id)arg1;
- (void)storiesArrayDidUpdate;
- (void)_handleFetchMyStoriesWithResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchMyStoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)didDeleteSnapForServerId:(id)arg1;
- (id)allMyStorySnapIds;
- (id)initWithMyContributionStoriesCollection:(id)arg1 groupStoryCollection:(id)arg2 myStories:(id)arg3 currentUserId:(id)arg4 mixerRequester:(id)arg5;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

