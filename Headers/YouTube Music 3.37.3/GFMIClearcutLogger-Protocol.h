//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol GFMIClearcutLogger <NSObject>
- (void)logMembersInvitedEventWithEmailInvitesSelected:(int)arg1 SMSInvitesSelected:(int)arg2 EmailInvitesSucceeded:(int)arg3 SMSInvitesSucceeded:(int)arg4 withinFlow:(unsigned long long)arg5;
- (void)logErrorEventWithType:(long long)arg1 additionalInfo:(NSString *)arg2 withinFlow:(unsigned long long)arg3;
- (void)logFamilyInviteEventWithType:(long long)arg1 withinFlow:(unsigned long long)arg2;
- (void)logFamilyManagementEventWithType:(long long)arg1;
- (void)logFamilySetupEventWithType:(long long)arg1;
@end

