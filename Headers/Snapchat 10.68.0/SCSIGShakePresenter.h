//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCShakeToReportPresenting-Protocol.h"

@class SCUserSession;

@interface SCSIGShakePresenter : NSObject <SCShakeToReportPresenting>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)presentReportScreenWithTopViewController:(id)arg1 withCapturedData:(id)arg2;
- (void)presentReportViewControllerWithNavigationController:(id)arg1 delegate:(id)arg2 mode:(long long)arg3;
- (void)presentSettingScreenSelectWithNavigationController:(id)arg1 mode:(long long)arg2;
- (id)initWithUsersession:(id)arg1;

@end
