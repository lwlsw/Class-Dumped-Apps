//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

@interface SCAUserSearch : SCAUserNotTrackedEvent
{
}

- (void)setViewTimeSec:(double)arg1;
- (void)setUserSearchQuery:(id)arg1;
- (void)setUserSearchId:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setExitEvent:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

