//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCCORECompositeStoryId;

@interface BibBoostRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool boostInProd; // @dynamic boostInProd;
@property(retain, nonatomic) NSMutableArray *boostParametersArray; // @dynamic boostParametersArray;
@property(readonly, nonatomic) unsigned long long boostParametersArray_Count; // @dynamic boostParametersArray_Count;
@property(copy, nonatomic) NSString *comment; // @dynamic comment;
@property(retain, nonatomic) SCCORECompositeStoryId *compositeStoryId; // @dynamic compositeStoryId;
@property(nonatomic) _Bool hasCompositeStoryId; // @dynamic hasCompositeStoryId;
@property(nonatomic) long long moderatedTimestampSecs; // @dynamic moderatedTimestampSecs;
@property(copy, nonatomic) NSString *moderator; // @dynamic moderator;
@property(nonatomic) int requestType; // @dynamic requestType;

@end

