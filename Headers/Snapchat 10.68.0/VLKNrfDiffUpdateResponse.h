//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface VLKNrfDiffUpdateResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool diffUpdatePatchApplied; // @dynamic diffUpdatePatchApplied;
@property(copy, nonatomic) NSString *digest; // @dynamic digest;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(nonatomic) _Bool hasDiffUpdatePatchApplied; // @dynamic hasDiffUpdatePatchApplied;
@property(nonatomic) _Bool hasDigest; // @dynamic hasDigest;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasOrigReqType; // @dynamic hasOrigReqType;
@property(nonatomic) _Bool hasUntarComplete; // @dynamic hasUntarComplete;
@property(nonatomic) int origReqType; // @dynamic origReqType;
@property(nonatomic) _Bool untarComplete; // @dynamic untarComplete;

@end

