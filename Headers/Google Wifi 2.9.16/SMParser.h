//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SMParser : NSObject
{
}

+ (id)parseSignCryptedMessage:(id)arg1 verificationKey:(id)arg2 signatureScheme:(int)arg3 decryptionKey:(id)arg4 encryptionScheme:(int)arg5 assocatedData:(id)arg6;
+ (id)parseCleartextMessage:(id)arg1 verificationKey:(id)arg2 signatureScheme:(int)arg3 assocatedData:(id)arg4;
+ (id)unverifiedHeaderFromSecureMessage:(id)arg1;

@end

