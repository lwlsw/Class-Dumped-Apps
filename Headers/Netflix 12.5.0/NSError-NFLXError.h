//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (NFLXError)
+ (id)nflx_errorUnauthorizedWithError:(id)arg1;
+ (id)nflx_errorAgeVerificationNeededError;
+ (id)nflx_errorPINVerificationCanceledError;
+ (id)nflx_errorPINVerificationRequiredError;
+ (id)nflx_errorVideoTimeout;
+ (id)nflx_errorUnauthorizedError;
+ (id)nflx_errorUnspecifiedWithError:(id)arg1 reason:(id)arg2;
+ (id)nflx_errorUnspecified:(id)arg1;
+ (id)nflx_errorUnspecifiedWithUserInfo:(id)arg1;
+ (id)nflx_error:(long long)arg1 userInfo:(id)arg2;
+ (id)mdxUi_playErrorWithMdxError:(id)arg1;
+ (id)mdxUi_playFailedError;
+ (id)mdxUi_connectErrorWithMdxError:(id)arg1;
+ (id)mdxUi_connectFailedError;
+ (id)mdxUi_errorWithDomain:(id)arg1 mdxError:(id)arg2;
+ (id)mdxUi_targetUnavailableErrorWithDomain:(id)arg1;
- (id)nflx_titleKey;
- (id)nflx_descriptionKey;
- (id)nflx_debugRecoverySuggestion;
- (id)nflx_underlyingError;
- (_Bool)nflx_isNetworkError;
- (id)rlmSync_clientResetBackedUpRealmPath;
- (CDUnknownBlockType)rlmSync_deleteRealmBlock;
- (CDUnknownBlockType)rlmSync_clientResetBlock;
@end
