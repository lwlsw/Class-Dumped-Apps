//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString;

@protocol SCReceiveFlowLogging <NSObject>
- (void)logDeltaFetchEndForConversationIds:(NSSet *)arg1;
- (void)logDeltaFetchStartForConversationIds:(NSSet *)arg1;
- (void)flushTimelinesForConversationIds:(NSSet *)arg1;
- (void)setReceiptTypeForMessageId:(NSString *)arg1 conversationId:(NSString *)arg2 receiptType:(long long)arg3;
- (void)addMetadataForMessageId:(NSString *)arg1 conversationId:(NSString *)arg2 isGroupConversation:(_Bool)arg3 messageBodyType:(NSString *)arg4 mediaType:(long long)arg5;
- (void)logDiscreteStepWithConversationId:(NSString *)arg1 receiveStep:(long long)arg2 timestampInSeconds:(double)arg3;
- (void)logStepEndWithConversationId:(NSString *)arg1 receiveStep:(long long)arg2 timestampInSeconds:(double)arg3 result:(long long)arg4;
- (void)logStepStartWithConversationId:(NSString *)arg1 receiveStep:(long long)arg2 timestampInSeconds:(double)arg3;
@end

