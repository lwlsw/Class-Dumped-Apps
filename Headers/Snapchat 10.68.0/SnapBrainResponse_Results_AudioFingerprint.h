//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array;

@interface SnapBrainResponse_Results_AudioFingerprint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32Array *fingerprintsArray; // @dynamic fingerprintsArray;
@property(readonly, nonatomic) unsigned long long fingerprintsArray_Count; // @dynamic fingerprintsArray_Count;
@property(retain, nonatomic) GPBInt32Array *framesArray; // @dynamic framesArray;
@property(readonly, nonatomic) unsigned long long framesArray_Count; // @dynamic framesArray_Count;
@property(nonatomic) int spectrogramLength; // @dynamic spectrogramLength;
@property(nonatomic) int wavLength; // @dynamic wavLength;

@end
