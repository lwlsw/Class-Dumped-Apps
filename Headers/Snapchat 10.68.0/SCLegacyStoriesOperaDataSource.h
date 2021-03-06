//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacySingleStoryOperaDataSourceDelegate-Protocol.h"
#import "SCOperaPlaylistDataSource-Protocol.h"
#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"
#import "SCOperaSession-Protocol.h"
#import "SCStoriesAutoAdvanceDataSource-Protocol.h"
#import "SCStoriesOperaPageProvider-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString, SCContextV2Session, SCLegacyStoriesOperaMediaManager, SCOperaEventListenerAnnouncer, SCOperaPerformanceTrackingPlugin, SCSearchFriendProvider, SCStoriesAutoAdvanceLoader, SCStoryLoader, SCStoryUserProperties, SCStreamingResourceLoader, SCUserSession, Story;
@protocol NavigationDelegate, SCLegacyStoriesOperaDataSourceDelegate, SCOperaLabelTextProvider, SCOperaPlaylistItemController, SCOperaViewModelConnectionsCallbackController, SCOperaViewProvider;

@interface SCLegacyStoriesOperaDataSource : NSObject <SCLegacySingleStoryOperaDataSourceDelegate, SCStoriesAutoAdvanceDataSource, SCTraceEnabled, SCOperaSession, SCStoriesOperaPageProvider, SCOperaPlaylistDataSource, SCOperaPlaylistItemExtraPropertiesProvider>
{
    SCStoryUserProperties *_storyUserProperties;
    _Bool _isInStoryPlaylistMode;
    long long _viewLocation;
    NSString *_currentFriendName;
    Story *_currentStory;
    NSMutableDictionary *_userNameToFriendStories;
    NSMutableDictionary *_friendNameToDataSource;
    NSMutableOrderedSet *_viewedFriendNames;
    NSMutableDictionary *_injectedFriendNameToFriendStories;
    SCStoriesAutoAdvanceLoader *_autoAdvanceLoader;
    SCStoryLoader *_storyLoader;
    _Bool _shouldUpdateDataSourceWhenMediaStartsToPlay;
    _Bool _shouldLoadStoriesWhenMediaStartsToPlay;
    NSMutableArray *_fetchedLoadingBackgroundImageStories;
    NSString *_leftMostViewedFriendStoriesName;
    NSMutableDictionary *_usernameToDataSource;
    Story *_singleMyStorySnap;
    SCOperaPerformanceTrackingPlugin *_performanceTrackingPlugin;
    _Bool _disableInfiniteSwipeBack;
    Story *_firstStoryToDisplay;
    long long _playMode;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    NSMutableDictionary *_friendStoriesSectionMap;
    id <SCOperaViewProvider> _chromeAvatarProvider;
    id <SCOperaLabelTextProvider> _groupChatTitleProvider;
    SCContextV2Session *_contextSession;
    SCStreamingResourceLoader *_resourceLoader;
    _Bool _isInSingleStoryMode;
    _Bool _enableCriticalModeWhenLoading;
    _Bool _showViewersTable;
    id <SCLegacyStoriesOperaDataSourceDelegate> _delegate;
    SCLegacyStoriesOperaMediaManager *_storiesMediaManager;
    NSArray *_friendNameList;
    id <SCOperaViewModelConnectionsCallbackController> _viewModelConnectionsCallbackController;
    SCSearchFriendProvider *_friendProvider;
    id <SCOperaPlaylistItemController> _playlistItemController;
    long long _viewingType;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
}

