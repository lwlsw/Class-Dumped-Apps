//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface TIMPBNUpdateConversationParticipantRequestBody : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *alias; // @dynamic alias;
@property(retain, nonatomic) NSMutableDictionary *bizExt; // @dynamic bizExt;
@property(readonly, nonatomic) unsigned long long bizExt_Count; // @dynamic bizExt_Count;
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(nonatomic) long long conversationShortId; // @dynamic conversationShortId;
@property(nonatomic) int conversationType; // @dynamic conversationType;
@property(nonatomic) _Bool hasAlias; // @dynamic hasAlias;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasConversationShortId; // @dynamic hasConversationShortId;
@property(nonatomic) _Bool hasConversationType; // @dynamic hasConversationType;
@property(nonatomic) _Bool hasIsAliasSet; // @dynamic hasIsAliasSet;
@property(nonatomic) _Bool hasRole; // @dynamic hasRole;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(nonatomic) _Bool isAliasSet; // @dynamic isAliasSet;
@property(nonatomic) int role; // @dynamic role;
@property(nonatomic) long long userId; // @dynamic userId;

@end

