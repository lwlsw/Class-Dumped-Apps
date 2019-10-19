//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCFriendsFeedOneOnOneSequenceNumber;

@interface SCFriendsFeedOneOnOneConversationVersion : NSObject <NSCopying>
{
    SCFriendsFeedOneOnOneSequenceNumber *_currentUserParticipantSequenceNumber;
    SCFriendsFeedOneOnOneSequenceNumber *_otherParticipantSequenceNumber;
    NSArray *_unexpiredSentSnapStates;
    NSArray *_unopenedReceivedSnapIds;
}

@property(readonly, copy, nonatomic) NSArray *unopenedReceivedSnapIds; // @synthesize unopenedReceivedSnapIds=_unopenedReceivedSnapIds;
@property(readonly, copy, nonatomic) NSArray *unexpiredSentSnapStates; // @synthesize unexpiredSentSnapStates=_unexpiredSentSnapStates;
@property(readonly, copy, nonatomic) SCFriendsFeedOneOnOneSequenceNumber *otherParticipantSequenceNumber; // @synthesize otherParticipantSequenceNumber=_otherParticipantSequenceNumber;
@property(readonly, copy, nonatomic) SCFriendsFeedOneOnOneSequenceNumber *currentUserParticipantSequenceNumber; // @synthesize currentUserParticipantSequenceNumber=_currentUserParticipantSequenceNumber;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCurrentUserParticipantSequenceNumber:(id)arg1 otherParticipantSequenceNumber:(id)arg2 unexpiredSentSnapStates:(id)arg3 unopenedReceivedSnapIds:(id)arg4;
- (id)xLogObjectInfo;

@end
