//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class IMPTrailer, NSString;

@interface IMPExtraMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int contentTypeOneOfCase; // @dynamic contentTypeOneOfCase;
@property(copy, nonatomic) NSString *seasonId; // @dynamic seasonId;
@property(copy, nonatomic) NSString *showId; // @dynamic showId;
@property(retain, nonatomic) IMPTrailer *trailer; // @dynamic trailer;

@end

