//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand;

@interface YTICommandWrapperPromoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasImpressionCommand; // @dynamic hasImpressionCommand;
@property(nonatomic) _Bool hasIsVisible; // @dynamic hasIsVisible;
@property(nonatomic) _Bool hasPromoCommand; // @dynamic hasPromoCommand;
@property(retain, nonatomic) YTICommand *impressionCommand; // @dynamic impressionCommand;
@property(nonatomic) _Bool isVisible; // @dynamic isVisible;
@property(retain, nonatomic) YTICommand *promoCommand; // @dynamic promoCommand;

@end
