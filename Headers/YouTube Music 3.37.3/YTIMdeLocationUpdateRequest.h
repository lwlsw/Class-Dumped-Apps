//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIMdeLocationUpdateRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasLatitude; // @dynamic hasLatitude;
@property(nonatomic) _Bool hasLongitude; // @dynamic hasLongitude;
@property(nonatomic) _Bool hasOperation; // @dynamic hasOperation;
@property(nonatomic) _Bool hasPlaceId; // @dynamic hasPlaceId;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) int operation; // @dynamic operation;
@property(copy, nonatomic) NSString *placeId; // @dynamic placeId;

@end
