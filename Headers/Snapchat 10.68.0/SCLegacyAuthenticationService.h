//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyLogInUpdatesDelegate-Protocol.h"
#import "SCRegisterAccountV2ViewControllerDelegate-Protocol.h"

@class NSString, SCScopedAccess;

@interface SCLegacyAuthenticationService : NSObject <SCLegacyLogInUpdatesDelegate, SCRegisterAccountV2ViewControllerDelegate>
{
    SCScopedAccess *_unauthenticatedPreference;
}

- (void).cxx_destruct;
- (void)_emailVerificationDidSucceedWithUserSession:(id)arg1;
- (void)_phoneVerificationDidSucceedWithPhoneNumber:(id)arg1 verifyResponse:(id)arg2 userSession:(id)arg3;
- (void)userVerificationDidSucceedWithResult:(id)arg1 directUserSession:(id)arg2;
- (void)finishRegistration:(id)arg1;
- (void)registerDidSucceedWithResponse:(id)arg1 tempIdentity:(id)arg2 directUserSession:(id)arg3;
- (_Bool)hasEnteredAnEmail;
- (long long)preferredVerificationMethod;
- (void)loginDidSucceedWithResponse:(id)arg1 tempIdentity:(id)arg2 directUserSession:(id)arg3;
- (void)loginDidSucceedWithVerificationNeeded:(id)arg1;
- (void)_doLogoutRequest:(_Bool)arg1 userSession:(id)arg2;
- (void)_logoutForced:(_Bool)arg1 userSession:(id)arg2;
- (void)_logApplicationLogout:(_Bool)arg1 reason:(id)arg2;
- (void)logout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

