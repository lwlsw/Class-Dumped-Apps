//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNFileManagerCacheManager-Protocol.h"

@class SCCache;

@interface SCNativeCacheManagerWrapper : NSObject <SCNFileManagerCacheManager>
{
    SCCache *_cache;
    long long _scope;
}

- (void).cxx_destruct;
- (long long)move:(id)arg1 key:(id)arg2;
- (long long)getSize:(id)arg1;
- (long long)append:(id)arg1 key:(id)arg2;
- (long long)_cacheSaveResultForKey:(id)arg1 object:(id)arg2;
- (id)getFilePath:(id)arg1;
- (id)getMetrics;
- (long long)getScope;
- (id)getMetadataOfKeysOnDisk;
- (_Bool)contains:(id)arg1;
- (void)removeAllContents;
- (id)remove:(id)arg1;
- (id)get:(id)arg1;
- (long long)set:(id)arg1 key:(id)arg2;
- (id)initWithCache:(id)arg1 scope:(long long)arg2;

@end

