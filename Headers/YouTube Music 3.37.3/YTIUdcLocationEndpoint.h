//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand;

@interface YTIUdcLocationEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int endpointOneOfCase; // @dynamic endpointOneOfCase;
@property(nonatomic) _Bool hasOnAccepted; // @dynamic hasOnAccepted;
@property(nonatomic) _Bool hasOnRejected; // @dynamic hasOnRejected;
@property(nonatomic) _Bool hasProductContext; // @dynamic hasProductContext;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTICommand *onAccepted; // @dynamic onAccepted;
@property(retain, nonatomic) YTICommand *onRejected; // @dynamic onRejected;
@property(copy, nonatomic) NSString *productContext; // @dynamic productContext;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;

@end
