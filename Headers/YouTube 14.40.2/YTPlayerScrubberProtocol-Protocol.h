//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol YTPlayerScrubberProtocol <NSObject>
- (void)setPlaybackInSyncWithLivePlayhead:(_Bool)arg1;
- (void)setAirPlayAllowed:(_Bool)arg1;
- (void)setMinimumSeekableTime:(double)arg1 maximumSeekableTime:(double)arg2;
- (void)setMediaTime:(double)arg1;
- (void)setDownloadedTime:(double)arg1;
- (void)setTotalTime:(double)arg1;

@optional
- (void)setScrubberTime:(double)arg1;
@end

