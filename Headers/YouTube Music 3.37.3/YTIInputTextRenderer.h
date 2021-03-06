//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAccessibilitySupportedDatas, YTIFormattedString;

@interface YTIInputTextRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTIFormattedString *defaultValue; // @dynamic defaultValue;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasDefaultValue; // @dynamic hasDefaultValue;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasMaxUnicodeLength; // @dynamic hasMaxUnicodeLength;
@property(nonatomic) _Bool hasPlaceholder; // @dynamic hasPlaceholder;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;
@property(nonatomic) int maxUnicodeLength; // @dynamic maxUnicodeLength;
@property(retain, nonatomic) YTIFormattedString *placeholder; // @dynamic placeholder;

@end

