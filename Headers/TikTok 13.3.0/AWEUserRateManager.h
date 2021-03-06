//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWEUserRateManager : NSObject
{
    _Bool _hasEnteredURL;
    long long _userRate;
    NSString *_remindText;
    NSString *_detailURL;
    long long _showDaysLimit;
    NSString *_userID;
}

+ (id)sharedManager;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool hasEnteredURL; // @synthesize hasEnteredURL=_hasEnteredURL;
@property(nonatomic) long long showDaysLimit; // @synthesize showDaysLimit=_showDaysLimit;
@property(copy, nonatomic) NSString *detailURL; // @synthesize detailURL=_detailURL;
@property(copy, nonatomic) NSString *remindText; // @synthesize remindText=_remindText;
@property(nonatomic) long long userRate; // @synthesize userRate=_userRate;
- (void).cxx_destruct;
- (void)resetUserRateData;
- (void)updateUserRateData:(id)arg1;
- (void)userRateDetailEntered;
- (void)userRateClosed;
- (_Bool)shouldShowUserRateView;
- (id)init;

@end

