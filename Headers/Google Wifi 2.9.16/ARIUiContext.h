//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARITextDetails, NSString;

@interface ARIUiContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int contextId; // @dynamic contextId;
@property(nonatomic) _Bool hasContextId; // @dynamic hasContextId;
@property(nonatomic) _Bool hasLanguageCode; // @dynamic hasLanguageCode;
@property(nonatomic) _Bool hasTextDetails; // @dynamic hasTextDetails;
@property(copy, nonatomic) NSString *languageCode; // @dynamic languageCode;
@property(retain, nonatomic) ARITextDetails *textDetails; // @dynamic textDetails;

@end

