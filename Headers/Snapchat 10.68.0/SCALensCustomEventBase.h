//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCALensCustomEventBase : SCAUserTrackedEvent
{
}

- (void)prepareDictionary:(id)arg1;
- (void)setSessionTotalCount:(long long)arg1;
- (void)setLensSessionId:(id)arg1;
- (void)setLensMetadata:(id)arg1;
- (void)setInteractionValue:(id)arg1;
- (void)setInteractionName:(id)arg1;
- (void)setCamera:(long long)arg1;
- (void)setActionSequenceCount:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

