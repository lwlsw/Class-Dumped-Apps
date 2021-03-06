//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMTHeatmapGradient;

@interface SCMTHeatTileSetInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float fuzzNormalizationPeak; // @dynamic fuzzNormalizationPeak;
@property(nonatomic) _Bool hasHeatmapGradient; // @dynamic hasHeatmapGradient;
@property(nonatomic) double heatFromTime; // @dynamic heatFromTime;
@property(nonatomic) float heatNormalizationPeak; // @dynamic heatNormalizationPeak;
@property(nonatomic) float heatPointBaseRadius; // @dynamic heatPointBaseRadius;
@property(nonatomic) double heatToTime; // @dynamic heatToTime;
@property(retain, nonatomic) SCMTHeatmapGradient *heatmapGradient; // @dynamic heatmapGradient;
@property(nonatomic) double lastSnapTime; // @dynamic lastSnapTime;
@property(nonatomic) int totalHeatmapPoints; // @dynamic totalHeatmapPoints;

@end

