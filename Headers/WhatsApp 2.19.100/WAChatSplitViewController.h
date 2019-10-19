//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

#import "UISplitViewControllerDelegate-Protocol.h"
#import "WARestorable-Protocol.h"

@class NSString, WAChatSplitViewPlaceholderOptions, WANavigationController;

@interface WAChatSplitViewController : UISplitViewController <UISplitViewControllerDelegate, WARestorable>
{
    WANavigationController *_mainViewController;
    WAChatSplitViewPlaceholderOptions *_placeholderOptions;
}

@property(readonly, nonatomic) WAChatSplitViewPlaceholderOptions *placeholderOptions; // @synthesize placeholderOptions=_placeholderOptions;
@property(readonly, nonatomic) WANavigationController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (void).cxx_destruct;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (_Bool)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3;
- (void)showDetailViewControllers:(id)arg1;
- (void)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)newEmptyDetailNavigationController;
- (id)initWithMainViewController:(id)arg1 placeholderOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
