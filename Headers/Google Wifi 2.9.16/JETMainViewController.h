//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOPanelViewController.h"

#import "GHKViewControllerDelegate-Protocol.h"
#import "GOOSideViewControllerDelegate-Protocol.h"
#import "JETOOBENavigationControllerDelegate-Protocol.h"
#import "JETRootNavigation-Protocol.h"

@class JETPersistentStorageManager, JETSideViewItemDataSource, JETUserStateManager, NSString;

@interface JETMainViewController : GOOPanelViewController <GOOSideViewControllerDelegate, GHKViewControllerDelegate, JETRootNavigation, JETOOBENavigationControllerDelegate>
{
    JETSideViewItemDataSource *_menuDataSource;
    JETUserStateManager *_userStateManager;
    NSString *_currentUserId;
    JETPersistentStorageManager *_storageManager;
}

@property(readonly, nonatomic) JETPersistentStorageManager *storageManager; // @synthesize storageManager=_storageManager;
@property(copy, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
@property(retain, nonatomic) JETUserStateManager *userStateManager; // @synthesize userStateManager=_userStateManager;
@property(retain, nonatomic) JETSideViewItemDataSource *menuDataSource; // @synthesize menuDataSource=_menuDataSource;
- (void).cxx_destruct;
- (void)OOBECancelledForUserState:(id)arg1;
- (void)OOBEDidFinishForUserState:(id)arg1 withGroup:(id)arg2;
- (void)navigateToGroup:(id)arg1 forUserState:(id)arg2;
- (void)navigateToFallbackGroupOrOOBEForUserState:(id)arg1;
- (void)exitHelpKitWithStatus:(long long)arg1;
- (void)displayHelpCenterContext:(id)arg1;
- (void)reloadMenuItems;
- (void)handleSwitchToIdentity:(id)arg1;
- (id)identityForSideViewProfile:(id)arg1;
- (id)sideViewProfileForIdentity:(id)arg1;
- (void)sideViewController:(id)arg1 requestedSwitchToProfile:(id)arg2 profileIndex:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sideViewControllerShowManageProfilesView:(id)arg1;
- (void)sideViewControllerShowSignInView:(id)arg1;
- (void)sideViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)performActionAtIndexPath:(id)arg1;
- (id)init;
- (id)initWithMenuDataSource:(id)arg1 userStateManager:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

