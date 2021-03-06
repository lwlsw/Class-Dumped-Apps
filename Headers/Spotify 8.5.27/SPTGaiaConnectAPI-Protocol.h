//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SPTGaiaConnectObserver, SPTGaiaDeviceProtocol, SPTGaiaLocalDeviceProtocol;

@protocol SPTGaiaConnectAPI <NSObject>
@property(readonly, nonatomic) NSString *activeDeviceDisplayName;
@property(readonly, nonatomic) long long connectionState;
@property(readonly, nonatomic) long long activeConnectionType;
@property(readonly, nonatomic) _Bool canConnectToAnyDevice;
@property(readonly, nonatomic) id <SPTGaiaDeviceProtocol> deviceBeingActivated;
@property(readonly, nonatomic) id <SPTGaiaLocalDeviceProtocol> localDevice;
@property(readonly, nonatomic) id <SPTGaiaDeviceProtocol> activeDevice;
@property(readonly, nonatomic) NSArray *devices;
- (void)removeObserver:(id <SPTGaiaConnectObserver>)arg1;
- (void)addObserver:(id <SPTGaiaConnectObserver>)arg1;
- (id <SPTGaiaDeviceProtocol>)findDeviceWithPhysicalIdentifier:(NSString *)arg1;
- (id <SPTGaiaDeviceProtocol>)findDeviceWithIdentifier:(NSString *)arg1;
- (void)renameDevice:(id <SPTGaiaDeviceProtocol>)arg1 name:(NSString *)arg2 responseBlock:(void (^)(_Bool, NSError *))arg3;
- (void)deactivateActiveDeviceWithResponseBlock:(void (^)(_Bool, NSError *))arg1;
- (void)activateDevice:(id <SPTGaiaDeviceProtocol>)arg1 responseBlock:(void (^)(_Bool, NSError *))arg2;
@end

