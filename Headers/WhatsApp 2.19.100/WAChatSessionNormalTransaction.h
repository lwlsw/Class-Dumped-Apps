//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatSessionTransaction.h"

@interface WAChatSessionNormalTransaction : WAChatSessionTransaction
{
}

- (_Bool)performActionAffectingChatBarUnreadCount:(CDUnknownBlockType)arg1;
- (_Bool)setUnreadCount:(int)arg1;
- (_Bool)markHidden:(_Bool)arg1;
- (_Bool)markArchived:(_Bool)arg1;
- (void)markRemoved;
- (void)updateChatSessionWithMessage:(id)arg1;
- (void)didInsertChatSession;

@end

