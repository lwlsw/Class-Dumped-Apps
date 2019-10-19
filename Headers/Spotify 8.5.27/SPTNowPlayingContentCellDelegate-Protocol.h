//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTNowPlayingContentCell, UIView;
@protocol SPTNowPlayingCoverArtContentView;

@protocol SPTNowPlayingContentCellDelegate <NSObject>
- (void)nowPlayingContentCellDidDetachVideoSurface:(SPTNowPlayingContentCell *)arg1;
- (void)nowPlayingContentCellDidAttachVideoSurface:(SPTNowPlayingContentCell *)arg1;
- (void)nowPlayingContentCell:(SPTNowPlayingContentCell *)arg1 didChangeContent:(UIView<SPTNowPlayingCoverArtContentView> *)arg2;

@optional
- (void)nowPlayingContentCellAccessoryViewTouchedUp:(SPTNowPlayingContentCell *)arg1;
@end
