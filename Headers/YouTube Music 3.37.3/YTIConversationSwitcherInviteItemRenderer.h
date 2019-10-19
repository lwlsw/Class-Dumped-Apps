//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIUserCompleteAvatar;

@interface YTIConversationSwitcherInviteItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *acceptButton; // @dynamic acceptButton;
@property(copy, nonatomic) NSString *connectionId; // @dynamic connectionId;
@property(retain, nonatomic) YTICommand *contactMenuEndpoint; // @dynamic contactMenuEndpoint;
@property(retain, nonatomic) YTIButtonSupportedRenderers *declineButton; // @dynamic declineButton;
@property(nonatomic) _Bool hasAcceptButton; // @dynamic hasAcceptButton;
@property(nonatomic) _Bool hasConnectionId; // @dynamic hasConnectionId;
@property(nonatomic) _Bool hasContactMenuEndpoint; // @dynamic hasContactMenuEndpoint;
@property(nonatomic) _Bool hasDeclineButton; // @dynamic hasDeclineButton;
@property(nonatomic) _Bool hasInviteDescription; // @dynamic hasInviteDescription;
@property(nonatomic) _Bool hasInviterAvatar; // @dynamic hasInviterAvatar;
@property(nonatomic) _Bool hasSharedContentDescription; // @dynamic hasSharedContentDescription;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *inviteDescription; // @dynamic inviteDescription;
@property(retain, nonatomic) YTIUserCompleteAvatar *inviterAvatar; // @dynamic inviterAvatar;
@property(retain, nonatomic) YTIFormattedString *sharedContentDescription; // @dynamic sharedContentDescription;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
