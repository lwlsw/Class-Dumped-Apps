//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSIndexSet, WAStreamingMediaLoader;

@protocol WAStreamingMediaLoaderDelegate <NSObject>
- (void)streamingMediaLoader:(WAStreamingMediaLoader *)arg1 populatedDownloadEvents:(NSArray *)arg2;
- (_Bool)streamingMediaLoaderDidRequestSave:(WAStreamingMediaLoader *)arg1 forFileMap:(NSIndexSet *)arg2;
- (void)streamingMediaLoaderDidVerifyFileSize:(WAStreamingMediaLoader *)arg1 fileSize:(unsigned long long)arg2;
- (void)streamingMediaLoaderDidBeginPlayback:(WAStreamingMediaLoader *)arg1;
- (void)didFetchThumbnailThatNeedsReloadingInStreamingMediaLoader:(WAStreamingMediaLoader *)arg1;
- (void)didUpdateDownloadProgressOfStreamingMediaLoader:(WAStreamingMediaLoader *)arg1 bytesDownloaded:(unsigned long long)arg2;
- (void)didFailToLoadInStreamingMediaLoader:(WAStreamingMediaLoader *)arg1 error:(NSError *)arg2;
- (void)didFinishLoadingInStreamingMediaLoader:(WAStreamingMediaLoader *)arg1;
- (void)streamingMediaLoaderDidRequestRemove:(WAStreamingMediaLoader *)arg1;
- (void)streamingMediaLoaderDidRequestAdd:(WAStreamingMediaLoader *)arg1;
@end

