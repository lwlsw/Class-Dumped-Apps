//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface YTIUnpluggedStreamChunkBasedPosition : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned long long chunkSequenceNumber; // @dynamic chunkSequenceNumber;
@property(nonatomic) _Bool hasChunkSequenceNumber; // @dynamic hasChunkSequenceNumber;
@property(nonatomic) _Bool hasOffsetIntoChunkMs; // @dynamic hasOffsetIntoChunkMs;
@property(nonatomic) unsigned long long offsetIntoChunkMs; // @dynamic offsetIntoChunkMs;

@end
