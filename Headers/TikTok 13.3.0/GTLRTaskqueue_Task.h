//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class NSNumber, NSString;

@interface GTLRTaskqueue_Task : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) NSNumber *enqueueTimestamp; // @dynamic enqueueTimestamp;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(retain, nonatomic) NSNumber *leaseTimestamp; // @dynamic leaseTimestamp;
@property(copy, nonatomic) NSString *payloadBase64; // @dynamic payloadBase64;
@property(copy, nonatomic) NSString *queueName; // @dynamic queueName;
@property(retain, nonatomic) NSNumber *retryCount; // @dynamic retryCount;
@property(copy, nonatomic) NSString *tag; // @dynamic tag;

@end

