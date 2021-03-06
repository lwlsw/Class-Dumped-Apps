//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion;

@interface SCSpectaclesPairingDeviceInformation : NSObject
{
    NSString *_serialNumber;
    NSString *_displayName;
    id <SCSpectaclesFirmwareVersion> _firmwareVersion;
    id <SCSpectaclesHardwareVersion> _hardwareVersion;
    unsigned long long _bleState;
    unsigned long long _btcState;
    long long _deviceColor;
}

@property(nonatomic) long long deviceColor; // @synthesize deviceColor=_deviceColor;
@property(nonatomic) unsigned long long btcState; // @synthesize btcState=_btcState;
@property(nonatomic) unsigned long long bleState; // @synthesize bleState=_bleState;
@property(retain, nonatomic) id <SCSpectaclesHardwareVersion> hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(retain, nonatomic) id <SCSpectaclesFirmwareVersion> firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void).cxx_destruct;

@end

