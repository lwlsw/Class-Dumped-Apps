//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBRemoteAlertAdapter;

@interface SBUIAnimationForAlertAnimationProvider : SBUIMainScreenAnimationController
{
    id <SBWorkspaceAlertAnimationProviding> _alert;
    _Bool _visible;
    SBRemoteAlertAdapter *_remoteAlert;
}

- (void).cxx_destruct;
- (void)_animateRemoteAlertWallpaperStyle;
- (void)_animateStatusBar;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (id)animationSettings;
- (id)initWithTransitionContextProvider:(id)arg1 alert:(id)arg2 visible:(_Bool)arg3;

@end
