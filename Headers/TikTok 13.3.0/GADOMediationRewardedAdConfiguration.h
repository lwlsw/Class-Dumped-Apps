//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADOMediationAdConfiguration.h"

@class GADMRewardBasedVideoAdNetworkConnector;

@interface GADOMediationRewardedAdConfiguration : GADOMediationAdConfiguration
{
    GADMRewardBasedVideoAdNetworkConnector *_rewardedConnector;
    _Bool _isLocationShared;
}

- (void).cxx_destruct;
- (_Bool)hasUserLocation;
- (id)childDirectedTreatment;
- (id)extras;
- (id)bidResponse;
- (id)initWithConnector:(id)arg1 credentials:(id)arg2;
- (id)init;
- (id)initWithRewardedConnector:(id)arg1 credentials:(id)arg2;

@end

