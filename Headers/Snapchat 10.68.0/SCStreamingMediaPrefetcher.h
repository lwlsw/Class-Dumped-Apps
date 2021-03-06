//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCQueuePerformer;
@protocol SCStreamingMediaFetching;

@interface SCStreamingMediaPrefetcher : NSObject
{
    SCQueuePerformer *_performer;
    NSMutableDictionary *_prefetchesByMediaKey;
    id <SCStreamingMediaFetching> _mediaFetcher;
    long long _prefetchType;
}

@property(readonly, nonatomic) long long prefetchType; // @synthesize prefetchType=_prefetchType;
@property(readonly, nonatomic) id <SCStreamingMediaFetching> mediaFetcher; // @synthesize mediaFetcher=_mediaFetcher;
- (void).cxx_destruct;
- (void)cancelPrefetchForMediaKey:(id)arg1;
- (void)prefetchMediaForRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithMediaFetcher:(id)arg1 prefetchType:(long long)arg2;

@end

