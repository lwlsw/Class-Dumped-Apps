//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, SCCognacTargetingTrafficControl;

@interface SCCognacTargetingGeoControl : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *countries; // @dynamic countries;
@property(readonly, nonatomic) unsigned long long countries_Count; // @dynamic countries_Count;
@property(nonatomic) _Bool hasRestOfWorld; // @dynamic hasRestOfWorld;
@property(retain, nonatomic) SCCognacTargetingTrafficControl *restOfWorld; // @dynamic restOfWorld;

@end

