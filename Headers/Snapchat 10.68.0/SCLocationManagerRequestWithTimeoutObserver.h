//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocationObserver-Protocol.h"

@class NSString, SCLocationManager;
@protocol OS_dispatch_queue;

@interface SCLocationManagerRequestWithTimeoutObserver : NSObject <SCLocationObserver>
{
    SCLocationManager *_locationManager;
    _Bool _isStopped;
    CDUnknownBlockType _timeoutBlock;
    NSObject<OS_dispatch_queue> *_locationTimerQueue;
    NSObject<OS_dispatch_queue> *_locationObserverDispatchQueue;
    double _locationObserverDesiredAccuracy;
    CDUnknownBlockType _callbackBlock;
    NSString *_locationObserverIdentifier;
}

@property(readonly, copy, nonatomic) NSString *locationObserverIdentifier; // @synthesize locationObserverIdentifier=_locationObserverIdentifier;
@property(readonly, copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(readonly, nonatomic) double locationObserverDesiredAccuracy; // @synthesize locationObserverDesiredAccuracy=_locationObserverDesiredAccuracy;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *locationObserverDispatchQueue; // @synthesize locationObserverDispatchQueue=_locationObserverDispatchQueue;
- (void).cxx_destruct;
- (void)_stopObserving;
- (void)_dispatchStopObserving;
- (void)_locationListenerHelperWithLocation:(id)arg1;
- (void)onLocationUpdate:(id)arg1;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
- (void)_deliverFinalCallbackAndStopObserving;
- (void)_startWithTimeout:(double)arg1;
- (id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 callbackQueue:(id)arg3 callback:(CDUnknownBlockType)arg4 observerIdentifier:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

