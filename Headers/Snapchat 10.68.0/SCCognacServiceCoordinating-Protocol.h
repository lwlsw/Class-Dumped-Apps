//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol SCCognacServiceCoordinating <NSObject>
- (void)batchGetChatDockWithConversationIds:(NSArray *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSError *, NSArray *))arg3;
- (void)getAppIfNotInAppsListWithAppId:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSError *, SCCognacAppDataModel *))arg3;
@end

