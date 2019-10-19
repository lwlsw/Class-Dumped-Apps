//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMetaViewControllerObserver-Protocol.h"
#import "SPTPageRegistryObserver-Protocol.h"
#import "SPTPhoneNumberSignupService-Protocol.h"

@class NSString, SPTAllocationContext, SPTPhoneNumberSignupFlowCoordinator, SPTPhoneNumberSignupUtils;
@protocol SPTContainerService, SPTContainerUIService, SPTCoreService, SPTGLUEService, SPTLoginLoggingService, SPTLoginService, SPTSignupService, SPTURIDispatchService;

@interface SPTPhoneNumberSignupServiceImplementation : NSObject <SPTPageRegistryObserver, SPTMetaViewControllerObserver, SPTPhoneNumberSignupService>
{
    id <SPTContainerUIService> _containerUIService;
    id <SPTContainerService> _containerService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTGLUEService> _glueService;
    id <SPTCoreService> _coreService;
    id <SPTLoginService> _loginService;
    id <SPTSignupService> _signupService;
    id <SPTLoginLoggingService> _loggingService;
    SPTPhoneNumberSignupFlowCoordinator *_flowCoordinator;
    SPTPhoneNumberSignupUtils *_phoneNumberSignupUtils;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTPhoneNumberSignupUtils *phoneNumberSignupUtils; // @synthesize phoneNumberSignupUtils=_phoneNumberSignupUtils;
@property(retain, nonatomic) SPTPhoneNumberSignupFlowCoordinator *flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
@property(nonatomic) __weak id <SPTLoginLoggingService> loggingService; // @synthesize loggingService=_loggingService;
@property(nonatomic) __weak id <SPTSignupService> signupService; // @synthesize signupService=_signupService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
- (void).cxx_destruct;
- (void)willChangeRootViewOfMetaViewController:(id)arg1;
- (id)provideMetaViewController;
- (id)provideAllowedCallingCodes;
- (id)provideFlowCoordinator;
- (id)provideNavigationRouter;
- (id)provideTheme;
- (id)provideCoreInstance;
- (id)providePageRegistry;
- (id)providePhoneNumberEntryViewController;
- (id)provideDialogController;
- (void)pageRegistryDidUnregisterFeaturePages:(id)arg1;
- (void)registerViewControllers;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
