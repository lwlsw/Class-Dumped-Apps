//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TIMAppFileManager)
+ (unsigned long long)tim_fileSize:(id)arg1 error:(id *)arg2;
+ (id)tim_attributesOfItemAtPath:(id)arg1 error:(id *)arg2;
- (id)tim_chatFileFolderForUser:(long long)arg1;
- (id)tim_chatFileFolder;
- (id)tim_pathForTemporaryFile:(id)arg1;
- (id)tim_pathForOfflineFile:(id)arg1;
- (id)tim_pathForCacheFile:(id)arg1;
- (id)tim_pathForPrivateFile:(id)arg1;
- (id)tim_pathForPublicFile:(id)arg1;
- (void)tim_cleanDirectory:(id)arg1;
- (void)tim_createDirectoryIfNeeded:(id)arg1;
- (unsigned long long)tim_folderSize:(id)arg1;
- (void)tim_cleanCache;
- (void)tim_cleanWorkspace;
- (id)tim_workplacePath;
- (id)tim_temporaryDataPath;
- (id)tim_offlineDataPath;
- (id)tim_cacheDataPath;
- (id)tim_privateDataPath;
- (id)tim_publicDataPath;
@end

