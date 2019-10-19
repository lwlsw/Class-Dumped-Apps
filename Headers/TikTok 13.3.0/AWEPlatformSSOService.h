//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"
#import "BDPlatformAuthLogger-Protocol.h"
#import "BDPlatformSDKApiDelegate-Protocol.h"
#import "BDPlatformSDKOAuthDelegate-Protocol.h"

@class AWEUILoadingView, AWEUserContext, BDPlatformSDKConfiguration, NSString, UIWindow;

@interface AWEPlatformSSOService : NSObject <BDPlatformSDKApiDelegate, BDPlatformAuthLogger, BDPlatformSDKOAuthDelegate, AWEUserMessage>
{
    _Bool _isInAuthorzieLogin;
    _Bool _isInRequireLogin;
    _Bool _isInLoginExprired;
    BDPlatformSDKConfiguration *_currentConfig;
    CDUnknownBlockType _loginCompletionBlock;
    AWEUserContext *_context;
    AWEUILoadingView *_loadingView;
    UIWindow *_keyWindow;
    UIWindow *_oauthWindow;
}

+ (void)nativeOAuthFormWapParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (_Bool)isInRequireLogin;
+ (_Bool)isInAuthorizeLogin;
+ (_Bool)handleOpenURL:(id)arg1;
+ (void)startConfiguration;
+ (id)sharedInstance;
@property(retain, nonatomic) UIWindow *oauthWindow; // @synthesize oauthWindow=_oauthWindow;
@property(retain, nonatomic) UIWindow *keyWindow; // @synthesize keyWindow=_keyWindow;
@property(nonatomic) _Bool isInLoginExprired; // @synthesize isInLoginExprired=_isInLoginExprired;
@property(nonatomic) _Bool isInRequireLogin; // @synthesize isInRequireLogin=_isInRequireLogin;
@property(nonatomic) _Bool isInAuthorzieLogin; // @synthesize isInAuthorzieLogin=_isInAuthorzieLogin;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWEUserContext *context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType loginCompletionBlock; // @synthesize loginCompletionBlock=_loginCompletionBlock;
@property(retain, nonatomic) BDPlatformSDKConfiguration *currentConfig; // @synthesize currentConfig=_currentConfig;
- (void).cxx_destruct;
- (void)onFinishAuthorization:(id)arg1 type:(int)arg2 success:(_Bool)arg3 error:(id)arg4;
- (void)onCommitAuthorization:(id)arg1;
- (void)onCancelAuthorization:(id)arg1;
- (void)onShowAuthViewController:(id)arg1;
- (id)parentViewController;
- (id)userName;
- (id)userHeadImage;
- (void)askForLoginWithShareReq:(id)arg1;
- (void)askForLoginWithAuthReq:(id)arg1;
- (_Bool)askForLoginDidReceiveReq:(id)arg1 loginCompletion:(CDUnknownBlockType)arg2;
- (void)popOAuthVCIfNeeded;
- (void)presentOAuthVCInNewWindow:(id)arg1;
- (void)nativeOAuthFormWapParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)authViewControllerViewDidLoadNotification:(id)arg1;
- (void)awe_endLoading;
- (void)awe_handleCancel;
- (void)awe_handleLoginCompletion;
- (_Bool)awe_handleOpenURL:(id)arg1;
- (void)handlerTheme;
- (void)didFinishLogout;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
