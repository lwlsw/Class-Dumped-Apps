//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSnapSaver : NSObject
{
}

+ (id)shared;
- (id)_fetchSnapchatAlbums;
- (void)logSnapSaveEventWithError:(id)arg1 context:(id)arg2 isVideo:(_Bool)arg3 isVideoFiltered:(_Bool)arg4 videoDuration:(double)arg5 otherParameters:(id)arg6;
- (void)logSnapSaveEventStart:(id)arg1;
- (void)fetchAndLogAlbumSize;
- (void)finishedSavingToAlbumWithError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveSnapVideoAtURLToSnapAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 deleteAfterSaving:(_Bool)arg3;
- (void)saveSnapImageToSnapAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

