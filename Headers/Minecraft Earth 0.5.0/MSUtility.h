//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSUtility : NSObject
{
}

+ (id)sdkVersion;
+ (id)sdkName;
+ (id)ISO8601DateFormatter;
+ (id)dateFromISO8601:(id)arg1;
+ (id)dateToISO8601:(id)arg1;
+ (double)nowInMilliseconds;
+ (_Bool)isAppStoreReceiptSandbox;
+ (_Bool)hasEmbeddedMobileProvision;
+ (long long)currentAppEnvironment;
+ (_Bool)disableBackupForDirectoryURL:(id)arg1;
+ (_Bool)createDirectoryAtURL:(id)arg1;
+ (id)appCenterDirectoryURL;
+ (id)fullURLForPathComponent:(id)arg1;
+ (_Bool)fileExistsForPathComponent:(id)arg1;
+ (id)contentsOfDirectory:(id)arg1 propertiesForKeys:(id)arg2;
+ (id)loadDataForPathComponent:(id)arg1;
+ (id)createDirectoryForPathComponent:(id)arg1;
+ (_Bool)deleteFileAtURL:(id)arg1;
+ (_Bool)deleteItemForPathComponent:(id)arg1;
+ (id)createFileAtPathComponent:(id)arg1 withData:(id)arg2 atomically:(_Bool)arg3 forceOverwrite:(_Bool)arg4;
+ (void)sharedAppOpenUrl:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (long long)sharedAppState;
+ (id)sharedAppDelegate;
+ (id)sharedApp;
+ (long long)applicationState;

@end

