//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTCreateCommentViewModel-Protocol.h"

@class NSData, NSMutableArray, NSString, YTIBackstageImageCreationSupportedRenderers, YTIBackstageVideoLinkSupportedRenderers, YTIButtonRenderer, YTIButtonSupportedRenderers, YTIChannelCreationServiceEndpoint, YTICommand, YTIConfirmDialogRenderer, YTIFormattedString, YTIPollCreationSupportedRenderers, YTIRenderer, YTIThumbnailDetails, YTIZeroStepChannelCreationRenderer, YTIZeroStepChannelCreationSupportedRenderers;

@interface YTICommentSimpleboxRenderer : GPBMessage <YTCreateCommentViewModel>
{
}

+ (id)descriptor;
- (void)removeZeroStepChannelCreationEligibility;
@property(readonly, nonatomic) YTIZeroStepChannelCreationRenderer *zeroStepChannelCreationRenderer;
@property(readonly, nonatomic) YTIChannelCreationServiceEndpoint *channelCreationServiceEndpoint;
@property(readonly, nonatomic) _Bool hasZeroStepChannelCreationRenderer;
@property(readonly, nonatomic) _Bool hasChannelCreationServiceEndpoint;
@property(readonly, nonatomic) _Bool isEligibleForZeroStepChannelCreation;
@property(readonly, nonatomic) _Bool isFromDetailPage;
@property(retain, nonatomic) NSString *originatedCommentId;
@property(nonatomic) __weak YTIFormattedString *pollChoiceText;
@property(readonly, nonatomic) NSString *commentParams;
@property(readonly, nonatomic) YTIFormattedString *headerText;
@property(readonly, nonatomic) YTIFormattedString *editableText;
@property(readonly, nonatomic) YTICommand *sendButtonServiceEndpoint;
@property(readonly, nonatomic) YTIButtonRenderer *cameraButtonRenderer;
@property(readonly, nonatomic) YTIButtonRenderer *cancelButtonRenderer;
@property(readonly, nonatomic) YTIButtonRenderer *sendButtonRenderer;
@property(readonly, nonatomic) _Bool hasHeaderText;
@property(readonly, nonatomic) _Bool hasEditableText;
@property(readonly, nonatomic) _Bool hasCameraButtonRenderer;
@property(readonly, nonatomic) _Bool hasSendButtonRenderer;
@property(readonly, nonatomic, getter=isForUpdate) _Bool forUpdate;
@property(readonly, nonatomic, getter=isForReply) _Bool forReply;
@property(readonly, nonatomic, getter=isForComment) _Bool forComment;
@property(readonly, nonatomic, getter=isForBackstagePost) _Bool forBackstagePost;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *authorThumbnail; // @dynamic authorThumbnail;
@property(nonatomic) int avatarSize; // @dynamic avatarSize;
@property(retain, nonatomic) YTIButtonSupportedRenderers *cameraButton; // @dynamic cameraButton;
@property(retain, nonatomic) YTIButtonSupportedRenderers *cancelButton; // @dynamic cancelButton;
@property(readonly, nonatomic) YTIConfirmDialogRenderer *commentWithoutVoteDialog;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTIButtonSupportedRenderers *emojiButton; // @dynamic emojiButton;
@property(retain, nonatomic) YTIRenderer *emojiPicker; // @dynamic emojiPicker;
@property(retain, nonatomic) NSMutableArray *emojisArray; // @dynamic emojisArray;
@property(readonly, nonatomic) unsigned long long emojisArray_Count; // @dynamic emojisArray_Count;
@property(nonatomic) __weak id existingEntry;
@property(nonatomic) _Bool hasAuthorThumbnail; // @dynamic hasAuthorThumbnail;
@property(nonatomic) _Bool hasAvatarSize; // @dynamic hasAvatarSize;
@property(nonatomic) _Bool hasCameraButton; // @dynamic hasCameraButton;
@property(nonatomic) _Bool hasCancelButton; // @dynamic hasCancelButton;
@property(nonatomic) _Bool hasEmojiButton; // @dynamic hasEmojiButton;
@property(nonatomic) _Bool hasEmojiPicker; // @dynamic hasEmojiPicker;
@property(nonatomic) _Bool hasImageButton; // @dynamic hasImageButton;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasPlaceholderText; // @dynamic hasPlaceholderText;
@property(nonatomic) _Bool hasPollButton; // @dynamic hasPollButton;
@property(nonatomic) _Bool hasPrepareAccountEndpoint; // @dynamic hasPrepareAccountEndpoint;
@property(nonatomic) _Bool hasSubmitButton; // @dynamic hasSubmitButton;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnicodeEmojisURL; // @dynamic hasUnicodeEmojisURL;
@property(nonatomic) _Bool hasVideoLinkButton; // @dynamic hasVideoLinkButton;
@property(nonatomic) _Bool hasZeroStep; // @dynamic hasZeroStep;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIBackstageImageCreationSupportedRenderers *imageButton; // @dynamic imageButton;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(readonly, nonatomic) YTIConfirmDialogRenderer *noMoreCommentDialog;
@property(retain, nonatomic) YTIFormattedString *placeholderText; // @dynamic placeholderText;
@property(retain, nonatomic) YTIPollCreationSupportedRenderers *pollButton; // @dynamic pollButton;
@property(retain, nonatomic) YTICommand *prepareAccountEndpoint; // @dynamic prepareAccountEndpoint;
@property(readonly, nonatomic) _Bool showInputViewForPersistentCompose;
@property(retain, nonatomic) YTIButtonSupportedRenderers *submitButton; // @dynamic submitButton;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportSmartCompose;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(copy, nonatomic) NSString *unicodeEmojisURL; // @dynamic unicodeEmojisURL;
@property(retain, nonatomic) YTIBackstageVideoLinkSupportedRenderers *videoLinkButton; // @dynamic videoLinkButton;
@property(retain, nonatomic) YTIZeroStepChannelCreationSupportedRenderers *zeroStep; // @dynamic zeroStep;

@end
