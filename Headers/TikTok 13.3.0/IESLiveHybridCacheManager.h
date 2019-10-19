//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HTSKVStore;

@interface IESLiveHybridCacheManager : NSObject
{
    id <HTSKVStore> _kvStoreManager;
}

@property(retain, nonatomic) id <HTSKVStore> kvStoreManager; // @synthesize kvStoreManager=_kvStoreManager;
- (void).cxx_destruct;
- (_Bool)isExpiredFor:(id)arg1;
- (void)cleanExpiredDataIfNeed;
- (id)modelForKey:(id)arg1;
- (void)addCacheWithModel:(id)arg1 forKey:(id)arg2;
- (id)init;

@end
