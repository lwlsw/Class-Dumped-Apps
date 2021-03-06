//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray;

@protocol ListingViewBatchUpdateProtocol <NSObject>
@property(retain, nonatomic) NSMutableArray *currentUpdateQueue;
- (void)reloadDataSafelyWithObjects:(NSArray *)arg1 objectCompletion:(void (^)(void))arg2;
- (void)reloadDataSafelyWithCompletion:(void (^)(void))arg1;
- (void)markQueueAsFreeAndTriggerNextUpdate;
- (void)queueNewObjects:(NSArray *)arg1 completion:(void (^)(void))arg2;
@end

