//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PRMCollectible.h"

#import "PRMDeferredCollectible-Protocol.h"
#import "PRMProvidableCollectible-Protocol.h"

@class NSArray, NSString;

@interface PRMFrameRateCollectible : PRMCollectible <PRMDeferredCollectible, PRMProvidableCollectible>
{
    unsigned long long _framesLength;
    double *_frames;
    double _latestTimestamp;
    double _latestMeasuredTimestamp;
    double _qTimelapse;
    double _averageFPI;
    double _minimumFPI;
    unsigned long long _jankyFrameCount;
    unsigned long long _frameCount;
    double _maxFrameRenderTimeSecs;
    double _minFrameRenderTimeSecs;
    double _meanFrameRenderTimeSecs;
    double _stdFrameRenderTimeSecs;
    double _jankDurationSecs;
    NSArray *_frameCountBuckets;
}

+ (unsigned long long)collectibleType;
@property(readonly, nonatomic) NSArray *frameCountBuckets; // @synthesize frameCountBuckets=_frameCountBuckets;
@property(readonly, nonatomic) double jankDurationSecs; // @synthesize jankDurationSecs=_jankDurationSecs;
@property(readonly, nonatomic) double stdFrameRenderTimeSecs; // @synthesize stdFrameRenderTimeSecs=_stdFrameRenderTimeSecs;
@property(readonly, nonatomic) double meanFrameRenderTimeSecs; // @synthesize meanFrameRenderTimeSecs=_meanFrameRenderTimeSecs;
@property(readonly, nonatomic) double minFrameRenderTimeSecs; // @synthesize minFrameRenderTimeSecs=_minFrameRenderTimeSecs;
@property(readonly, nonatomic) double maxFrameRenderTimeSecs; // @synthesize maxFrameRenderTimeSecs=_maxFrameRenderTimeSecs;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) unsigned long long jankyFrameCount; // @synthesize jankyFrameCount=_jankyFrameCount;
@property(readonly, nonatomic) double minimumFPI; // @synthesize minimumFPI=_minimumFPI;
@property(readonly, nonatomic) double averageFPI; // @synthesize averageFPI=_averageFPI;
- (void).cxx_destruct;
- (id)flattenProperties;
- (void)stopCollecting;
- (void)startCollecting;
- (void)dealloc;
- (id)initWithLimits:(id)arg1;
- (id)init;
- (void)tick:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
