//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDataCoordinating-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"

@protocol SCDiscoverFeedInterestSelectionDataCoordinating <SCDataCoordinating, SCEventAnnouncing>
- (void)fetchInterestSubmissionStateWithCompletion:(void (^)(unsigned long long))arg1;
- (void)fetchInterestTopicDataWithCompletion:(void (^)(NSArray *, NSSet *))arg1;

@optional
- (void)fetchInterestTopicDataWithStateDataWithCompletion:(void (^)(NSArray *, NSDictionary *, NSArray *, unsigned long long))arg1;
@end

