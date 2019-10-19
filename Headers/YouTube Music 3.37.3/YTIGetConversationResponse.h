//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTInnerTubeSectionRenderers-Protocol.h"

@class NSData, NSMutableArray, NSString, YTIContinuationSupportedRenderers, YTIConversationSupportedRenderers, YTIConversationVideoKeyboardSupportedRenderers, YTIResponseContext;

@interface YTIGetConversationResponse : GPBMessage <YTInnerTubeSectionRenderers>
{
}

+ (id)descriptor;
- (id)sectionRenderers;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(retain, nonatomic) YTIConversationSupportedRenderers *contents; // @dynamic contents;
@property(retain, nonatomic) YTIContinuationSupportedRenderers *continuationContents; // @dynamic continuationContents;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasContents; // @dynamic hasContents;
@property(nonatomic) _Bool hasContinuationContents; // @dynamic hasContinuationContents;
@property(nonatomic) _Bool hasKeyboard; // @dynamic hasKeyboard;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIConversationVideoKeyboardSupportedRenderers *keyboard; // @dynamic keyboard;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
