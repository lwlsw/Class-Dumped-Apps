//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCArroyoConversationIdsManager, SCArroyoGroupFilterer, SCChatMediaMessageSenderHelper, SCPreviewSnapSenderConfiguration;
@protocol SCSnapSendPreparer, SendSnapNavigationControllerDelegate;

@interface SCPreviewSnapSender : NSObject
{
    SCPreviewSnapSenderConfiguration *_configuration;
    SCArroyoGroupFilterer *_arroyoGroupFilterer;
    SCChatMediaMessageSenderHelper *_mediaMessageSenderHelper;
    SCArroyoConversationIdsManager *_arroyoConversationIdsManager;
    id <SendSnapNavigationControllerDelegate> _delegate;
    id <SCSnapSendPreparer> _snapSendPreparer;
}

+ (_Bool)gallerySnapWasPostedToMyStory:(id)arg1;
+ (void)initialize;
@property(nonatomic) __weak id <SCSnapSendPreparer> snapSendPreparer; // @synthesize snapSendPreparer=_snapSendPreparer;
@property(nonatomic) __weak id <SendSnapNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendQuickGroupChatMedia:(id)arg1 conversationId:(id)arg2;
- (void)_showStatusMessage:(_Bool)arg1;
- (id)_constructMessageMetadataFromEphemeralMedia:(id)arg1;
- (void)_sendMediaTaskWithEphemeralMedia:(id)arg1 lensAssetsUploadOperation:(id)arg2 lensMetadataFuture:(id)arg3 mischiefs:(id)arg4 toRecipientUsernames:(id)arg5 storiesPostingConfig:(id)arg6 businessIds:(id)arg7 appStoryMetadatas:(id)arg8 fromPreview:(_Bool)arg9 inviteRecipientShown:(long long)arg10 blizzardEventsForSuccessfulSend:(id)arg11 additionalText:(id)arg12 shouldShowStatusMessage:(_Bool)arg13 repostAttribution:(id)arg14;
- (void)_sendMediaWithEphemeralMedia:(id)arg1 arroyoConversationIds:(id)arg2;
- (void)_updateEphemeralCommonLoggingParameters:(id)arg1 toRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 appStories:(id)arg5 mischiefs:(id)arg6 fromPreview:(_Bool)arg7 fromSendTo:(_Bool)arg8 inviteRecipientShown:(long long)arg9;
- (void)_postStory:(id)arg1 storiesPostingConfig:(id)arg2 lensAssetsUploadOperation:(id)arg3 lensMetadataFuture:(id)arg4 businessIds:(id)arg5 captureSessionId:(id)arg6 appStories:(id)arg7 fromPreview:(_Bool)arg8 shouldShowToastWhenPostComplete:(_Bool)arg9 additionalText:(id)arg10 repostAttribution:(id)arg11;
- (void)postStory:(id)arg1 storiesPostingConfig:(id)arg2 lensAssetsUploadOperation:(id)arg3 lensMetadataFuture:(id)arg4 businessIds:(id)arg5 captureSessionId:(id)arg6 appStories:(id)arg7 fromPreview:(_Bool)arg8 fromSendTo:(_Bool)arg9 shouldShowToastWhenPostComplete:(_Bool)arg10 additionalText:(id)arg11 repostAttribution:(id)arg12;
- (id)_userPostedTimestampsWithCount:(unsigned long long)arg1;
- (id)_storyFraming;
- (void)_sendGroupChatMessageWithChatMedia:(id)arg1 messageBodyType:(long long)arg2 toRecipientUsernames:(id)arg3 mischiefs:(id)arg4 blizzardEventsForSuccessfulSend:(id)arg5 shouldShowStatusMessage:(_Bool)arg6 attachedURL:(id)arg7 additionalText:(id)arg8 isForwarded:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;
- (void)_sendArroyoGroupChatMessageWithChatMedia:(id)arg1 conversationIds:(id)arg2 additionalText:(id)arg3;
- (void)sendDiscoverMedia:(id)arg1 toRecipientUsernames:(id)arg2 mischiefs:(id)arg3 loggingParameters:(id)arg4 additionalText:(id)arg5 isForwarded:(_Bool)arg6;
- (void)sendAdShareMedia:(id)arg1 toRecipientUsernames:(id)arg2 mischiefs:(id)arg3 loggingParameters:(id)arg4 additionalText:(id)arg5;
- (void)sendChatMessageWithChatMedia:(id)arg1 toRecipientUsernames:(id)arg2 mischiefs:(id)arg3 blizzardEventsForSuccessfulSend:(id)arg4 additionalText:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)sendKhaleesiMessageWithChatMedia:(id)arg1 toRecipientUsernames:(id)arg2 mischiefs:(id)arg3 blizzardEventsForSuccessfulSend:(id)arg4 attachedURL:(id)arg5 additionalText:(id)arg6;
- (void)sendEphemeralMediaList:(id)arg1 lensAssetsUploadOperation:(id)arg2 lensMetadataFuture:(id)arg3 toRecipientUsernames:(id)arg4 storiesPostingConfig:(id)arg5 businessIds:(id)arg6 mischiefs:(id)arg7 appStories:(id)arg8 fromPreview:(_Bool)arg9 fromSendTo:(_Bool)arg10 inviteRecipientShown:(long long)arg11 blizzardEventsForSuccessfulSend:(id)arg12 additionalText:(id)arg13 captureSessionId:(id)arg14;
- (id)initWithConfiguration:(id)arg1;

@end
