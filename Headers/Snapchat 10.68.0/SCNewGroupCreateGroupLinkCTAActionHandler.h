//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCGroupNameRequiredAlertView, SCSendToNewGroupDataRepository, SCSendToSelectionStateManager, SCUnifiedActionMenuPresenter;
@protocol SCActionHandling, SCGroupManager, SCNewGroupViewControlling;

@interface SCNewGroupCreateGroupLinkCTAActionHandler : NSObject <SCActionHandling>
{
    id <SCNewGroupViewControlling> _presentingViewController;
    id <SCActionHandling> _createAndDeleteGroupLinkActionHandler;
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
    SCSendToSelectionStateManager *_selectionStateManager;
    SCSendToNewGroupDataRepository *_newGroupDataRepository;
    id <SCGroupManager> _groupManager;
    NSString *_baseGroupId;
    SCGroupNameRequiredAlertView *_groupNameRequiredAlertView;
}

- (void).cxx_destruct;
- (void)_createNewGroupOnServerAndGroupLinkWithSelectionResult:(id)arg1 groupName:(id)arg2 sender:(id)arg3 actionModel:(id)arg4 fromSourceView:(id)arg5;
- (void)_deleteLinksForSelectedGroupId:(id)arg1 sender:(id)arg2 actionModel:(id)arg3 fromSourceView:(id)arg4;
- (void)_createLinkForSelectedGroupId:(id)arg1 sender:(id)arg2 actionModel:(id)arg3 fromSourceView:(id)arg4;
- (id)_createNewGroupDataRepository;
- (void)_showNoGroupSelectedError;
- (void)_showInviteCreateFailedError;
- (id)_namedFriendsWithSnapchatters:(id)arg1;
- (void)_createGroupWithRecipients:(id)arg1 groupName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentGroupNameRequirementAlert;
- (void)_presentActionMenu;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)setBaseGroupId:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 selectionStateManager:(id)arg2 groupManager:(id)arg3 baseGroupId:(id)arg4 createAndDeleteGroupLinkActionHandler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
