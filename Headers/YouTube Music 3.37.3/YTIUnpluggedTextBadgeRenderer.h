//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString;

@interface YTIUnpluggedTextBadgeRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *fillColor; // @dynamic fillColor;
@property(nonatomic) _Bool hasFillColor; // @dynamic hasFillColor;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasTextColor; // @dynamic hasTextColor;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;
@property(copy, nonatomic) NSString *textColor; // @dynamic textColor;
@property(nonatomic) int type; // @dynamic type;

@end
