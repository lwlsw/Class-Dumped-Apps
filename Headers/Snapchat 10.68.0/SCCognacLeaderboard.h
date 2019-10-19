//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString, NSURL;

@interface SCCognacLeaderboard : NSObject <NSCopying>
{
    NSString *_leaderboardId;
    NSString *_name;
    NSURL *_logoURL;
    long long _scoreDecimalOffset;
    long long _orderingType;
    NSDate *_lastUpdateDate;
    NSString *_appId;
    NSURL *_scoreIconURL;
}

@property(readonly, copy, nonatomic) NSURL *scoreIconURL; // @synthesize scoreIconURL=_scoreIconURL;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, copy, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(readonly, nonatomic) long long orderingType; // @synthesize orderingType=_orderingType;
@property(readonly, nonatomic) long long scoreDecimalOffset; // @synthesize scoreDecimalOffset=_scoreDecimalOffset;
@property(readonly, copy, nonatomic) NSURL *logoURL; // @synthesize logoURL=_logoURL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *leaderboardId; // @synthesize leaderboardId=_leaderboardId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLeaderboardId:(id)arg1 name:(id)arg2 logoURL:(id)arg3 scoreDecimalOffset:(long long)arg4 orderingType:(long long)arg5 lastUpdateDate:(id)arg6 appId:(id)arg7 scoreIconURL:(id)arg8;

@end
