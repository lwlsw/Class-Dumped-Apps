//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface AMPLogQueueConfigAdapter : NSObject
{
    NSString *_version;
    unsigned long long _eventSaveBatchSize;
    unsigned long long _eventRemoveBatchSize;
    unsigned long long _eventMaxCount;
    unsigned long long _eventUploadMaxBatchSize;
    double _eventUploadPeriodSeconds;
    double _eventUploadTimeoutSeconds;
    unsigned long long _eventUploadThreshold;
    double _initialProcessingDelaySeconds;
    double _maxInMemoryBufferIntervalSeconds;
    double _burstDebounceIntervalSeconds;
    double _backoffUploadInBackgroundSeconds;
    double _backoffUploadOnErrorSeconds;
    double _backoffUploadOnUnreachableSeconds;
    double _backoffUploadOnWWANSeconds;
    double _backoffUploadOnPowerSaverSeconds;
    unsigned long long _flushOnBackgrounding;
    NSSet *_blacklistedEvents;
    unsigned long long _queuePriority;
}

@property(nonatomic) unsigned long long queuePriority; // @synthesize queuePriority=_queuePriority;
@property(retain, nonatomic) NSSet *blacklistedEvents; // @synthesize blacklistedEvents=_blacklistedEvents;
@property(nonatomic) unsigned long long flushOnBackgrounding; // @synthesize flushOnBackgrounding=_flushOnBackgrounding;
@property(nonatomic) double backoffUploadOnPowerSaverSeconds; // @synthesize backoffUploadOnPowerSaverSeconds=_backoffUploadOnPowerSaverSeconds;
@property(nonatomic) double backoffUploadOnWWANSeconds; // @synthesize backoffUploadOnWWANSeconds=_backoffUploadOnWWANSeconds;
@property(nonatomic) double backoffUploadOnUnreachableSeconds; // @synthesize backoffUploadOnUnreachableSeconds=_backoffUploadOnUnreachableSeconds;
@property(nonatomic) double backoffUploadOnErrorSeconds; // @synthesize backoffUploadOnErrorSeconds=_backoffUploadOnErrorSeconds;
@property(nonatomic) double backoffUploadInBackgroundSeconds; // @synthesize backoffUploadInBackgroundSeconds=_backoffUploadInBackgroundSeconds;
@property(nonatomic) double burstDebounceIntervalSeconds; // @synthesize burstDebounceIntervalSeconds=_burstDebounceIntervalSeconds;
@property(nonatomic) double maxInMemoryBufferIntervalSeconds; // @synthesize maxInMemoryBufferIntervalSeconds=_maxInMemoryBufferIntervalSeconds;
@property(nonatomic) double initialProcessingDelaySeconds; // @synthesize initialProcessingDelaySeconds=_initialProcessingDelaySeconds;
@property(nonatomic) unsigned long long eventUploadThreshold; // @synthesize eventUploadThreshold=_eventUploadThreshold;
@property(nonatomic) double eventUploadTimeoutSeconds; // @synthesize eventUploadTimeoutSeconds=_eventUploadTimeoutSeconds;
@property(nonatomic) double eventUploadPeriodSeconds; // @synthesize eventUploadPeriodSeconds=_eventUploadPeriodSeconds;
@property(nonatomic) unsigned long long eventUploadMaxBatchSize; // @synthesize eventUploadMaxBatchSize=_eventUploadMaxBatchSize;
@property(nonatomic) unsigned long long eventMaxCount; // @synthesize eventMaxCount=_eventMaxCount;
@property(nonatomic) unsigned long long eventRemoveBatchSize; // @synthesize eventRemoveBatchSize=_eventRemoveBatchSize;
@property(nonatomic) unsigned long long eventSaveBatchSize; // @synthesize eventSaveBatchSize=_eventSaveBatchSize;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)initWithNewConfig:(id)arg1 logQueueDefinition:(id)arg2;

@end

