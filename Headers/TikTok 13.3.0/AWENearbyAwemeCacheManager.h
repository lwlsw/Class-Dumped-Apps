//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class AWEStorage, NSString;

@interface AWENearbyAwemeCacheManager : NSObject <AWEUserMessage>
{
    AWEStorage *_cacheStorage;
}

+ (id)sharedManager;
@property(retain, nonatomic) AWEStorage *cacheStorage; // @synthesize cacheStorage=_cacheStorage;
- (void).cxx_destruct;
- (void)didFinishLogout;
- (id)p_cachedAwemesFromOrigianlCache:(id)arg1;
- (_Bool)enableNearbyFeedCache;
- (void)clearAwemeCache;
- (id)cacheKey;
- (void)setNearbyAwemeCache:(id)arg1 forCity:(id)arg2;
- (id)cachedEntriesForCity:(id)arg1;
- (id)cachedNearbyAwemesForCity:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

