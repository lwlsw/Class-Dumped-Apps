//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;

@protocol AnalyticsViewProtocol <NSObject>
@property(readonly, nonatomic) NSDictionary *analyticsScrollEventParameters;
@property(readonly, nonatomic) NSDictionary *analyticsScreenViewParameters;
@property(readonly, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, nonatomic) NSString *analyticsPageType;
@property(readonly, nonatomic) _Bool screenViewLoggingEnabled;
@property(copy, nonatomic) NSString *analyticsReason;
@property(copy, nonatomic) NSString *analyticsSource;
@property(copy, nonatomic) NSURL *analyticsReferringURL;
@end
