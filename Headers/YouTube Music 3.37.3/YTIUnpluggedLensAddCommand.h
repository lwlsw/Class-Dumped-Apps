//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIRenderer, YTIUnpluggedLensClip, YTIUnpluggedLensRendererRank;

@interface YTIUnpluggedLensAddCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUnpluggedLensClip *clip; // @dynamic clip;
@property(copy, nonatomic) NSString *containingRendererId; // @dynamic containingRendererId;
@property(nonatomic) _Bool hasClip; // @dynamic hasClip;
@property(nonatomic) _Bool hasContainingRendererId; // @dynamic hasContainingRendererId;
@property(nonatomic) _Bool hasRank; // @dynamic hasRank;
@property(nonatomic) _Bool hasRenderer; // @dynamic hasRenderer;
@property(retain, nonatomic) YTIUnpluggedLensRendererRank *rank; // @dynamic rank;
@property(retain, nonatomic) YTIRenderer *renderer; // @dynamic renderer;

@end
