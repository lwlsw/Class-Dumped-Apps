//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRAccesspoints_Schedule, NSArray, NSString;

@interface GTLRAccesspoints_BlockingSchedule : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) GTLRAccesspoints_Schedule *schedule; // @dynamic schedule;
@property(retain, nonatomic) NSArray *stationSetIds; // @dynamic stationSetIds;

@end
