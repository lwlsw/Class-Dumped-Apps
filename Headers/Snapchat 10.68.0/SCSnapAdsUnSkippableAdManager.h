//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface SCSnapAdsUnSkippableAdManager : NSObject
{
    NSMutableSet *_skippableAdRequestIds;
    NSMutableDictionary *_adRequestClientIdToMediaInfoMap;
    NSMutableSet *_adRequestClientIdsForAdsStartedAsUnSkippable;
}

- (void).cxx_destruct;
- (id)_updateImageKey:(id)arg1 withMediaStartTime:(double)arg2;
- (double)_accumulatedLongformTimeViewedForAdRequestClientId:(id)arg1;
- (void)didViewAdRequestClientId:(id)arg1 itemId:(id)arg2 longformTimeViewedInSec:(double)arg3 playlistItemController:(id)arg4;
- (void)didFullyViewedForAdRequestClientId:(id)arg1 itemId:(id)arg2 playlistItemController:(id)arg3;
- (void)didCloseViewForAdRequestClientId:(id)arg1 itemId:(id)arg2 context:(id)arg3 params:(id)arg4 lastInteraction:(id)arg5 playlistItemController:(id)arg6 experimentManager:(id)arg7;
- (id)extraPagePropertiesForAdRequestClientId:(id)arg1 experimentManager:(id)arg2 isCognac:(_Bool)arg3 skippableType:(long long)arg4 unskippableDurationMs:(double)arg5;
- (void)didStartViewForAdRequestClientId:(id)arg1 isUnSkippableAd:(_Bool)arg2;
- (id)imageKeyForAd:(id)arg1;
- (void)updateMediaStartTimeSec:(double)arg1 videoUrl:(id)arg2 imageKey:(id)arg3 isStreamingMedia:(_Bool)arg4 forAd:(id)arg5;
- (double)mediaStartTimeForAd:(id)arg1;
- (void)markFullViewForAd:(id)arg1;
- (_Bool)isUnSkippableAdWhenStartViewing:(id)arg1;
- (_Bool)isUnSkippableAd:(id)arg1;
- (void)trackUnSkippableAdIfNecessary:(id)arg1;
- (void)clear;
- (id)init;

@end

