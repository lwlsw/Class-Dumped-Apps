//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTOfflinePlaylistSyncWorker.h"

@class GIMMe, YTMSettings;

@interface YTMOfflinePlaylistSyncWorker : YTOfflinePlaylistSyncWorker
{
    YTMSettings *_settings;
}

- (void).cxx_destruct;
- (_Bool)workerRequirementsCanChangeAtRuntime;
- (long long)workerRequirements;
- (id)init;

// Remaining properties
@property(nonatomic) __weak GIMMe *gimme;

@end

