//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentityLagunaLagunaDevice-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUIdentityLagunaLagunaDevice : NSObject <SOJUIdentityLagunaLagunaDevice>
{
    NSString *_serialNumber;
    NSNumber *_color;
    NSNumber *_deviceNumber;
    NSString *_displayName;
    NSString *_firmwareVersion;
    NSNumber *_lastNameUpdatedTimestamp;
    NSString *_pairStatus;
    NSNumber *_lastPairStatusUpdatedTimestamp;
    NSNumber *_firstPairedTimestamp;
    NSString *_hardwareVersion;
    NSNumber *_autoSaveCameraRoll;
    NSNumber *_preferredExportType;
    NSArray *_contextNotificationSettings;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *contextNotificationSettings; // @synthesize contextNotificationSettings=_contextNotificationSettings;
@property(readonly, copy, nonatomic) NSNumber *preferredExportType; // @synthesize preferredExportType=_preferredExportType;
@property(readonly, copy, nonatomic) NSNumber *autoSaveCameraRoll; // @synthesize autoSaveCameraRoll=_autoSaveCameraRoll;
@property(readonly, copy, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(readonly, copy, nonatomic) NSNumber *firstPairedTimestamp; // @synthesize firstPairedTimestamp=_firstPairedTimestamp;
@property(readonly, copy, nonatomic) NSNumber *lastPairStatusUpdatedTimestamp; // @synthesize lastPairStatusUpdatedTimestamp=_lastPairStatusUpdatedTimestamp;
@property(readonly, copy, nonatomic) NSString *pairStatus; // @synthesize pairStatus=_pairStatus;
@property(readonly, copy, nonatomic) NSNumber *lastNameUpdatedTimestamp; // @synthesize lastNameUpdatedTimestamp=_lastNameUpdatedTimestamp;
@property(readonly, copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSNumber *deviceNumber; // @synthesize deviceNumber=_deviceNumber;
@property(readonly, copy, nonatomic) NSNumber *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSerialNumber:(id)arg1 color:(id)arg2 deviceNumber:(id)arg3 displayName:(id)arg4 firmwareVersion:(id)arg5 lastNameUpdatedTimestamp:(id)arg6 pairStatus:(id)arg7 lastPairStatusUpdatedTimestamp:(id)arg8 firstPairedTimestamp:(id)arg9 hardwareVersion:(id)arg10 autoSaveCameraRoll:(id)arg11 preferredExportType:(id)arg12 contextNotificationSettings:(id)arg13;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)preferredExportTypeEnum;
- (int)preferredExportTypeValue;
- (_Bool)autoSaveCameraRollValue;
- (long long)firstPairedTimestampValue;
- (long long)lastPairStatusUpdatedTimestampValue;
- (long long)pairStatusEnum;
- (long long)lastNameUpdatedTimestampValue;
- (int)deviceNumberValue;
- (long long)colorEnum;
- (int)colorValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

