//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NetworkingEventObserver : NSObject
{
}

+ (void)redditServiceTokenRefreshFailed:(id)arg1;
+ (void)redditServiceBackoffReset:(id)arg1;
+ (void)redditServiceBackoffIncremented:(id)arg1;
+ (void)redditServiceBackoffEnforced:(id)arg1;
+ (void)redditServiceMissingToken:(id)arg1;
+ (void)handleEmployeeHomeFeedError:(id)arg1;
+ (void)redditServiceDidReceiveError:(id)arg1;
+ (void)load;

@end
