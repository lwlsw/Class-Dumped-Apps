//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSNumber;
@protocol OS_dispatch_queue;

@interface AimLowProfiler : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _aimlowMetricState;
    NSNumber *_lastWarmDuration;
    NSNumber *_aimLowMetricProbability;
    NSMutableArray *_networkMetrics;
    NSMutableDictionary *_dpTTRDict;
    NSMutableDictionary *_inFlightDPTTRSessions;
    NSNumber *_dpTTRSessionId;
    NSArray *_searchDurationHistory;
    NSMutableDictionary *_hostnameCache;
    NSDate *_lastHistogramLogEvent;
    NSMutableDictionary *_histogramBucketsByType;
    NSDate *_realTTRStartDate;
    NSNumber *_lastRealTTR;
}

+ (id)clearSearchDurations;
+ (void)addSearchDuration:(id)arg1;
+ (id)endRealTTR;
+ (void)cancelRealTTR;
+ (void)beginRealTTR;
+ (id)profiler;
@property(retain, nonatomic) NSNumber *lastRealTTR; // @synthesize lastRealTTR=_lastRealTTR;
@property(retain, nonatomic) NSDate *realTTRStartDate; // @synthesize realTTRStartDate=_realTTRStartDate;
@property(retain, nonatomic) NSMutableDictionary *histogramBucketsByType; // @synthesize histogramBucketsByType=_histogramBucketsByType;
@property(retain, nonatomic) NSDate *lastHistogramLogEvent; // @synthesize lastHistogramLogEvent=_lastHistogramLogEvent;
@property(retain, nonatomic) NSMutableDictionary *hostnameCache; // @synthesize hostnameCache=_hostnameCache;
@property(retain, nonatomic) NSArray *searchDurationHistory; // @synthesize searchDurationHistory=_searchDurationHistory;
@property(retain, nonatomic) NSNumber *dpTTRSessionId; // @synthesize dpTTRSessionId=_dpTTRSessionId;
@property(retain) NSMutableDictionary *inFlightDPTTRSessions; // @synthesize inFlightDPTTRSessions=_inFlightDPTTRSessions;
@property(retain) NSMutableDictionary *dpTTRDict; // @synthesize dpTTRDict=_dpTTRDict;
@property(retain) NSMutableArray *networkMetrics; // @synthesize networkMetrics=_networkMetrics;
@property(retain, nonatomic) NSNumber *aimLowMetricProbability; // @synthesize aimLowMetricProbability=_aimLowMetricProbability;
@property(nonatomic) _Bool aimlowMetricState; // @synthesize aimlowMetricState=_aimlowMetricState;
@property(retain, nonatomic) NSNumber *lastWarmDuration; // @synthesize lastWarmDuration=_lastWarmDuration;
- (void).cxx_destruct;
- (id)networkRequestTypeAndSample:(id)arg1 payload:(id)arg2;
- (_Bool)shouldUseSample:(id)arg1 sampleRate:(id)arg2;
- (void)handleNetworkReachabilityChange:(id)arg1;
- (id)getIpFromHostname:(id)arg1;
- (void)logHistograms;
- (void)addSessionTaskMetricsToHistograms:(id)arg1;
- (void)afnetworkingTaskDidComplete:(id)arg1;
- (void)logNetworkingMetrics:(id)arg1;
- (void)failDPTTRSession:(id)arg1;
- (void)cancelDPTTRSession:(id)arg1;
- (void)reportDPViewPaintedForSession:(id)arg1;
- (void)reportDPViewPaintFailed;
- (void)reportDPViewPainted;
- (void)reportPaintableDPViewForSession:(id)arg1;
- (void)reportPaintableDPView;
- (void)prepareExclusiveDPTTRMeasureForSessionType:(id)arg1 navigationLevel:(id)arg2 withMinimumViewCount:(long long)arg3;
- (id)prepareConcurrentTTRSessionForType:(id)arg1 navigationLevel:(id)arg2 withMinimumViewCount:(long long)arg3;
- (void)flushMetrics;
- (void)populateDict:(id)arg1 fromData:(id)arg2 withKey:(id)arg3;
- (id)metricsDict;
- (void)addDPTTR:(id)arg1 forSessionType:(id)arg2;
- (void)resetData;
- (id)createTransactionTimeHistogram;
- (id)createTimeToFirstByteWrittenHistogram;
- (id)createTimeToFirstByteReadHistogram;
- (id)createSslHandshakeTimeHistogram;
- (id)createSizeHistogram;
- (id)createDurationHistogram;
- (id)createDnsTimeHistogram;
- (id)createConnectTimeHistogram;
- (void)initBuckets;
- (id)init;

@end

