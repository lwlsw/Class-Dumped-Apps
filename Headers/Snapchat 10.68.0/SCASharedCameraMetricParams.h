//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAMapSerializable.h"

@interface SCASharedCameraMetricParams : SCAMapSerializable
{
}

- (void)setStartType:(id)arg1;
- (void)setStartSubType:(id)arg1;
- (void)setSplits:(id)arg1;
- (void)setSnapSource:(long long)arg1;
- (void)setPowerMode:(id)arg1;
- (void)setNightModeState:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setLowLightStatus:(long long)arg1;
- (void)setLightSensorValue:(double)arg1;
- (void)setFlash:(_Bool)arg1;
- (void)setFilterLensId:(id)arg1;
- (void)setCaptureSource:(long long)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (void)setCameraSdk:(id)arg1;
- (void)setCameraPosition:(id)arg1;
- (void)setCameraOpenSource:(id)arg1;
- (void)setCameraLevel:(id)arg1;
- (void)setCameraApi:(id)arg1;
- (void)setAnalyticsVersion:(id)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

