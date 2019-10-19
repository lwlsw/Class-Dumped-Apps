//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastPlayerDelegate-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol SPTAbbaFeatureFlags, SPTAlertInterface, SPTCollectionLogger, SPTCollectionPlatform, SPTExplicitContentAccessManager, SPTLinkDispatcher, SPTOfflineManager, SPTPodcast, SPTPodcastDataLoader, SPTPodcastDataLoaderRequestToken, SPTPodcastEpisode, SPTPodcastEpisodeFactory, SPTPodcastEpisodePlayerContextParameters, SPTPodcastEpisodeViewModelDelegate, SPTPodcastFactory, SPTPodcastPlayer, SPTPodcastRequestFactory, SPTPodcastTestManager, SPTPodcastUIStringFormatter, SPTPodcastUITestManager, SPTShareEntityData, SPTShareEntityDataFactory;

@interface SPTPodcastEpisodeViewModel : NSObject <SPTPodcastPlayerDelegate>
{
    _Bool _sectionsHasChanges;
    _Bool _isPlaying;
    _Bool _fetchingPodcast;
    _Bool _reversePlaybackOrder;
    id <SPTPodcastEpisodeViewModelDelegate> _delegate;
    NSArray *_sections;
    NSURL *_URL;
    NSURL *_largePodcastImageURL;
    id <SPTPodcastEpisode> _episode;
    id <SPTPodcastRequestFactory> _podcastRequestFactory;
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTPodcastEpisodeFactory> _episodeFactory;
    id <SPTPodcastFactory> _podcastFactory;
    id <SPTPodcastUIStringFormatter> _stringFormatter;
    id <SPTPodcastPlayer> _player;
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTPodcast> _podcast;
    id <SPTOfflineManager> _offlineManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPodcastDataLoaderRequestToken> _episodeRequestToken;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTShareEntityDataFactory> _shareEntityDataFactory;
    id <SPTCollectionLogger> _collectionLogger;
    id <SPTPodcastTestManager> _testManager;
    id <SPTAlertInterface> _alertInterface;
    id <SPTPodcastEpisodePlayerContextParameters> _playerContextParameters;
    id <SPTPodcastUITestManager> _uiTestManager;
}

@property(retain, nonatomic) id <SPTPodcastUITestManager> uiTestManager; // @synthesize uiTestManager=_uiTestManager;
@property(retain, nonatomic) id <SPTPodcastEpisodePlayerContextParameters> playerContextParameters; // @synthesize playerContextParameters=_playerContextParameters;
@property(retain, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(retain, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) id <SPTShareEntityDataFactory> shareEntityDataFactory; // @synthesize shareEntityDataFactory=_shareEntityDataFactory;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTPodcastDataLoaderRequestToken> episodeRequestToken; // @synthesize episodeRequestToken=_episodeRequestToken;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(retain, nonatomic) id <SPTPodcast> podcast; // @synthesize podcast=_podcast;
@property(nonatomic) _Bool reversePlaybackOrder; // @synthesize reversePlaybackOrder=_reversePlaybackOrder;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) id <SPTPodcastPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTPodcastUIStringFormatter> stringFormatter; // @synthesize stringFormatter=_stringFormatter;
@property(retain, nonatomic) id <SPTPodcastFactory> podcastFactory; // @synthesize podcastFactory=_podcastFactory;
@property(retain, nonatomic) id <SPTPodcastEpisodeFactory> episodeFactory; // @synthesize episodeFactory=_episodeFactory;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTPodcastRequestFactory> podcastRequestFactory; // @synthesize podcastRequestFactory=_podcastRequestFactory;
@property(retain, nonatomic) id <SPTPodcastEpisode> episode; // @synthesize episode=_episode;
@property(nonatomic, getter=isFetchingPodcast) _Bool fetchingPodcast; // @synthesize fetchingPodcast=_fetchingPodcast;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) NSURL *largePodcastImageURL; // @synthesize largePodcastImageURL=_largePodcastImageURL;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) _Bool sectionsHasChanges; // @synthesize sectionsHasChanges=_sectionsHasChanges;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <SPTPodcastEpisodeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTShareEntityData> shareEntityData;
@property(readonly, nonatomic) double syncProgress;
@property(readonly, nonatomic) long long offlineSyncStatus;
- (void)resetOfflineAvailability;
- (void)toggleOfflineSync;
- (void)podcastPlayer:(id)arg1 didUpdateProgressForTrackURL:(id)arg2;
- (double)podcastPlayer:(id)arg1 updateProgressIntervalForTrackURL:(id)arg2;
- (void)podcastPlayerStateDidChange:(id)arg1;
- (void)podcastPlayer:(id)arg1 didChangePlayingTrackURL:(id)arg2;
- (void)navigateToPodcast;
- (void)playEpisodeAtPosition:(double)arg1;
- (void)updateIsPlayingTrackURL:(id)arg1;
- (void)pauseCurrentlyPlaying;
- (_Bool)resumePlayback;
- (void)startPlaybackAtPosition:(id)arg1;
- (void)playEpisode;
- (void)togglePlayback;
- (_Bool)isActive;
@property(readonly, nonatomic) _Bool isExplicit;
@property(readonly, nonatomic) _Bool isPlayed;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double listeningProgress;
@property(readonly, nonatomic) NSURL *podcastImageURL;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSString *completeMetadata;
@property(readonly, nonatomic) NSString *adaptiveMetadata;
@property(readonly, nonatomic) NSString *podcastPublisher;
@property(readonly, nonatomic) NSString *podcastTitle;
@property(readonly, nonatomic) NSURL *podcastURL;
@property(readonly, nonatomic) NSString *longDescription;
@property(readonly, nonatomic) NSString *title;
- (void)loadShowDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)unsubscribe;
- (void)load;
- (id)initWithEpisodeURL:(id)arg1 podcastRequestFactory:(id)arg2 dataLoader:(id)arg3 episodeFactory:(id)arg4 podcastFactory:(id)arg5 stringFormatter:(id)arg6 player:(id)arg7 explicitContentAccessManager:(id)arg8 offlineManager:(id)arg9 linkDispatcher:(id)arg10 collectionPlatform:(id)arg11 shareEntityDataFactory:(id)arg12 collectionLogger:(id)arg13 podcastTestManager:(id)arg14 alertInterface:(id)arg15 playerContextParameters:(id)arg16 uiTestManager:(id)arg17;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