@property(retain, nonatomic) SCOperaEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
@property(nonatomic) long long viewingType; // @synthesize viewingType=_viewingType;
@property(nonatomic) _Bool showViewersTable; // @synthesize showViewersTable=_showViewersTable;
@property(nonatomic) __weak id <SCOperaPlaylistItemController> playlistItemController; // @synthesize playlistItemController=_playlistItemController;
@property(retain, nonatomic) SCSearchFriendProvider *friendProvider; // @synthesize friendProvider=_friendProvider;
@property(readonly, nonatomic) _Bool enableCriticalModeWhenLoading; // @synthesize enableCriticalModeWhenLoading=_enableCriticalModeWhenLoading;
@property(nonatomic) __weak id <SCOperaViewModelConnectionsCallbackController> viewModelConnectionsCallbackController; // @synthesize viewModelConnectionsCallbackController=_viewModelConnectionsCallbackController;
@property(readonly, nonatomic) _Bool isInSingleStoryMode; // @synthesize isInSingleStoryMode=_isInSingleStoryMode;
@property(readonly, copy, nonatomic) NSArray *friendNameList; // @synthesize friendNameList=_friendNameList;
@property(readonly, nonatomic) SCLegacyStoriesOperaMediaManager *storiesMediaManager; // @synthesize storiesMediaManager=_storiesMediaManager;
@property(nonatomic) __weak id <SCLegacyStoriesOperaDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_inLineLoadFriendStories:(id)arg1 startIndex:(unsigned long long)arg2 viewingType:(long long)arg3 viewLocation:(long long)arg4;
- (void)_loadSingleStoryForViewModel:(id)arg1;
- (id)_nameListFromOperaPlaylist;
- (void)_loadFriendStoriesBasedOnPlaylist;
- (void)_loadStoriesWithCurrentStory:(id)arg1;
- (void)_loadStoriesIfNecessaryWhenStartToPlayStory:(id)arg1;
- (void)_loadStoriesIfNecessaryWhenStartToViewStory:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)removeMediaForItem:(id)arg1;
- (void)prepareMediaForItem:(id)arg1 waitForDownloading:(_Bool)arg2 startWaitingForDownloadCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pagesPropertiesForDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)teardownDataModelForItem:(id)arg1;
- (id)_storyForItem:(id)arg1;
- (id)_friendStoriesForUsername:(id)arg1;
- (id)dataModelForGroup:(id)arg1;
- (id)dataModelForItem:(id)arg1;
- (id)_friendStoriesDataSourceForUsername:(id)arg1;
- (void)loadMediaForPlaylistItemGroup:(id)arg1;
- (void)unresolvePlaylistItemGroup:(id)arg1;
- (void)resolvePlaylistItemGroup:(id)arg1;
- (_Bool)needToPrepareMediaBeforeDisplay;
- (id)_friendStoriesForDataModelUsername:(id)arg1;
- (id)_resolvePlaylistItemGroupDataModel:(id)arg1;
- (id)_playlistGroupContextForViewLocation:(long long)arg1;
- (id)playlistItemGroupForDataModel:(id)arg1;
- (_Bool)canResolvePlaylistItemGroupDataModel:(id)arg1;
- (id)mediaManager;
- (_Bool)_isFirstStoryMemberOfOurStory:(id)arg1;
- (long long)_currentViewLocationForUsername:(id)arg1;
- (_Bool)_shouldKeepFriendStories:(id)arg1 forViewingType:(long long)arg2;
- (_Bool)isLastFriendStoriesToDisplay:(id)arg1;
- (id)friendStoriesAtIndexInPlaylist:(unsigned long long)arg1;
- (id)_friendStoriesDataSourceForStory:(id)arg1;
- (unsigned long long)indexOfStoryRelativeToInitialStory:(id)arg1;
- (unsigned long long)indexOfFriendStoriesInPlaylist:(id)arg1;
- (unsigned long long)friendsPlayListCount;
- (id)friendStoryForUserName:(id)arg1 viewingType:(long long)arg2;
- (void)_updateConnectionsForPreviousFriendDataSource:(id)arg1 currentFriendDataSource:(id)arg2;
- (void)requestCallbackWhenViewModelConnectionIsStable:(CDUnknownBlockType)arg1;
- (id)storyBeingViewed;
- (void)removeSingleFriendStoriesDataSource:(id)arg1;
- (void)didUpdateFriendStoriesDataSource;
- (void)prepareToViewStory:(id)arg1;
- (unsigned long long)unviewedStoryCount;
- (_Bool)isLastStoryInFriendStories:(id)arg1;
- (void)skipStory:(id)arg1 synchronously:(_Bool)arg2;
- (void)skipStory:(id)arg1;
- (void)removeInjectedFriendStories:(id)arg1;
- (void)injectFriendStories:(id)arg1;
- (void)injectStory:(id)arg1 afterStory:(id)arg2;
- (void)didStartToPlayStory:(id)arg1;
- (id)viewModelForStory:(id)arg1;
- (id)firstStoryToDisplay;
- (id)_pageForStory:(id)arg1;
- (id)firstPlaylistItemIDToDisplay;
- (void)updatePageForID:(id)arg1;
- (void)updatePageForStory:(id)arg1;
- (void)_removeStoryLoadingLayerImageForFriendName:(id)arg1;
- (void)_updateLoadingLayerImageWithCurrentStory:(id)arg1 nextViewModel:(id)arg2 loadedStoryProperties:(id)arg3;
- (void)prepareToViewStory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareToViewStoryWhileOperaPresented:(id)arg1;
- (void)_removeLoadingLayerBackgroundImageForStory:(id)arg1 page:(id)arg2;
- (void)cleanupMediaForStory:(id)arg1 context:(id)arg2;
- (id)_friendStoriesDataSourceForFriendStories:(id)arg1 story:(id)arg2 showViewersTable:(_Bool)arg3;
- (id)_friendStoriesDataSourceForFriendName:(id)arg1;
- (void)_setFriendsPlayList:(id)arg1 currentFriendName:(id)arg2;
- (id)dataSourceForFriendStoriesAtIndex:(unsigned long long)arg1;
- (long long)_normalizeIndexInFriendNameList:(long long)arg1;
- (long long)_rightMostFriendStoriesToBuild;
- (long long)_leftMostFriendStoriesToBuild;
- (void)_updateSingleFriendStoriesDataSources;
- (void)_updateFriendsListWhenOperaPlaylistEnabled:(id)arg1;
- (void)updateFriendsList:(id)arg1;
- (id)_friendNameForStory:(id)arg1;
- (id)rootViewModel;
- (void)dealloc;
- (id)initWithViewingType:(long long)arg1 showViewersTable:(_Bool)arg2 storyPlayMode:(long long)arg3 firstStoryToDisplay:(id)arg4 userSession:(id)arg5 navigationDelegate:(id)arg6 viewLocation:(long long)arg7 friendStoriesSectionMap:(id)arg8 enableCriticalModeWhenLoading:(_Bool)arg9 contextSession:(id)arg10 resourceLoader:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

