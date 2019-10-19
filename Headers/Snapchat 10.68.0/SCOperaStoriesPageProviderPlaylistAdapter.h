//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesOperaPageProvider-Protocol.h"

@class NSString, SCStoriesOperaDataSource;
@protocol SCOperaPlaylistItemController;

@interface SCOperaStoriesPageProviderPlaylistAdapter : NSObject <SCStoriesOperaPageProvider>
{
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCStoriesOperaDataSource *_storiesDataSource;
}

- (void).cxx_destruct;
- (_Bool)isLastFriendStoriesToDisplay:(id)arg1;
- (_Bool)isLastStoryInFriendStories:(id)arg1;
- (void)skipStory:(id)arg1;
- (void)removeInjectedFriendStories:(id)arg1;
- (void)injectFriendStories:(id)arg1;
- (void)injectStory:(id)arg1 afterStory:(id)arg2;
- (void)didStartToPlayStory:(id)arg1;
- (unsigned long long)indexOfStoryRelativeToInitialStory:(id)arg1;
- (unsigned long long)indexOfFriendStoriesInPlaylist:(id)arg1;
- (unsigned long long)friendsPlayListCount;
- (id)firstStoryToDisplay;
- (void)updatePageForStory:(id)arg1;
- (id)firstPlaylistItemIDToDisplay;
- (void)updatePageForID:(id)arg1;
- (id)initWithPlaylistItemController:(id)arg1 friendStoryDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
