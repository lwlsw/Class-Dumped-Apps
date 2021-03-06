//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface MSAAuthenticationError : NSError
{
    int _internalCode;
}

+ (id)argumentInvalidError:(id)arg1;
+ (id)accountNotFoundErrorWithCid:(id)arg1;
+ (id)internalErrorWithCode:(int)arg1 underlyingError:(id)arg2 descriptionFormat:(id)arg3;
+ (id)internalErrorWithUnderlyingError:(id)arg1 descriptionFormat:(id)arg2;
+ (id)internalErrorWithCode:(int)arg1 descriptionFormat:(id)arg2;
+ (id)internalErrorWithDescription:(id)arg1;
+ (id)errorFromAuthInfo:(id)arg1;
+ (long long)xblSignInResultFromMSAErrorCode:(int)arg1;
+ (id)xblErrorWithCode:(int)arg1;
- (int)internalCode;
- (id)localizedDescription;
- (id)description;
- (id)underlyingError;
- (id)initWithCode:(int)arg1 internalCode:(int)arg2 underlyingError:(id)arg3 descriptionFormat:(id)arg4 arguments:(char *)arg5;
- (id)initWithInternalCode:(int)arg1 underlyingError:(id)arg2 descriptionFormat:(id)arg3;
- (id)initWithCode:(int)arg1 underlyingError:(id)arg2 descriptionFormat:(id)arg3;
- (id)initWithCode:(int)arg1 descriptionFormat:(id)arg2;
- (id)init;
- (long long)xblSignInResult;

@end

