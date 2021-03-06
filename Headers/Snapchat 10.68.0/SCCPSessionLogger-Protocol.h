//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol SCCPSessionLogger <NSObject>
- (void)logPingTime:(double)arg1;
- (void)sccpStateDidChangeWithPreviousState:(long long)arg1 currentState:(long long)arg2 error:(NSError *)arg3;
- (void)logBreadcrumb:(NSString *)arg1;
- (void)logChatSessionsEstablished:(unsigned long long)arg1;
- (void)logChatConnectedOnInterface:(NSString *)arg1 afterAttempts:(unsigned long long)arg2;
- (void)logChatConnectAttempt;
@end

