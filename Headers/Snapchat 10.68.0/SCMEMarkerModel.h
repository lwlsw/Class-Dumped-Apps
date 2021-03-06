//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCMEMarkerModel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *creatorUserId; // @dynamic creatorUserId;
@property(retain, nonatomic) NSMutableArray *friendUserIdsArray; // @dynamic friendUserIdsArray;
@property(readonly, nonatomic) unsigned long long friendUserIdsArray_Count; // @dynamic friendUserIdsArray_Count;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) double lat; // @dynamic lat;
@property(nonatomic) double lng; // @dynamic lng;
@property(retain, nonatomic) NSMutableArray *localitiesArray; // @dynamic localitiesArray;
@property(readonly, nonatomic) unsigned long long localitiesArray_Count; // @dynamic localitiesArray_Count;
@property(nonatomic) double radiusMeters; // @dynamic radiusMeters;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;
@property(copy, nonatomic) NSString *venueName; // @dynamic venueName;

@end

