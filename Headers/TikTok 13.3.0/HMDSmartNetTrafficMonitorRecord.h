//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDMonitorRecord.h"

@interface HMDSmartNetTrafficMonitorRecord : HMDMonitorRecord
{
    unsigned int _value;
    long long _isSend;
    long long _isWifiNetType;
    long long _isFront;
    double _startTime;
    double _endTime;
    long long _sid;
}

+ (id)aggregateDataWithRecords:(id)arg1;
@property(nonatomic) long long sid; // @synthesize sid=_sid;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long isFront; // @synthesize isFront=_isFront;
@property(nonatomic) long long isWifiNetType; // @synthesize isWifiNetType=_isWifiNetType;
@property(nonatomic) long long isSend; // @synthesize isSend=_isSend;
@property(nonatomic) unsigned int value; // @synthesize value=_value;
- (id)reportDictionary;
- (id)reportDictionaryForLogTyepe:(id)arg1;

@end
