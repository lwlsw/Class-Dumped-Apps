//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTIOfflineCandidateData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int candidateType; // @dynamic candidateType;
@property(nonatomic) _Bool hasCandidateType; // @dynamic hasCandidateType;
@property(retain, nonatomic) NSMutableArray *videosArray; // @dynamic videosArray;
@property(readonly, nonatomic) unsigned long long videosArray_Count; // @dynamic videosArray_Count;

@end
