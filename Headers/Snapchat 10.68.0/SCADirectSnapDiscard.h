//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCADirectSnapDiscard : SCAUserTrackedEvent
{
}

- (void)prepareDictionary:(id)arg1;
- (void)setZslCapture:(_Bool)arg1;
- (void)setWithFrontFacing:(_Bool)arg1;
- (void)setWithCreativeTool:(_Bool)arg1;
- (void)setWithAdjustingFocus:(_Bool)arg1;
- (void)setWithAdjustingExposure:(_Bool)arg1;
- (void)setTakePictureMethod:(long long)arg1;
- (void)setSnapSource:(long long)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setShutterSpeed:(double)arg1;
- (void)setShutterDelayMs:(long long)arg1;
- (void)setRecorderInitDelayMs:(long long)arg1;
- (void)setPsnr:(double)arg1;
- (void)setPreviewStayDurationMs:(long long)arg1;
- (void)setNightModeState:(long long)arg1;
- (void)setMediaMetaData:(id)arg1;
- (void)setMaxProcessingDelayMs:(double)arg1;
- (void)setLowLightStatus:(long long)arg1;
- (void)setLightSensorValue:(double)arg1;
- (void)setISO:(long long)arg1;
- (void)setHandsFree:(_Bool)arg1;
- (void)setFrameDifference:(double)arg1;
- (void)setFlash:(_Bool)arg1;
- (void)setFilterLensId:(id)arg1;
- (void)setFaceFrontCameraCount:(long long)arg1;
- (void)setFaceBackCameraCount:(long long)arg1;
- (void)setDirectSnapDiscardMethod:(long long)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (void)setCaptureDelayMs:(long long)arg1;
- (void)setCameraSdk:(id)arg1;
- (void)setCameraApi:(long long)arg1;
- (void)setBrightness:(double)arg1;
- (void)setAperture:(double)arg1;
- (void)setAccelerationMotion:(double)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

