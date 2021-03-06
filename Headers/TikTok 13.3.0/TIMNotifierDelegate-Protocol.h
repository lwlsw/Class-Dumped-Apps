//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString;

@protocol TIMNotifierDelegate <NSObject>

@optional
- (void)ttim_onServiceOfflineSucceed;
- (void)ttim_onServiceOnlineFailed:(NSError *)arg1;
- (void)ttim_onServiceOnlineSucceed;
- (void)ttim_onSendMessageAriseErrorUserNotFound;
- (void)ttim_onSendMessageAriseErrorDeviceNotBind;
- (void)ttim_onSendMessageAriseErrorTokenInvalid;
- (void)didInsertedPulledMessages:(NSDictionary *)arg1;
- (void)didSendMessageStatusChange:(NSString *)arg1 inConversation:(NSString *)arg2;
- (void)didSaveSendMessageToDB:(NSString *)arg1 inConversation:(NSString *)arg2;
- (void)didSendMessageACK:(NSString *)arg1 inConversation:(NSString *)arg2 extraInfo:(NSString *)arg3 error:(NSError *)arg4;
- (void)conversationDidDissolved:(NSString *)arg1;
- (void)willInsertNewMessagesWithMessageIdentifiers:(NSArray *)arg1 belongingConversationMap:(NSDictionary *)arg2;
- (void)file:(NSString *)arg1 uploadProgressChangedTo:(float)arg2;
- (void)message:(NSString *)arg1 inConversation:(NSString *)arg2 didReceiveResponse:(id)arg3 error:(NSError *)arg4;
- (void)willSendMessage:(NSString *)arg1 inConversation:(NSString *)arg2;
@end

