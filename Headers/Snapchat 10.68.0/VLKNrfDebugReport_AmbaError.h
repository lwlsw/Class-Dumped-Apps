//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class VLKNrfDebugReport_AmbaError_AmbaAssertFailure, VLKNrfDebugReport_AmbaError_AmbaKernelError;

@interface VLKNrfDebugReport_AmbaError : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) VLKNrfDebugReport_AmbaError_AmbaAssertFailure *assertFailed; // @dynamic assertFailed;
@property(nonatomic) unsigned int bootSession; // @dynamic bootSession;
@property(nonatomic) int errorType; // @dynamic errorType;
@property(nonatomic) _Bool hasAssertFailed; // @dynamic hasAssertFailed;
@property(nonatomic) _Bool hasBootSession; // @dynamic hasBootSession;
@property(nonatomic) _Bool hasErrorType; // @dynamic hasErrorType;
@property(nonatomic) _Bool hasKernelError; // @dynamic hasKernelError;
@property(retain, nonatomic) VLKNrfDebugReport_AmbaError_AmbaKernelError *kernelError; // @dynamic kernelError;

@end
