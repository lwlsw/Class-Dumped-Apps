//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDoubleArray, NSMutableArray, NSString;

@interface SCPBUnlockablesTextColor : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *colorArray; // @dynamic colorArray;
@property(readonly, nonatomic) unsigned long long colorArray_Count; // @dynamic colorArray_Count;
@property(nonatomic) double colorGradientAngleDegree; // @dynamic colorGradientAngleDegree;
@property(retain, nonatomic) GPBDoubleArray *colorStopArray; // @dynamic colorStopArray;
@property(readonly, nonatomic) unsigned long long colorStopArray_Count; // @dynamic colorStopArray_Count;
@property(copy, nonatomic) NSString *colorTransform; // @dynamic colorTransform;
@property(retain, nonatomic) GPBDoubleArray *colorTransformParamsArray; // @dynamic colorTransformParamsArray;
@property(readonly, nonatomic) unsigned long long colorTransformParamsArray_Count; // @dynamic colorTransformParamsArray_Count;

@end

