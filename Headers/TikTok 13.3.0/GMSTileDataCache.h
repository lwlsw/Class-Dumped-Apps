//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSTileDataCache-Protocol.h"

@class GMSCacheStorageDescriptor, GMSReservations, NSManagedObjectContext, NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol GMSTimingClock, OS_dispatch_group, OS_dispatch_queue;

@interface GMSTileDataCache : NSObject <GMSTileDataCache>
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSMutableDictionary *_tiles;
    NSMutableOrderedSet *_lruSet;
    unsigned long long _cacheSize;
    long long _expirationPeriodMS;
    long long _nextValidationTimeMS;
    GMSReservations *_reservations;
    NSMutableDictionary *_propertyObjects;
    NSMutableDictionary *_properties;
    int _deleteTileDataCachePendings;
    _Bool _tuning;
    int _tileType;
    GMSCacheStorageDescriptor *_cacheStorageDescriptor;
    NSManagedObjectContext *_managedObjectContext;
    unsigned long long _maxCount;
    unsigned long long _maxSize;
    id <GMSTimingClock> _timingClock;
    unsigned long long _hitCounter;
    unsigned long long _missCounter;
    unsigned long long _ejectCounter;
}

@property(nonatomic, getter=isTuning) _Bool tuning; // @synthesize tuning=_tuning;
@property(readonly, nonatomic) unsigned long long ejectCounter; // @synthesize ejectCounter=_ejectCounter;
@property(readonly, nonatomic) unsigned long long missCounter; // @synthesize missCounter=_missCounter;
@property(readonly, nonatomic) unsigned long long hitCounter; // @synthesize hitCounter=_hitCounter;
@property(readonly, nonatomic) id <GMSTimingClock> timingClock; // @synthesize timingClock=_timingClock;
@property(readonly, nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
@property(readonly, nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(readonly, nonatomic) int tileType; // @synthesize tileType=_tileType;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) GMSCacheStorageDescriptor *cacheStorageDescriptor; // @synthesize cacheStorageDescriptor=_cacheStorageDescriptor;
- (void).cxx_destruct;
- (void)blockWorkQueueWhile:(CDUnknownBlockType)arg1;
- (id)properties;
- (unsigned long long)cacheSize;
- (float)hitRatio;
- (unsigned long long)count;
- (id)lruSet;
- (id)tiles;
- (void)resetCounters;
- (_Bool)waitForQueueWithTimeout:(double)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)fetchedTilesWithPredicate:(id)arg1 sortDescriptor:(id)arg2;
- (void)deleteTileDataCachesExceptTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteTilesInArray:(id)arg1;
- (void)deleteTileDataCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteTile:(id)arg1 coords:(id)arg2;
- (void)deleteTileCoordsSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteTileWithCoords:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeExpiredTilesIfNecessary;
- (void)removeExpiredTilesImmediate;
- (_Bool)pruneCache;
- (void)cancelReservationForClient:(id)arg1;
- (void)reserveTileCoordsSet:(id)arg1 forClient:(id)arg2;
- (_Bool)areTileCoordsReserved:(id)arg1;
- (_Bool)shouldTilesExpire;
- (void)setExpirationPeriodMS:(long long)arg1;
- (void)storeCacheableTileDatas:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)insertNewTileForTileCoords:(id)arg1;
- (void)storeTileCoords:(id)arg1 validationTime:(long long)arg2 perTileEpoch:(int)arg3 serverPerTileEpoch:(int)arg4 dataVersion:(int)arg5 versionID:(id)arg6 data:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)touchTileForTileCoords:(id)arg1;
- (void)updateTileCoords:(id)arg1 validationTime:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadTileForTileCoords:(id)arg1 dataVersion:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)checkTileCoordsSet:(id)arg1 predicate:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)touchCachedTile:(id)arg1;
- (void)loadCacheProperties;
- (void)runWhenStarted:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
- (void)dealloc;
- (id)initWithCacheStorageDescriptor:(id)arg1 tileType:(int)arg2 maxCount:(unsigned long long)arg3 maxSize:(unsigned long long)arg4 timingClock:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
