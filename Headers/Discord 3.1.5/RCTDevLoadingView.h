//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RCTDevLoadingView : NSObject <RCTBridgeModule>
{
}

+ (void)setEnabled:(_Bool)arg1;
+ (id)moduleName;
- (void)hide;
- (void)updateProgress:(id)arg1;
- (void)showWithURL:(id)arg1;
- (void)showMessage:(id)arg1 color:(id)arg2 backgroundColor:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

