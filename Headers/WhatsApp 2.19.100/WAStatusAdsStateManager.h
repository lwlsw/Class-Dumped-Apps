//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSUserDefaults, WAChatStorage, WAStatusAdsPolicy;
@protocol OS_dispatch_queue, WAServerDate;

@interface WAStatusAdsStateManager : NSObject
{
    WAChatStorage *_chatStorage;
    NSUserDefaults *_userDefaults;
    NSNumber *_mediaSeenSinceLastAdDisplayed;
    NSNumber *_rowsSeenSinceLastAdDisplayed;
    WAStatusAdsPolicy *_policy;
    NSDate<WAServerDate> *_dateLatestAdDisplayed;
    NSDate<WAServerDate> *_dateLatestEmptyAdResponse;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (_Bool)shouldRequestStatusAds;
@property(copy, nonatomic) WAStatusAdsPolicy *policy; // @synthesize policy=_policy;
- (unsigned long long)totalStatusMedia;
- (unsigned long long)totalStatusRows;
@property(retain, nonatomic) NSDate<WAServerDate> *dateLatestEmptyAdResponse; // @synthesize dateLatestEmptyAdResponse=_dateLatestEmptyAdResponse;
@property(retain, nonatomic) NSDate<WAServerDate> *dateLatestAdDisplayed; // @synthesize dateLatestAdDisplayed=_dateLatestAdDisplayed;
@property(nonatomic) unsigned long long rowsSeenSinceLastAdDisplayed;
@property(nonatomic) unsigned long long mediaSeenSinceLastAdDisplayed;
- (void)emptyAdResponseWasReceived;
- (id)initWithQueue:(id)arg1 chatStorage:(id)arg2 userDefaults:(id)arg3;

@end

