//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DYAUserService : NSObject
{
}

+ (void)updateCurrentUserWithAwemeJSON:(id)arg1 passportJSON:(id)arg2;
+ (id)currentUser;
+ (void)clearAllUsers:(CDUnknownBlockType)arg1;
+ (void)clearUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)updateCurrentPassport:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)updateCurrentUserWithPassportUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)updateCurrentUser:(CDUnknownBlockType)arg1;
+ (void)fetchAwemeUser:(id)arg1 extraParams:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

