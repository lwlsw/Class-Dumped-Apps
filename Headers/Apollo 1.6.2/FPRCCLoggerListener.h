//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCTClearcutUploaderListener-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface FPRCCLoggerListener : NSObject <CCTClearcutUploaderListener>
{
    NSMutableArray *_onClearcutUploadBlocks;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)wrappedListener;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *onClearcutUploadBlocks; // @synthesize onClearcutUploadBlocks=_onClearcutUploadBlocks;
- (void).cxx_destruct;
- (void)clearcutUploaderWillSendLogs:(id)arg1;
- (void)removeOnClearcutUploadBlock:(CDUnknownBlockType)arg1;
- (void)addOnClearcutUploadBlock:(CDUnknownBlockType)arg1;
- (id)copy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
