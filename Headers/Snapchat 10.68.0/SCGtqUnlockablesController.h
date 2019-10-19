//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocationObserver-Protocol.h"
#import "SCUnlockablesLoader-Protocol.h"

@class CLLocation, NSString, SCExperimentManager, SCGtqDataSource, SCLocationManager, SCQueuePerformer, SCUnlockableSensitivityController;

@interface SCGtqUnlockablesController : NSObject <SCLocationObserver, SCUnlockablesLoader>
{
    SCGtqDataSource *_dataSource;
    SCExperimentManager *_experimentManager;
    SCLocationManager *_locationManager;
    SCQueuePerformer *_performer;
    SCUnlockableSensitivityController *_sensitivityController;
    _Bool _isRequestingLocation;
    double _cancellation;
    double _lastIPLocationRequestTime;
    CLLocation *_lastLocation;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)locationObserverIdentifier;
- (void)onLocationUpdate:(id)arg1;
- (id)locationObserverDispatchQueue;
- (double)locationObserverDesiredAccuracy;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
- (_Bool)_isAdequateLocationAccuracy:(double)arg1;
- (void)_fetchUnlockablesAtLocation:(id)arg1;
- (void)_requestLocationWithTimeout:(double)arg1;
- (void)_subscribeForDuration:(double)arg1;
- (void)_fetchIPLocationRequestIfNecessary;
- (void)_triggerWithLocationRequestTimeout:(double)arg1;
- (void)onSnapPreviewVisible;
- (void)onLensesActivated;
- (void)onCameraVisible;
- (id)initWithDataSource:(id)arg1 experimentManager:(id)arg2 locationManager:(id)arg3 sensitivityController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
