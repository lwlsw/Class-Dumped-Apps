//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTISpanInfo;

@interface YTILatencyActionSpan : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientActionNonce; // @dynamic clientActionNonce;
@property(nonatomic) _Bool hasClientActionNonce; // @dynamic hasClientActionNonce;
@property(nonatomic) _Bool hasParentSpanNonce; // @dynamic hasParentSpanNonce;
@property(nonatomic) _Bool hasSpanInfo; // @dynamic hasSpanInfo;
@property(nonatomic) _Bool hasSpanLengthUsec; // @dynamic hasSpanLengthUsec;
@property(nonatomic) _Bool hasSpanName; // @dynamic hasSpanName;
@property(nonatomic) _Bool hasSpanNonce; // @dynamic hasSpanNonce;
@property(nonatomic) _Bool hasSpanStartTimeUsec; // @dynamic hasSpanStartTimeUsec;
@property(nonatomic) int parentSpanNonce; // @dynamic parentSpanNonce;
@property(retain, nonatomic) YTISpanInfo *spanInfo; // @dynamic spanInfo;
@property(nonatomic) long long spanLengthUsec; // @dynamic spanLengthUsec;
@property(copy, nonatomic) NSString *spanName; // @dynamic spanName;
@property(nonatomic) int spanNonce; // @dynamic spanNonce;
@property(nonatomic) long long spanStartTimeUsec; // @dynamic spanStartTimeUsec;

@end
