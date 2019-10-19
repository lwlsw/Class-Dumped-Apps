//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIBroadcastMetadata, YTIBroadcastMetadataMask, YTIInnerTubeContext, YTILiveChatSettings, YTILiveChatSettingsMask, YTIVideoMetadata, YTIVideoMetadataMask;

@interface YTICreateBroadcastRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIBroadcastMetadata *broadcastMetadata; // @dynamic broadcastMetadata;
@property(retain, nonatomic) YTIBroadcastMetadataMask *broadcastMetadataMask; // @dynamic broadcastMetadataMask;
@property(nonatomic) int broadcastType; // @dynamic broadcastType;
@property(copy, nonatomic) NSString *cloneVideoId; // @dynamic cloneVideoId;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool hasBroadcastMetadata; // @dynamic hasBroadcastMetadata;
@property(nonatomic) _Bool hasBroadcastMetadataMask; // @dynamic hasBroadcastMetadataMask;
@property(nonatomic) _Bool hasBroadcastType; // @dynamic hasBroadcastType;
@property(nonatomic) _Bool hasCloneVideoId; // @dynamic hasCloneVideoId;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasLiveChatSettingsUpdate; // @dynamic hasLiveChatSettingsUpdate;
@property(nonatomic) _Bool hasLiveChatSettingsUpdateMask; // @dynamic hasLiveChatSettingsUpdateMask;
@property(nonatomic) _Bool hasUseMasks; // @dynamic hasUseMasks;
@property(nonatomic) _Bool hasVideoMetadata; // @dynamic hasVideoMetadata;
@property(nonatomic) _Bool hasVideoMetadataMask; // @dynamic hasVideoMetadataMask;
@property(retain, nonatomic) YTILiveChatSettings *liveChatSettingsUpdate; // @dynamic liveChatSettingsUpdate;
@property(retain, nonatomic) YTILiveChatSettingsMask *liveChatSettingsUpdateMask; // @dynamic liveChatSettingsUpdateMask;
@property(nonatomic) _Bool useMasks; // @dynamic useMasks;
@property(retain, nonatomic) YTIVideoMetadata *videoMetadata; // @dynamic videoMetadata;
@property(retain, nonatomic) YTIVideoMetadataMask *videoMetadataMask; // @dynamic videoMetadataMask;

@end
