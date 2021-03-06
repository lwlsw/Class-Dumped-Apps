//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SPTask, UIView, UIViewController;
@protocol SPTContextMenuPresenterFactory;

@protocol SPTSleepTimerContextMenuActionsProvider <NSObject>
- (SPTask *)viewSleepTimerOptionsWithViewController:(UIViewController *)arg1 senderView:(UIView *)arg2 contextMenuPresenter:(id <SPTContextMenuPresenterFactory>)arg3 logContext:(NSString *)arg4 isPodcastContext:(_Bool)arg5;
- (NSString *)contextMenuTitle;
- (NSArray *)allActionsForTracks;
- (NSArray *)allActionsForPodcasts;
@end

