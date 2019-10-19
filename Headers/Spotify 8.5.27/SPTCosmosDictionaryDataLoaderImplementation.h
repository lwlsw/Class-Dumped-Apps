//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCosmosDictionaryDataLoader-Protocol.h"

@class NSString;
@protocol SPTResolver;

@interface SPTCosmosDictionaryDataLoaderImplementation : NSObject <SPTCosmosDictionaryDataLoader>
{
    id <SPTResolver> _resolver;
}

@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (id)makeRequest:(id)arg1 replyOnMainThread:(_Bool)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (id)makeLifetimeRequestWithURL:(id)arg1 requestAction:(id)arg2 requestData:(id)arg3 replyOnMainThread:(_Bool)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (id)makeCancelableRequestWithURL:(id)arg1 requestAction:(id)arg2 requestData:(id)arg3 replyOnMainThread:(_Bool)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (void)makeRequestWithURL:(id)arg1 requestAction:(id)arg2 requestData:(id)arg3 replyOnMainThread:(_Bool)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (id)initWithResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
