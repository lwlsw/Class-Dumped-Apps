//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTVideoEnginePlaySource-Protocol.h"

@class NSString, TTVideoEngineInfoModel;
@protocol TTVideoEngineNetClient;

@interface TTVideoEnginePlayBaseSource : NSObject <TTVideoEnginePlaySource>
{
    id <TTVideoEngineNetClient> _netClient;
    TTVideoEngineInfoModel *_fetchData;
}

@property(retain, nonatomic) TTVideoEngineInfoModel *fetchData; // @synthesize fetchData=_fetchData;
@property(retain, nonatomic) id <TTVideoEngineNetClient> netClient; // @synthesize netClient=_netClient;
- (void).cxx_destruct;
- (id)deepCopy;
- (_Bool)isEqual:(id)arg1;
- (void)cancelFetch;
- (void)fetchUrlWithApiString:(CDUnknownBlockType)arg1 auth:(CDUnknownBlockType)arg2 params:(CDUnknownBlockType)arg3 apiVersion:(CDUnknownBlockType)arg4 result:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) _Bool canFetch;
- (id)mediaFileHashOfType:(unsigned long long)arg1;
- (long long)bitrateForDashSourceOfType:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool supportDash;
@property(readonly, nonatomic) _Bool supportSSL;
- (_Bool)validate;
- (_Bool)preloadDataIsExpire;
- (id)videoId;
- (id)decryptionKey;
- (id)mediaFileKey;
- (_Bool)skipToNext;
- (id)allUrlsForResolution:(unsigned long long *)arg1;
- (id)urlForResolution:(unsigned long long)arg1;
- (long long)videoSizeOfType:(unsigned long long)arg1;
- (long long)retryStrategyForRetryCount:(long long)arg1;
@property(readonly, nonatomic) _Bool isLocalFile;
@property(readonly, nonatomic) _Bool isLivePlayback;
- (id)preloadItem;
@property(readonly, nonatomic) _Bool isSingleUrl;
@property(readonly, nonatomic) _Bool isMainUrl;
@property(readonly, copy, nonatomic) NSString *currentUrl;
- (unsigned long long)autoResolution;
- (unsigned long long)currentResolution;
- (id)supportResolutions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

