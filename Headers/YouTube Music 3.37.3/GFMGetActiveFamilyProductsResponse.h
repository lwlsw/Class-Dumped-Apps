//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMApiResponseHeader, GPBEnumArray;

@interface GFMGetActiveFamilyProductsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *activeFamilyProductsArray; // @dynamic activeFamilyProductsArray;
@property(readonly, nonatomic) unsigned long long activeFamilyProductsArray_Count; // @dynamic activeFamilyProductsArray_Count;
@property(retain, nonatomic) GFMApiResponseHeader *apiHeader; // @dynamic apiHeader;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;

@end

