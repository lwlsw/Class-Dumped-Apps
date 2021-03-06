//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HlsPlayerView;

@protocol PlayerViewDelegate <NSObject>
- (void)playerViewDidEndPlaying:(HlsPlayerView *)arg1;
- (void)playerViewDidBeginPlaying:(HlsPlayerView *)arg1;

@optional
- (void)contentVideoView:(HlsPlayerView *)arg1 didTapCallToAction:(unsigned long long)arg2;
- (void)playerViewWillHideControls;
- (void)playerViewWillShowControls;
- (_Bool)shouldDisableAutoplay;
- (_Bool)parentIsCarouselView;
- (_Bool)shouldDisableReparenting;
- (_Bool)shouldForceAutoplay;
- (double)offsetControlBarHeight;
- (void)contentVideoRequestsClose:(HlsPlayerView *)arg1;
- (void)contentVideoRequestsPlayer:(HlsPlayerView *)arg1;
- (void)contentVideoDidTapExpand:(HlsPlayerView *)arg1;
@end

