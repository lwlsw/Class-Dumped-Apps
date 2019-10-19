//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIChatMessageLinkType, YTIChatMessageMetadataType, YTIChatMessageTextType, YTIChatMessageVideoType;

@interface YTIChatMessageEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(retain, nonatomic) YTIChatMessageLinkType *chatMessageLinkType; // @dynamic chatMessageLinkType;
@property(retain, nonatomic) YTIChatMessageMetadataType *chatMessageMetadataType; // @dynamic chatMessageMetadataType;
@property(retain, nonatomic) YTIChatMessageTextType *chatMessageTextType; // @dynamic chatMessageTextType;
@property(retain, nonatomic) YTIChatMessageVideoType *chatMessageVideoType; // @dynamic chatMessageVideoType;
@property(nonatomic) long long created; // @dynamic created;
@property(nonatomic) _Bool hasCreated; // @dynamic hasCreated;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(readonly, nonatomic) int typeOneOfCase; // @dynamic typeOneOfCase;

@end
