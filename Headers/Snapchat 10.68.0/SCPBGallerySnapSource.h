//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCPBSnapCreatorAttribution;

@interface SCPBGallerySnapSource : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attributionArray; // @dynamic attributionArray;
@property(readonly, nonatomic) unsigned long long attributionArray_Count; // @dynamic attributionArray_Count;
@property(copy, nonatomic) NSString *cameraRollId; // @dynamic cameraRollId;
@property(retain, nonatomic) SCPBSnapCreatorAttribution *creatorAttribution; // @dynamic creatorAttribution;
@property(copy, nonatomic) NSString *externalId; // @dynamic externalId;
@property(nonatomic) _Bool hasCreatorAttribution; // @dynamic hasCreatorAttribution;
@property(copy, nonatomic) NSString *saverUserId; // @dynamic saverUserId;
@property(nonatomic) int type; // @dynamic type;

@end
