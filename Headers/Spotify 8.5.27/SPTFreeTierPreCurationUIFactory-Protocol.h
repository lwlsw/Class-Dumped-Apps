//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SPTFreeTierPreCurationQuickActionView;

@protocol SPTFreeTierPreCurationUIFactory <NSObject>
- (void)configurePreviewTrackQuickActionsView:(SPTFreeTierPreCurationQuickActionView *)arg1 isLiked:(_Bool)arg2 isBanned:(_Bool)arg3 itemURL:(NSURL *)arg4;
- (void)configureQuickActionsView:(SPTFreeTierPreCurationQuickActionView *)arg1 isLiked:(_Bool)arg2 isBanned:(_Bool)arg3 isRecommendation:(_Bool)arg4 isPreviewItem:(_Bool)arg5 itemURL:(NSURL *)arg6;
- (SPTFreeTierPreCurationQuickActionView *)createQuickActionsView;
@end
