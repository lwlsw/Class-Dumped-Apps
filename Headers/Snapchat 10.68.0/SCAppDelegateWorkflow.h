//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCAppDelegate, SCAppDelegateColdStartGraphConfigurator, SCAppDelegateProperties, SCAppStartupState, SCFailedUserEventNotificationController;

@interface SCAppDelegateWorkflow : NSObject
{
    SCFailedUserEventNotificationController *_failedUserEventNotificationController;
    SCAppDelegate *_appDelegate;
    SCAppStartupState *_appStartupState;
    SCAppDelegateColdStartGraphConfigurator *_coldStartGraphConfigurator;
    id _structuredStartupRunner;
    SCAppDelegateProperties *_appDelegateProperties;
}

@property(readonly, nonatomic) SCAppDelegateProperties *appDelegateProperties; // @synthesize appDelegateProperties=_appDelegateProperties;
- (void).cxx_destruct;
- (void)runHockeyAppDelegateValidation;
- (long long)appStartupType;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (double)_preAppOpenLatency;
- (void)_userTriggeredEmergencyMode;
- (id)_generateAppStartupState:(id)arg1 application:(id)arg2;
- (void)_setupWindow;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)initWithAppDelegate:(id)arg1;

@end
