//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CHRSiriShortcutsMetrics : NSObject
{
}

+ (id)shortcutTypeForIntent:(id)arg1;
+ (id)shortcutTypeForUserActivity:(id)arg1;
+ (id)shortcutTypeForVoiceShortcut:(id)arg1;
+ (void)logSiriEvent:(int)arg1 withShortcutType:(id)arg2 totalVoiceShortcuts:(int)arg3;
+ (void)logSiriShortcutEvent:(int)arg1 withShortcutType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)logSiriShortcutEvent:(int)arg1 withShortcutType:(id)arg2;
+ (void)logUserDeletedVoiceShortcutInSettingsAppWithTotalShortcuts:(int)arg1;
+ (void)logUserCreatedVoiceShortcutInSettingsAppWithTotalShortcuts:(int)arg1;
+ (void)logUserClearedAllDonations;
+ (void)logIntentDonated:(id)arg1;
+ (void)logSuggestionDonatedWithActivityType:(id)arg1;
+ (void)logUserExecutedBackgroundIntent:(id)arg1;
+ (void)logUserExecutedShortcut:(id)arg1;
+ (void)logUserDeletedVoiceShortcut:(id)arg1;
+ (void)logUserCreatedVoiceShortcut:(id)arg1;
+ (void)logUserViewedManager;

@end
