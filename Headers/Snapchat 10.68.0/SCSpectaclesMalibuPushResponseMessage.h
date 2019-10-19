//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSpectaclesResponseMessage.h"

@class MLBSpectaclesPushMessage;

@interface SCSpectaclesMalibuPushResponseMessage : SCSpectaclesResponseMessage
{
    MLBSpectaclesPushMessage *_pushMessage;
}

@property(readonly, nonatomic) MLBSpectaclesPushMessage *pushMessage; // @synthesize pushMessage=_pushMessage;
- (void).cxx_destruct;
- (_Bool)encryptionLayerFailure;
- (id)mediaCount;
- (_Bool)videoRecordingHasStarted;
- (unsigned long long)uploadToCloudEvent;
- (id)wifiFrequency;
- (id)ipAddress;
- (long long)bluetoothEvent;
- (_Bool)hasBluetoothEvent;
- (_Bool)charging;
- (_Bool)hasCharging;
- (_Bool)hasNrfError;
- (unsigned long long)nrfErrorType;
- (id)crashReports;
- (long long)responseStatus;
- (id)initWithPushMessage:(id)arg1;

@end
