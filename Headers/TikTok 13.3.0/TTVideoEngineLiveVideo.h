//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TTVideoEngineLiveVideo : NSObject
{
    NSMutableArray *_liveURLInfos;
    long long _backupStatus;
    long long _liveStatus;
    long long _status;
    long long _startTime;
    long long _endTime;
}

@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(nonatomic) long long backupStatus; // @synthesize backupStatus=_backupStatus;
@property(retain, nonatomic) NSMutableArray *liveURLInfos; // @synthesize liveURLInfos=_liveURLInfos;
- (void).cxx_destruct;
- (id)allURLForVideoID:(id)arg1 transformedURL:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1;

@end

