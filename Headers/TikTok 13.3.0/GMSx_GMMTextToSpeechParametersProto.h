//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSString;

@interface GMSx_GMMTextToSpeechParametersProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cacheExpirationInDays; // @dynamic cacheExpirationInDays;
@property(nonatomic) _Bool hasCacheExpirationInDays; // @dynamic hasCacheExpirationInDays;
@property(nonatomic) _Bool hasNetworkSynthesisEpoch; // @dynamic hasNetworkSynthesisEpoch;
@property(nonatomic) _Bool hasNetworkSynthesisURL; // @dynamic hasNetworkSynthesisURL;
@property(nonatomic) _Bool hasStepGuidanceEnabled; // @dynamic hasStepGuidanceEnabled;
@property(nonatomic) _Bool hasSynthesisMode; // @dynamic hasSynthesisMode;
@property(nonatomic) int networkSynthesisEpoch; // @dynamic networkSynthesisEpoch;
@property(copy, nonatomic) NSString *networkSynthesisURL; // @dynamic networkSynthesisURL;
@property(nonatomic) _Bool stepGuidanceEnabled; // @dynamic stepGuidanceEnabled;
@property(nonatomic) int synthesisMode; // @dynamic synthesisMode;

@end

