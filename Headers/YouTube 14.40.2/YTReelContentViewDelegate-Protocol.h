//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YTICommand, YTReelContentView;

@protocol YTReelContentViewDelegate <NSObject>
- (void)reelContentView:(YTReelContentView *)arg1 requestsShowCommentsWithEndpoint:(YTICommand *)arg2;
- (void)reelContentView:(YTReelContentView *)arg1 accessibilityControlTapped:(long long)arg2;
- (void)reelContentViewRequestsResumePlayback:(YTReelContentView *)arg1;
- (void)reelContentViewRequestsPausePlayback:(YTReelContentView *)arg1;
- (void)reelContentViewDidTapBack:(YTReelContentView *)arg1;
- (void)reelContentViewDidTapForward:(YTReelContentView *)arg1;
@end

