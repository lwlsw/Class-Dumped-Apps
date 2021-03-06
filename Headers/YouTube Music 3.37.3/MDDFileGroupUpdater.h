//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDDFileExpiration, MDDNotificationHelpers;
@protocol MDDConfigurationFlags><MDDConfigurationLogger><MDDConfigurationInstanceID><MDDConfigurationBundleID><MDDConfigurationStorageEnvironment;

@interface MDDFileGroupUpdater : NSObject
{
    id <MDDConfigurationFlags><MDDConfigurationLogger><MDDConfigurationInstanceID><MDDConfigurationBundleID><MDDConfigurationStorageEnvironment> _configuration;
    MDDNotificationHelpers *_notificationHelpers;
    MDDFileExpiration *_fileExpiration;
}

+ (id)updaterWithFileExpiration:(id)arg1 configuration:(id)arg2;
- (void).cxx_destruct;
- (_Bool)unlockedUpdateAllFilesDoneForFilegroup:(id)arg1 withURL:(id)arg2;
- (void)updateAll;
- (void)updateOneFilegroup:(id)arg1;
- (_Bool)createSymlinkDirectoryForfileGroup:(id)arg1 fileGroupURL:(id)arg2;
- (id)initWithFileExpiration:(id)arg1 configuration:(id)arg2;

@end

