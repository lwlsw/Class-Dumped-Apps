//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, SPTNowPlayingTrackMetadataQueue;

@protocol SPTNowPlayingTrackMetadataQueueObserver <NSObject>

@optional
- (void)trackMetadataQueueDidSynchronizeQueue:(SPTNowPlayingTrackMetadataQueue *)arg1;
- (void)trackMetadataQueuePreviousTrackDidChange:(SPTNowPlayingTrackMetadataQueue *)arg1;
- (void)trackMetadataQueueNextTrackDidChange:(SPTNowPlayingTrackMetadataQueue *)arg1;
- (void)trackMetadataQueueWillSkipToNextTrack:(SPTNowPlayingTrackMetadataQueue *)arg1;
- (void)trackMetadataQueueDidFinishUpdating:(SPTNowPlayingTrackMetadataQueue *)arg1;
- (void)trackMetadataQueue:(SPTNowPlayingTrackMetadataQueue *)arg1 didMoveToRelativeTrack:(NSNumber *)arg2;
@end
