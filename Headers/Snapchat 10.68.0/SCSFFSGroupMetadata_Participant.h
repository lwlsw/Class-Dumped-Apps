//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSFFSPerson;

@interface SCSFFSGroupMetadata_Participant : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int colorHex; // @dynamic colorHex;
@property(nonatomic) _Bool hasPerson; // @dynamic hasPerson;
@property(nonatomic) _Bool isStoryMuted; // @dynamic isStoryMuted;
@property(retain, nonatomic) SCSFFSPerson *person; // @dynamic person;

@end

