//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCAppUserLifecycleEventObserver <NSObject>
- (void)onAppWillTerminate;
- (void)onAppDidEnterBackground;
- (void)onAppWillResignActive;
- (void)onAppDidBecomeActive;
- (void)onAppWillEnterForeground;
- (void)onAppDidFinishLaunching;
- (void)onUserResumed:(_Bool)arg1 didLaunchWithDataUnavailable:(_Bool)arg2;
- (void)onUserRegistered;
- (void)onUserLoggedIn;
@end

