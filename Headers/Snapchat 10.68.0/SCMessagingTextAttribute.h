//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMessagingRange, SCMessagingTextFormatAttribute, SCMessagingTextMediaAttribute, SCMessagingTextUrlAttribute;

@interface SCMessagingTextAttribute : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMessagingTextUrlAttribute *URLAttribute; // @dynamic URLAttribute;
@property(readonly, nonatomic) int attributeOneOfCase; // @dynamic attributeOneOfCase;
@property(retain, nonatomic) SCMessagingTextFormatAttribute *formatAttribute; // @dynamic formatAttribute;
@property(nonatomic) _Bool hasRange; // @dynamic hasRange;
@property(retain, nonatomic) SCMessagingTextMediaAttribute *mediaAttribute; // @dynamic mediaAttribute;
@property(retain, nonatomic) SCMessagingRange *range; // @dynamic range;

@end

