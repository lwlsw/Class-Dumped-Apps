//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSAStsWebViewControllerDelegate.h"

@class MSAConfigManager, MSAEnvironmentInternal, MSAOnlineIDConfiguration, MSAStorageCache, MSATicketManager, MSATokenCache, NSObject<OS_dispatch_queue>, NSString;

@interface MSAAccountManager : NSObject <MSAStsWebViewControllerDelegate>
{
    MSAOnlineIDConfiguration *_configuration;
    MSAEnvironmentInternal *_environment;
    MSATicketManager *_ticketManager;
    MSAConfigManager *_configManager;
    MSAStorageCache *_storage;
    MSATokenCache *_tokenCache;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
- (void)webViewController:(id)arg1 didFailSTSAuthenticationWithError:(id)arg2;
- (void)webViewController:(id)arg1 didSucceedSTSAuthenticationWithAccountInternal:(id)arg2 scope:(id)arg3 flowToken:(id)arg4;
- (_Bool)updatedAccountReceivedFromWebView:(id)arg1 account:(id)arg2;
- (void)failWithError:(id)arg1 scope:(id)arg2 existingWebView:(id)arg3 failureDelegate:(id)arg4 accountSuccessBlock:(CDUnknownBlockType)arg5 ticketSuccessBlock:(CDUnknownBlockType)arg6 signOutSuccessBlock:(CDUnknownBlockType)arg7;
- (void)failWithError:(id)arg1 failureDelegate:(id)arg2 signOutSuccessBlock:(CDUnknownBlockType)arg3;
- (void)failWithError:(id)arg1 scope:(id)arg2 failureDelegate:(id)arg3 ticketSuccessBlock:(CDUnknownBlockType)arg4;
- (void)failWithError:(id)arg1 failureDelegate:(id)arg2 accountSuccessBlock:(CDUnknownBlockType)arg3;
- (void)failWithError:(id)arg1 webView:(id)arg2;
- (void)getTicketImplementationForAccount:(id)arg1 scope:(id)arg2 flowToken:(id)arg3 skipCache:(_Bool)arg4 webView:(id)arg5 failureDelegate:(id)arg6 successBlock:(CDUnknownBlockType)arg7;
- (void)getTicketForAccount:(id)arg1 scope:(id)arg2 failureDelegate:(id)arg3 successBlock:(CDUnknownBlockType)arg4;
- (id)getSignUpViewControllerWithFailureDelegate:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (id)getSignInViewControllerWithSignInOptions:(id)arg1 failureDelegate:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (id)getSignOutViewControllerForAccount:(id)arg1 failureDelegate:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (_Bool)getAccountWithCid:(id)arg1 account:(out id *)arg2 error:(out id *)arg3;
- (void)getAccountInternalWithFailureDelegate:(id)arg1 successBlock:(CDUnknownBlockType)arg2 isPartnerApp:(_Bool)arg3;
- (void)getAccountForAuthenticatorWithFailureDelegate:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)getAccountWithFailureDelegate:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

