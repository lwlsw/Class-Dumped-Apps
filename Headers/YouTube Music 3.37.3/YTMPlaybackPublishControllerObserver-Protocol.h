//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage, YTIPlaybackIdMatcher, YTMPlaybackPublishController;

@protocol YTMPlaybackPublishControllerObserver <NSObject>
- (void)playbackPublishController:(YTMPlaybackPublishController *)arg1 currentPlaybackIDWillChangeForPlaybackIDMatcher:(YTIPlaybackIdMatcher *)arg2;
- (void)playbackPublishController:(YTMPlaybackPublishController *)arg1 playerStateChangedTo:(long long)arg2 playbackControllerState:(int)arg3 playbackIDMatcher:(YTIPlaybackIdMatcher *)arg4;

@optional
- (void)playbackPublishController:(YTMPlaybackPublishController *)arg1 artworkDidChange:(UIImage *)arg2;
- (void)playbackPublishController:(YTMPlaybackPublishController *)arg1 mediaTimeDidChange:(double)arg2;
@end

