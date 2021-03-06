//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AWEStudioMeasureManager : NSObject
{
    _Bool _cameraFirstLaunched;
    _Bool _enterRecordPageFromPlusButton;
    _Bool _viewDidLoaded;
    double _startRecordTime;
    double _pauseRecordTime;
    double _viewDidLoadedToFirstFrameAppearDuration;
    double _clickPlusTimeStamp;
    double _viewDidLoadTimeStamp;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

+ (id)sharedMeasureManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) _Bool viewDidLoaded; // @synthesize viewDidLoaded=_viewDidLoaded;
@property(nonatomic) double viewDidLoadTimeStamp; // @synthesize viewDidLoadTimeStamp=_viewDidLoadTimeStamp;
@property(nonatomic) _Bool enterRecordPageFromPlusButton; // @synthesize enterRecordPageFromPlusButton=_enterRecordPageFromPlusButton;
@property(nonatomic) double clickPlusTimeStamp; // @synthesize clickPlusTimeStamp=_clickPlusTimeStamp;
@property(nonatomic) _Bool cameraFirstLaunched; // @synthesize cameraFirstLaunched=_cameraFirstLaunched;
@property(nonatomic) double viewDidLoadedToFirstFrameAppearDuration; // @synthesize viewDidLoadedToFirstFrameAppearDuration=_viewDidLoadedToFirstFrameAppearDuration;
@property(nonatomic) double pauseRecordTime; // @synthesize pauseRecordTime=_pauseRecordTime;
@property(nonatomic) double startRecordTime; // @synthesize startRecordTime=_startRecordTime;
- (void).cxx_destruct;
- (double)p_currentTimeInterval;
- (void)asyncMonitorTrackData:(id)arg1 logTypeStr:(id)arg2;
- (void)asyncMonitorTrackService:(id)arg1 value:(float)arg2 extra:(id)arg3;
- (void)asyncMonitorTrackService:(id)arg1 status:(long long)arg2 extra:(id)arg3;
- (void)asyncOperationBlock:(CDUnknownBlockType)arg1;
- (void)cancelOnceTrack;
- (void)cancelTrackViewDidLoad;
- (void)trackViewDidLoad;
- (void)trackClickPlusToRecordPageFirstFrameAppearWithReferString:(id)arg1;
- (void)cancelTrackClickPlusTime;
- (void)trackClickPlusTime;
- (id)init;

@end

