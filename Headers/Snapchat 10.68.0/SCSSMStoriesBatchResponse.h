//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface SCSSMStoriesBatchResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(copy, nonatomic) NSData *debugPb; // @dynamic debugPb;
@property(copy, nonatomic) NSData *metaStreamToken; // @dynamic metaStreamToken;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(retain, nonatomic) NSMutableArray *storiesResponsesArray; // @dynamic storiesResponsesArray;
@property(readonly, nonatomic) unsigned long long storiesResponsesArray_Count; // @dynamic storiesResponsesArray_Count;

@end

