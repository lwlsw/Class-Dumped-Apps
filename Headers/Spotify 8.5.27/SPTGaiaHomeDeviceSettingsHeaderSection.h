//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

@class SPTGaiaHomeDeviceManager;

@interface SPTGaiaHomeDeviceSettingsHeaderSection : SettingsSection
{
    SPTGaiaHomeDeviceManager *_savedDeviceManager;
}

@property(readonly, nonatomic) SPTGaiaHomeDeviceManager *savedDeviceManager; // @synthesize savedDeviceManager=_savedDeviceManager;
- (void).cxx_destruct;
- (id)footerText;
- (id)headerText;
- (long long)numberOfRows;
- (id)initWithSettingsViewController:(id)arg1 savedDeviceManager:(id)arg2;

@end
