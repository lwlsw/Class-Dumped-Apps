//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAppBlizzardRequest : SCAUserTrackedEvent
{
}

- (void)setSuccess:(_Bool)arg1;
- (void)setStatusCode:(long long)arg1;
- (void)setServerName:(id)arg1;
- (void)setSend_bytes:(long long)arg1;
- (void)setRequestId:(id)arg1;
- (void)setReceive_bytes:(long long)arg1;
- (void)setNumEventsOnDisk:(long long)arg1;
- (void)setNumEventsInRequest:(long long)arg1;
- (void)setMinLogQueueSeqId:(long long)arg1;
- (void)setMaxLogQueueSeqId:(long long)arg1;
- (void)setLatency_time_sec:(double)arg1;
- (void)setInBackground:(_Bool)arg1;
- (void)setBlizzardConfigVersion:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

