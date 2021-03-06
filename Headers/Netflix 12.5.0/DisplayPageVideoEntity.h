//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COEntity.h"

#import "VideoMetadataEntityProtocol-Protocol.h"

@class NFUIBookmark, NFUIContentAdvisoryEntity, NSArray, NSDictionary, NSNumber, NSString;

@interface DisplayPageVideoEntity : COEntity <VideoMetadataEntityProtocol>
{
    _Bool _isAvailableForDownload;
    _Bool _isNewForPVR;
    _Bool _hasNeverBeenWatched;
    _Bool _currentHasNeverBeenWatched;
    _Bool _hasHiddenEpisodeNumbers;
    NSString *_title;
    NSString *_synopsis;
    NSString *_currentSynopsis;
    NSString *_titleTreatmentUrl;
    NSString *_heroStoryArtUrl;
    NSArray *_storyArt;
    NSArray *_verticalBackgroundArt;
    NSDictionary *_imageSprite;
    NSDictionary *_queue;
    NSString *_detailsTitle;
    NSString *_detailsSynopsis;
    NSString *_detailsTitleTreatmentUrl;
    NSString *_detailsStoryArt;
    NSNumber *_showId;
    NSNumber *_thumbRating;
    NSNumber *_matchPercentage;
    NSNumber *_releaseYear;
    NSString *_maturityRating;
    NSString *_copyrightInfo;
    NSArray *_seasonNumbers;
    NSString *_seasonsLabel;
    NFUIBookmark *_bookmark;
    NSNumber *_runtime;
    NSDictionary *_availability;
    NSNumber *_similarsTrackId;
    NSString *_similarsRequestId;
    NSNumber *_seasonNumber;
    NSNumber *_seasonCount;
    NSNumber *_episodeNumber;
    NSString *_sequenceLabel;
    NSString *_horizontalDisplayArt;
    NSString *_verticalDisplayArt;
    NSArray *_interestingMoments;
    NSArray *_actors;
    NSArray *_genres;
    NSArray *_creators;
    NSArray *_directors;
    NSString *_supplementalMessage;
    NSNumber *_currentEntityId;
    NSString *_currentType;
    NSArray *_currentInterestingMoments;
    NSString *_currentTitle;
    NFUIBookmark *_currentBookmark;
    NSNumber *_isAvailableForED;
    NSNumber *_isOriginal;
    NSNumber *_isTrailerTab;
    NSNumber *_recapCount;
    NSDictionary *_supplementalVideos;
    NSDictionary *_videoBadges;
    NSString *_episodeNewBadgeKey;
    NSDictionary *_displayPageColors;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathsForUpdateMapWithNumberOfSims:(unsigned long long)arg1;
+ (id)createSimsKeyPath:(unsigned long long)arg1;
+ (id)falcorKeyPathMap;
@property(readonly, copy, nonatomic) NSDictionary *displayPageColors; // @synthesize displayPageColors=_displayPageColors;
@property(readonly, copy, nonatomic) NSString *episodeNewBadgeKey; // @synthesize episodeNewBadgeKey=_episodeNewBadgeKey;
@property(readonly, copy, nonatomic) NSDictionary *videoBadges; // @synthesize videoBadges=_videoBadges;
@property(readonly, copy, nonatomic) NSDictionary *supplementalVideos; // @synthesize supplementalVideos=_supplementalVideos;
@property(readonly, copy, nonatomic) NSNumber *recapCount; // @synthesize recapCount=_recapCount;
@property(readonly, copy, nonatomic) NSNumber *isTrailerTab; // @synthesize isTrailerTab=_isTrailerTab;
@property(nonatomic) _Bool hasHiddenEpisodeNumbers; // @synthesize hasHiddenEpisodeNumbers=_hasHiddenEpisodeNumbers;
@property(readonly, copy, nonatomic) NSNumber *isOriginal; // @synthesize isOriginal=_isOriginal;
@property(readonly, copy, nonatomic) NSNumber *isAvailableForED; // @synthesize isAvailableForED=_isAvailableForED;
@property(nonatomic) _Bool currentHasNeverBeenWatched; // @synthesize currentHasNeverBeenWatched=_currentHasNeverBeenWatched;
@property(copy, nonatomic) NFUIBookmark *currentBookmark; // @synthesize currentBookmark=_currentBookmark;
@property(readonly, copy, nonatomic) NSString *currentTitle; // @synthesize currentTitle=_currentTitle;
@property(readonly, copy, nonatomic) NSArray *currentInterestingMoments; // @synthesize currentInterestingMoments=_currentInterestingMoments;
@property(readonly, copy, nonatomic) NSString *currentType; // @synthesize currentType=_currentType;
@property(readonly, copy, nonatomic) NSNumber *currentEntityId; // @synthesize currentEntityId=_currentEntityId;
@property(readonly, copy, nonatomic) NSString *supplementalMessage; // @synthesize supplementalMessage=_supplementalMessage;
@property(readonly, copy, nonatomic) NSArray *directors; // @synthesize directors=_directors;
@property(readonly, copy, nonatomic) NSArray *creators; // @synthesize creators=_creators;
@property(readonly, copy, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(readonly, copy, nonatomic) NSArray *actors; // @synthesize actors=_actors;
@property(readonly, copy, nonatomic) NSArray *interestingMoments; // @synthesize interestingMoments=_interestingMoments;
@property(readonly, copy, nonatomic) NSString *verticalDisplayArt; // @synthesize verticalDisplayArt=_verticalDisplayArt;
@property(readonly, copy, nonatomic) NSString *horizontalDisplayArt; // @synthesize horizontalDisplayArt=_horizontalDisplayArt;
@property(readonly, copy, nonatomic) NSString *sequenceLabel; // @synthesize sequenceLabel=_sequenceLabel;
@property(readonly, copy, nonatomic) NSNumber *episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(readonly, copy, nonatomic) NSNumber *seasonCount; // @synthesize seasonCount=_seasonCount;
@property(readonly, copy, nonatomic) NSNumber *seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(readonly, copy, nonatomic) NSString *similarsRequestId; // @synthesize similarsRequestId=_similarsRequestId;
@property(readonly, copy, nonatomic) NSNumber *similarsTrackId; // @synthesize similarsTrackId=_similarsTrackId;
@property(readonly, copy, nonatomic) NSDictionary *availability; // @synthesize availability=_availability;
@property(readonly, copy, nonatomic) NSNumber *runtime; // @synthesize runtime=_runtime;
@property(nonatomic) _Bool hasNeverBeenWatched; // @synthesize hasNeverBeenWatched=_hasNeverBeenWatched;
@property(copy, nonatomic) NFUIBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, copy, nonatomic) NSString *seasonsLabel; // @synthesize seasonsLabel=_seasonsLabel;
@property(readonly, copy, nonatomic) NSArray *seasonNumbers; // @synthesize seasonNumbers=_seasonNumbers;
@property(readonly, copy, nonatomic) NSString *copyrightInfo; // @synthesize copyrightInfo=_copyrightInfo;
@property(readonly, copy, nonatomic) NSString *maturityRating; // @synthesize maturityRating=_maturityRating;
@property(readonly, copy, nonatomic) NSNumber *releaseYear; // @synthesize releaseYear=_releaseYear;
@property(readonly, nonatomic) _Bool isNewForPVR; // @synthesize isNewForPVR=_isNewForPVR;
@property(readonly, copy, nonatomic) NSNumber *matchPercentage; // @synthesize matchPercentage=_matchPercentage;
@property(copy, nonatomic) NSNumber *thumbRating; // @synthesize thumbRating=_thumbRating;
@property(readonly, copy, nonatomic) NSNumber *showId; // @synthesize showId=_showId;
@property(readonly, copy, nonatomic) NSString *detailsStoryArt; // @synthesize detailsStoryArt=_detailsStoryArt;
@property(readonly, copy, nonatomic) NSString *detailsTitleTreatmentUrl; // @synthesize detailsTitleTreatmentUrl=_detailsTitleTreatmentUrl;
@property(readonly, copy, nonatomic) NSString *detailsSynopsis; // @synthesize detailsSynopsis=_detailsSynopsis;
@property(readonly, copy, nonatomic) NSString *detailsTitle; // @synthesize detailsTitle=_detailsTitle;
@property(readonly, copy, nonatomic) NSDictionary *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSDictionary *imageSprite; // @synthesize imageSprite=_imageSprite;
@property(readonly, copy, nonatomic) NSArray *verticalBackgroundArt; // @synthesize verticalBackgroundArt=_verticalBackgroundArt;
@property(readonly, copy, nonatomic) NSArray *storyArt; // @synthesize storyArt=_storyArt;
@property(readonly, copy, nonatomic) NSString *heroStoryArtUrl; // @synthesize heroStoryArtUrl=_heroStoryArtUrl;
- (void).cxx_destruct;
- (_Bool)hasDolbyVision;
- (_Bool)hasAssitiveAudio;
- (id)dateString;
- (id)availableUntilString;
- (id)directedString;
- (id)createdString;
- (id)castString;
- (id)genresString;
- (void)refreshBookmarks;
- (void)setValuesForKeysWithDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool isAvailableForDownload; // @synthesize isAvailableForDownload=_isAvailableForDownload;
@property(readonly, copy, nonatomic) NSString *currentSynopsis; // @synthesize currentSynopsis=_currentSynopsis;
@property(readonly, copy, nonatomic) NSString *titleTreatmentUrl; // @synthesize titleTreatmentUrl=_titleTreatmentUrl;
@property(readonly, copy, nonatomic) NSString *synopsis; // @synthesize synopsis=_synopsis;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

// Remaining properties
@property(readonly, copy, nonatomic) NSNumber *availabilityEndDate;
@property(retain, nonatomic) NFUIContentAdvisoryEntity *contentAdvisoryEntity;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityType;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

