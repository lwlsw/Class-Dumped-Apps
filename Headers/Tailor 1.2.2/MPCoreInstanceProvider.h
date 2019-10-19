//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MPCoreInstanceProvider : NSObject
{
    int _twitterDeepLinkStatus;
    NSMutableDictionary *_singletons;
    NSMutableDictionary *_carrierInfo;
}

+ (id)sharedProvider;
@property(nonatomic) int twitterDeepLinkStatus; // @synthesize twitterDeepLinkStatus=_twitterDeepLinkStatus;
@property(retain, nonatomic) NSMutableDictionary *carrierInfo; // @synthesize carrierInfo=_carrierInfo;
@property(retain, nonatomic) NSMutableDictionary *singletons; // @synthesize singletons=_singletons;
- (void).cxx_destruct;
- (id)buildMPTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 repeats:(_Bool)arg4;
- (id)sharedCarrierInfo;
- (unsigned long long)appTransportSecuritySettings;
- (id)sharedMPReachability;
- (id)sharedMPAnalyticsTracker;
- (id)buildMPAdAlertGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (id)buildMPAdAlertManagerWithDelegate:(id)arg1;
- (id)buildCLLocationManager;
- (id)sharedMPGeolocationProvider;
- (void)updateCarrierInfoForCTCarrier:(id)arg1;
- (void)initializeCarrierInfo;
- (void)performNoOp:(id)arg1;
- (void)keepObjectAliveForCurrentRunLoopIteration:(id)arg1;
- (id)singletonForClass:(Class)arg1 provider:(CDUnknownBlockType)arg2;
- (id)init;

@end
