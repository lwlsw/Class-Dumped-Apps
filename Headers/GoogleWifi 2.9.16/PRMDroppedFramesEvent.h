//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface PRMDroppedFramesEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int durationMs; // @dynamic durationMs;
@property(nonatomic) _Bool hasDurationMs; // @dynamic hasDurationMs;
@property(nonatomic) _Bool hasNumberOfBustedFrames; // @dynamic hasNumberOfBustedFrames;
@property(nonatomic) int numberOfBustedFrames; // @dynamic numberOfBustedFrames;

@end
