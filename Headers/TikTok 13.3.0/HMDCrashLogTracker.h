//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface HMDCrashLogTracker : NSObject
{
    _Bool _isSendingLogs;
    NSString *_logDirPath;
    NSObject<OS_dispatch_queue> *_log_queue;
}

@property(nonatomic) _Bool isSendingLogs; // @synthesize isSendingLogs=_isSendingLogs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *log_queue; // @synthesize log_queue=_log_queue;
- (void).cxx_destruct;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)cleanupEmptyDirectoryWithSessionIDs:(id)arg1;
- (_Bool)isEmptyDirectory:(id)arg1;
- (_Bool)deleteDirectoryIfEmpty:(id)arg1;
- (void)cleanupEmptyDirectory;
- (void)cleanUpWithFileMap:(id)arg1;
- (id)fixedDictForUpload:(id)arg1;
- (id)constructPostDataWithFileNames:(id)arg1 sessionID:(id)arg2;
- (id)constructPostDataWithFileMap:(id)arg1;
- (id)collectFileNamesWithSessionID:(id)arg1;
- (id)fileMapWithSessionIDs:(id)arg1;
- (id)collectAllValidSessionIDs;
- (id)sessionPath:(id)arg1;
- (void)sendLogsIfNeed;
- (void)logWithDict:(id)arg1 sessionID:(id)arg2 event:(id)arg3 eventType:(id)arg4;
- (void)setupStaticInfo;
@property(readonly, copy, nonatomic) NSString *logDirPath; // @synthesize logDirPath=_logDirPath;
- (id)init;
- (void)dealloc;

@end
