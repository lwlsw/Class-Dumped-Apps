//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XBLMSASignInManager.h"
#import "XBLRelyingPartySuiteTicketManager.h"

@class MSAUserAccount, NSMutableSet, NSString, XBLMSAConfiguration, XBLMSAUserAccountService;

@interface XBLMSATicketSignInManager : NSObject <XBLMSASignInManager, XBLRelyingPartySuiteTicketManager>
{
    long long _state;
    id <XBLMSALogInUILauncher> _msaLauncher;
    XBLMSAConfiguration *_configuration;
    XBLMSAUserAccountService *_accountService;
    NSMutableSet *_rpsTicketRequestSet;
}

@property(retain, nonatomic) NSMutableSet *rpsTicketRequestSet; // @synthesize rpsTicketRequestSet=_rpsTicketRequestSet;
@property(retain, nonatomic) XBLMSAUserAccountService *accountService; // @synthesize accountService=_accountService;
@property(retain, nonatomic) XBLMSAConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <XBLMSALogInUILauncher> msaLauncher; // @synthesize msaLauncher=_msaLauncher;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)notifyTelemetryRPSTicketRequestSucceeded:(_Bool)arg1 withError:(id)arg2;
- (void)notifyTelemetryUserAccountRequestFinishedWithError:(id)arg1;
- (void)notifyTelemetrySignInFinishedWithUIShown:(_Bool)arg1 withError:(id)arg2;
@property(readonly, nonatomic) MSAUserAccount *userAccount;
- (id)primarySecurityScope;
- (void)configureLoadingScreenColor;
- (void)handleUserAccountRequestSuccess:(id)arg1 msaLauncher:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getUserAccountIfNeededWithMSALauncher:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getRPSTicketWithScope:(id)arg1 msaLauncher:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getTicketWithTarget:(id)arg1 policy:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)signOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)signInSilently:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
