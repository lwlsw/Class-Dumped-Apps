//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WACloudInteractionBackupOperation_Documents.h"

@class NSFileCoordinator, NSString, WABackup;

@interface WAUploadBackupOperation_Documents : WACloudInteractionBackupOperation_Documents
{
    NSFileCoordinator *_coordinator;
    WABackup *_backup;
    NSString *_localPath;
    _Bool _failed;
    NSString *_source;
    NSString *_destination;
}

- (void).cxx_destruct;
- (_Bool)removeFileAtURL:(id)arg1;
- (_Bool)createDirectoryAtURL:(id)arg1;
- (_Bool)moveToCloud;
- (_Bool)saveBackupInformation;
- (id)buildBackupInformation;
- (id)buildExpectedSizes;
- (_Bool)succeeded;
- (void)fail;
- (void)finish;
- (void)performMoveTask;
- (void)performTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)listenForCloudStatus;
- (id)cloudStatusToObserve;
- (id)initWithBackup:(id)arg1 localPath:(id)arg2;
- (id)initWithActionManager:(id)arg1;

@end

