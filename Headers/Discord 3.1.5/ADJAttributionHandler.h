//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADJAttributionHandler-Protocol.h"

@class ADJTimerOnce, NSString;
@protocol ADJActivityHandler, ADJLogger, OS_dispatch_queue;

@interface ADJAttributionHandler : NSObject <ADJAttributionHandler>
{
    _Bool _paused;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id <ADJActivityHandler> _activityHandler;
    id <ADJLogger> _logger;
    ADJTimerOnce *_attributionTimer;
    NSString *_basePath;
    NSString *_lastInitiatedBy;
}

+ (id)handlerWithActivityHandler:(id)arg1 startsSending:(_Bool)arg2;
@property(copy, nonatomic) NSString *lastInitiatedBy; // @synthesize lastInitiatedBy=_lastInitiatedBy;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) ADJTimerOnce *attributionTimer; // @synthesize attributionTimer=_attributionTimer;
@property(nonatomic) __weak id <ADJLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <ADJActivityHandler> activityHandler; // @synthesize activityHandler=_activityHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void).cxx_destruct;
- (void)teardown;
- (id)buildAndGetAttributionPackageI:(id)arg1;
- (void)waitRequestAttributionWithDelayI:(id)arg1 milliSecondsDelay:(int)arg2;
- (void)requestAttributionI:(id)arg1;
- (void)checkDeeplinkI:(id)arg1 attributionResponseData:(id)arg2;
- (void)checkAttributionI:(id)arg1 responseData:(id)arg2;
- (void)checkAttributionResponseI:(id)arg1 attributionResponseData:(id)arg2;
- (void)checkSdkClickResponseI:(id)arg1 sdkClickResponseData:(id)arg2;
- (void)checkSessionResponseI:(id)arg1 sessionResponseData:(id)arg2;
- (void)resumeSending;
- (void)pauseSending;
- (void)getAttribution;
- (void)checkAttributionResponse:(id)arg1;
- (void)checkSdkClickResponse:(id)arg1;
- (void)checkSessionResponse:(id)arg1;
- (id)initWithActivityHandler:(id)arg1 startsSending:(_Bool)arg2;

@end
