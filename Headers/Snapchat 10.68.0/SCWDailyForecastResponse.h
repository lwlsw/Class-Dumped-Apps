//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCMapsAddress, SCWTimeZone;

@interface SCWDailyForecastResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMapsAddress *address; // @dynamic address;
@property(retain, nonatomic) NSMutableArray *dailyForecastArray; // @dynamic dailyForecastArray;
@property(readonly, nonatomic) unsigned long long dailyForecastArray_Count; // @dynamic dailyForecastArray_Count;
@property(nonatomic) _Bool hasAddress; // @dynamic hasAddress;
@property(nonatomic) _Bool hasTimeZone; // @dynamic hasTimeZone;
@property(retain, nonatomic) SCWTimeZone *timeZone; // @dynamic timeZone;

@end

