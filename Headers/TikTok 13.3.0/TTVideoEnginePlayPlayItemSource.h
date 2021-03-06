//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVideoEnginePlayVidSource.h"

@class TTVideoEnginePlayItem;

@interface TTVideoEnginePlayPlayItemSource : TTVideoEnginePlayVidSource
{
    TTVideoEnginePlayItem *_playItem;
}

@property(retain, nonatomic) TTVideoEnginePlayItem *playItem; // @synthesize playItem=_playItem;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)deepCopy;
- (_Bool)preloadDataIsExpire;
- (long long)retryStrategyForRetryCount:(long long)arg1;
- (_Bool)skipToNext;
- (id)allUrlsForResolution:(unsigned long long *)arg1;
- (id)urlForResolution:(unsigned long long)arg1;
- (_Bool)isMainUrl;
- (_Bool)supportDash;
- (_Bool)supportSSL;
- (id)currentUrl;
- (unsigned long long)autoResolution;
- (unsigned long long)currentResolution;
- (id)supportResolutions;

@end

