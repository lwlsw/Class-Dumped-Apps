//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer;
@protocol SCRequestManager;

@interface SCStickerFilesDownloader : NSObject
{
    SCQueuePerformer *_performer;
    id <SCRequestManager> _requestManager;
}

@property(readonly, nonatomic) __weak id <SCRequestManager> requestManager; // @synthesize requestManager=_requestManager;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
- (void).cxx_destruct;
- (void)downloadFileFromEndpoint:(id)arg1 parameters:(id)arg2 requestKey:(id)arg3 type:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)downloadFileWithUrl:(id)arg1 type:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)downloadFileWithUrlString:(id)arg1 needsURLEncoding:(_Bool)arg2 type:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)downloadFileWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_createRequestForFileFromEndpoint:(id)arg1 parameters:(id)arg2 requestKey:(id)arg3 type:(unsigned long long)arg4;
- (id)createRequestForFileFromURL:(id)arg1 type:(unsigned long long)arg2 requestKey:(id)arg3;
- (id)createRequestForFileFromURLString:(id)arg1 needsURLEncoding:(_Bool)arg2 type:(unsigned long long)arg3 requestKey:(id)arg4;
- (id)createRequestForFileFromURLString:(id)arg1 needsURLEncoding:(_Bool)arg2 type:(unsigned long long)arg3;
- (id)initWithPerformer:(id)arg1 requestManager:(id)arg2;

@end
