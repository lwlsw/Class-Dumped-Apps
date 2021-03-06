//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWEUserModel, AWEUserRelationContext, NSString;

@protocol AWEUserRelationService <HTSService>
+ (void)removeFans:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
+ (void)unfollow:(AWEUserModel *)arg1 completion:(void (^)(long long, NSError *))arg2;
+ (void)follow:(AWEUserRelationContext *)arg1 completion:(void (^)(AWEUserRelationResponse *, NSError *))arg2;
+ (void)unblock:(NSString *)arg1 completion:(void (^)(long long, NSError *))arg2;
+ (void)block:(NSString *)arg1 completion:(void (^)(long long, NSError *))arg2;
+ (void)reject:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
+ (void)approve:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

