//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSASecureRandomGenerator : NSObject
{
}

+ (id)getSecRandomCopyBytesError;
+ (_Bool)nextInt:(out int *)arg1 maxValue:(int)arg2 error:(out id *)arg3;
+ (_Bool)createNonce:(out id *)arg1 error:(out id *)arg2;

@end

