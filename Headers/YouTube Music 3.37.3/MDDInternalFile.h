//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MDDVersionRestrictions;

@interface MDDInternalFile : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool done; // @dynamic done;
@property(nonatomic) _Bool hasDone; // @dynamic hasDone;
@property(nonatomic) _Bool hasVersionRestrictions; // @dynamic hasVersionRestrictions;
@property(retain, nonatomic) MDDVersionRestrictions *versionRestrictions; // @dynamic versionRestrictions;

@end
