//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet, NSOperationQueue, SDWebImageManager;
@protocol OS_dispatch_queue, SDWebImagePrefetcherDelegate;

@interface SDWebImagePrefetcher : NSObject
{
    SDWebImageManager *_manager;
    unsigned long long _options;
    struct NSDictionary *_context;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <SDWebImagePrefetcherDelegate> _delegate;
    NSMutableSet *_runningTokens;
    NSOperationQueue *_prefetchQueue;
}

+ (id)sharedImagePrefetcher;
@property(retain, nonatomic) NSOperationQueue *prefetchQueue; // @synthesize prefetchQueue=_prefetchQueue;
@property(retain) NSMutableSet *runningTokens; // @synthesize runningTokens=_runningTokens;
@property(nonatomic) __weak id <SDWebImagePrefetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) SDWebImageManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (unsigned long long)countOfRunningTokens;
- (void)removeRunningToken:(id)arg1;
- (void)addRunningToken:(id)arg1;
- (unsigned long long)tokenFinishedCount;
- (unsigned long long)tokenSkippedCount;
- (unsigned long long)tokenTotalCount;
- (void)callCompletionBlockForToken:(id)arg1;
- (void)callProgressBlockForToken:(id)arg1 imageURL:(id)arg2;
- (void)cancelPrefetching;
- (void)startPrefetchWithToken:(id)arg1;
- (id)prefetchURLs:(id)arg1 progress:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;
- (id)prefetchURLs:(id)arg1;
@property(nonatomic) unsigned long long maxConcurrentPrefetchCount;
- (id)initWithImageManager:(id)arg1;
- (id)init;

@end
