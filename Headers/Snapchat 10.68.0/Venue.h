//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class LatLng, NSMutableArray, NSString;

@interface Venue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) LatLng *center; // @dynamic center;
@property(nonatomic) _Bool hasCenter; // @dynamic hasCenter;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long radius; // @dynamic radius;
@property(retain, nonatomic) NSMutableArray *taxonomiesArray; // @dynamic taxonomiesArray;
@property(readonly, nonatomic) unsigned long long taxonomiesArray_Count; // @dynamic taxonomiesArray_Count;
@property(retain, nonatomic) NSMutableArray *typesArray; // @dynamic typesArray;
@property(readonly, nonatomic) unsigned long long typesArray_Count; // @dynamic typesArray_Count;

@end

