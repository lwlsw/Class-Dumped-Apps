//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class SCOAudioDecodingSuggestedParams, SCOAudioDsssSuggestedParams;

@interface SCOAudioDsssParams : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCOAudioDsssSuggestedParams *audioDsssSuggestedParams; // @dynamic audioDsssSuggestedParams;
@property(nonatomic) int basebandDecimationFactor; // @dynamic basebandDecimationFactor;
@property(nonatomic) int bitsPerSymbol; // @dynamic bitsPerSymbol;
@property(nonatomic) int broadcasterVolume; // @dynamic broadcasterVolume;
@property(nonatomic) int codeNumber; // @dynamic codeNumber;
@property(nonatomic) double coderSampleRate; // @dynamic coderSampleRate;
@property(retain, nonatomic) SCOAudioDecodingSuggestedParams *decodingSuggestedParams; // @dynamic decodingSuggestedParams;
@property(nonatomic) double desiredCarrierFrequency; // @dynamic desiredCarrierFrequency;
@property(nonatomic) _Bool hasAudioDsssSuggestedParams; // @dynamic hasAudioDsssSuggestedParams;
@property(nonatomic) _Bool hasBasebandDecimationFactor; // @dynamic hasBasebandDecimationFactor;
@property(nonatomic) _Bool hasBitsPerSymbol; // @dynamic hasBitsPerSymbol;
@property(nonatomic) _Bool hasBroadcasterVolume; // @dynamic hasBroadcasterVolume;
@property(nonatomic) _Bool hasCodeNumber; // @dynamic hasCodeNumber;
@property(nonatomic) _Bool hasCoderSampleRate; // @dynamic hasCoderSampleRate;
@property(nonatomic) _Bool hasDecodingSuggestedParams; // @dynamic hasDecodingSuggestedParams;
@property(nonatomic) _Bool hasDesiredCarrierFrequency; // @dynamic hasDesiredCarrierFrequency;
@property(nonatomic) _Bool hasIncludeParitySymbol; // @dynamic hasIncludeParitySymbol;
@property(nonatomic) _Bool hasMinCyclesPerFrame; // @dynamic hasMinCyclesPerFrame;
@property(nonatomic) _Bool hasNumberOfTapsLfsr; // @dynamic hasNumberOfTapsLfsr;
@property(nonatomic) _Bool hasUpsamplingFactor; // @dynamic hasUpsamplingFactor;
@property(nonatomic) _Bool hasUseCrc16; // @dynamic hasUseCrc16;
@property(nonatomic) _Bool hasUseSingleSideband; // @dynamic hasUseSingleSideband;
@property(nonatomic) _Bool includeParitySymbol; // @dynamic includeParitySymbol;
@property(nonatomic) int minCyclesPerFrame; // @dynamic minCyclesPerFrame;
@property(nonatomic) int numberOfTapsLfsr; // @dynamic numberOfTapsLfsr;
@property(nonatomic) int upsamplingFactor; // @dynamic upsamplingFactor;
@property(nonatomic) _Bool useCrc16; // @dynamic useCrc16;
@property(nonatomic) _Bool useSingleSideband; // @dynamic useSingleSideband;

@end
