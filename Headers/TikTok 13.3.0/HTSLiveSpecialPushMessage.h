//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, HTSLiveImage, NSString;

@interface HTSLiveSpecialPushMessage : GPBMessage
{
}

+ (id)descriptor;
- (void)setTreasure:(id)arg1;
- (id)treasure;
- (void)setRedEnvelope:(id)arg1;
- (id)redEnvelope;

// Remaining properties
@property(copy, nonatomic) NSString *actionContent; // @dynamic actionContent;
@property(nonatomic) long long actionType; // @dynamic actionType;
@property(copy, nonatomic) NSString *color; // @dynamic color;
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(retain, nonatomic) HTSLiveImage *icon; // @dynamic icon;
@property(nonatomic) long long pushMessageDisplayTime; // @dynamic pushMessageDisplayTime;
@property(copy, nonatomic) NSString *traceid; // @dynamic traceid;

@end

