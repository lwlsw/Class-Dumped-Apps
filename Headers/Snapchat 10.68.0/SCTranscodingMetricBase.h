//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCTranscodingMetricBase : NSObject
{
    NSString *_taskId;
    NSString *_captureSessionId;
    NSString *_inputMediaMetadata;
    NSString *_outputMediaMetadata;
    unsigned long long _mediaSource;
    unsigned long long _mediaDestination;
    long long _mediaQualityLevel;
    double _startTimeSecs;
    double _stopTimeSecs;
    long long _transcodingStatus;
    NSString *_errorMessage;
}

@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long transcodingStatus; // @synthesize transcodingStatus=_transcodingStatus;
@property(nonatomic) double stopTimeSecs; // @synthesize stopTimeSecs=_stopTimeSecs;
@property(nonatomic) double startTimeSecs; // @synthesize startTimeSecs=_startTimeSecs;
@property(nonatomic) long long mediaQualityLevel; // @synthesize mediaQualityLevel=_mediaQualityLevel;
@property(nonatomic) unsigned long long mediaDestination; // @synthesize mediaDestination=_mediaDestination;
@property(nonatomic) unsigned long long mediaSource; // @synthesize mediaSource=_mediaSource;
@property(readonly, nonatomic) NSString *outputMediaMetadata; // @synthesize outputMediaMetadata=_outputMediaMetadata;
@property(readonly, nonatomic) NSString *inputMediaMetadata; // @synthesize inputMediaMetadata=_inputMediaMetadata;
@property(copy, nonatomic) NSString *captureSessionId; // @synthesize captureSessionId=_captureSessionId;
@property(readonly, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (id)metricType;
- (id)initWithTaskId:(id)arg1;

@end

