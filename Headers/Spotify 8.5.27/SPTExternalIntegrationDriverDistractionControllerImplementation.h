//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationDriverDistractionController-Protocol.h"
#import "SPTExternalIntegrationDriverDistractionViewControllerDelegate-Protocol.h"

@class NSMutableSet, NSString, SPTDefaultPopupPermissionManager, SPTExternalIntegrationDriverDistractionViewController, SPTObserverManager, UIWindow;

@interface SPTExternalIntegrationDriverDistractionControllerImplementation : NSObject <SPTExternalIntegrationDriverDistractionViewControllerDelegate, SPTExternalIntegrationDriverDistractionController>
{
    _Bool _driverDistractionEnabled;
    SPTDefaultPopupPermissionManager *_popupPermissionsManager;
    UIWindow *_driverDistractionWindow;
    SPTExternalIntegrationDriverDistractionViewController *_lockscreenViewController;
    SPTObserverManager *_observerManager;
    NSMutableSet *_driverDistractionSessionIdentifiers;
}

@property(readonly, nonatomic) NSMutableSet *driverDistractionSessionIdentifiers; // @synthesize driverDistractionSessionIdentifiers=_driverDistractionSessionIdentifiers;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) SPTExternalIntegrationDriverDistractionViewController *lockscreenViewController; // @synthesize lockscreenViewController=_lockscreenViewController;
@property(retain, nonatomic) UIWindow *driverDistractionWindow; // @synthesize driverDistractionWindow=_driverDistractionWindow;
@property(nonatomic, getter=isDriverDistractionEnabled) _Bool driverDistractionEnabled; // @synthesize driverDistractionEnabled=_driverDistractionEnabled;
@property(readonly, nonatomic) __weak SPTDefaultPopupPermissionManager *popupPermissionsManager; // @synthesize popupPermissionsManager=_popupPermissionsManager;
- (void).cxx_destruct;
- (void)driverDistractionViewController:(id)arg1 didTapDismissWithIdentifier:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeLockscreenViewForIdentifier:(id)arg1;
- (void)buildAndShowLockscreenWithImage:(id)arg1 dismissible:(_Bool)arg2 identifier:(id)arg3;
- (void)invalidateDriverDistractionState;
- (void)disableDriverDistractionWithIdentifier:(id)arg1;
- (void)enableDriverDistractionWithoutLockscreenWithIdentifier:(id)arg1;
- (void)enableDriverDistractionWithIdentifier:(id)arg1 withLockscreenImage:(id)arg2 dismissibleLockscreen:(_Bool)arg3;
- (id)initWithPopupPermissionsManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
