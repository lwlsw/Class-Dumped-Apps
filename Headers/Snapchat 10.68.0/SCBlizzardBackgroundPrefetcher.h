//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBackgroundPrefetchProtocol-Protocol.h"
#import "SCLoggerAmplitudePrefetchListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableDictionary, NSString, SCTimeProvider;
@protocol SCLoggerAmplitudeProtocol, SCPerforming;

@interface SCBlizzardBackgroundPrefetcher : NSObject <SCTraceEnabled, SCLoggerAmplitudePrefetchListener, SCBackgroundPrefetchProtocol>
{
    id <SCLoggerAmplitudeProtocol> _blizzardLogger;
    id <SCPerforming> _performer;
    CDUnknownBlockType _prefetchCompletionHandler;
    NSMutableDictionary *_uploadStatistics;
    SCTimeProvider *_timeProvider;
    _Bool _uploadedEvents;
}

- (void).cxx_destruct;
- (void)_logGrapheneMetrics;
- (void)_uploadFinishedWithNumUploadedEvents:(id)arg1 numUploadedAppOpenEvents:(id)arg2 logQueueName:(id)arg3 numQueuesRemaining:(unsigned long long)arg4;
- (void)blizzardLogger:(id)arg1 numUploadedEvents:(id)arg2 numUploadedAppOpenEvents:(id)arg3 logQueueName:(id)arg4 numQueuesRemaining:(unsigned long long)arg5;
- (unsigned long long)prefetchIntervalInSeconds;
- (id)name;
- (void)_handleBackgroundPrefetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)backgroundPrefetchMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithBlizzardLogger:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

