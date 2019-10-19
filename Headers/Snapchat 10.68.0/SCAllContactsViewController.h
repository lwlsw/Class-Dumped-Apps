//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FriendsTableIndexDelegate-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCLeftSwipeableDismissTransitionControllerDelegate-Protocol.h"
#import "SCSearchContentViewControlling-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"

@class NSDictionary, NSIndexPath, NSString, SCAddFriendsPullToDismissHandler, SCAddFriendsScrollAnimatorDataCoordinator, SCAllContactsIndexViewScrollActionDataProvider, SCInviteFriendStateTracker, SCLazy, SCLeftSwipeableTransitionProvider, SCSearchContentViewControllerContext, SCSearchQueryResultController;
@protocol SCActionHandling, SCImageDownloading, SCLegacyItemDownloading;

@interface SCAllContactsViewController : UIViewController <SCHeaderDelegate, SCLeftSwipeableDismissTransitionControllerDelegate, SCShakeToReportDelegate, FriendsTableIndexDelegate, SCSearchContentViewControlling>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_nonSnapchattersDataFetcher;
    SCInviteFriendStateTracker *_inviteFriendStateTracker;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoProvider;
    SCLazy *_userInfoProvider;
    id <SCActionHandling> _actionHandler;
    SCLazy *_contentView;
    NSIndexPath *_currentScrollbarIndexPathPressed;
    SCAddFriendsScrollAnimatorDataCoordinator *_scrollAnimatorDataCoordinator;
    SCAllContactsIndexViewScrollActionDataProvider *_indexViewScrollActionDataProvider;
    SCSearchQueryResultController *_queryResultController;
    long long _previousStatusBarStyle;
    SCAddFriendsPullToDismissHandler *_pullToDismissHandler;
    NSString *_searchText;
    SCLazy *_addFriendsViewModelsDecorator;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
    NSDictionary *_additionalActionHandlersMap;
    SCLeftSwipeableTransitionProvider *_transitionProvider;
}

@property(retain, nonatomic) SCLeftSwipeableTransitionProvider *transitionProvider; // @synthesize transitionProvider=_transitionProvider;
@property(retain, nonatomic) NSDictionary *additionalActionHandlersMap; // @synthesize additionalActionHandlersMap=_additionalActionHandlersMap;
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
- (void).cxx_destruct;
- (id)defaultProjectNameV2;
- (void)rightButtonPressed;
- (void)initiatePageDismissInteractive:(_Bool)arg1;
- (void)searchControllerDidTapClearButton;
- (_Bool)searchControllerShouldReturnWithSearchText:(id)arg1;
- (void)searchControllerDidChangeToText:(id)arg1 byChangingCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_dismissKeyboard;
- (void)_setupDismissKeyboardForScrollView;
- (void)_scrollToIndex:(BOOL)arg1 withNonSnapchattersCategories:(id)arg2;
- (void)_scrollToIndexPath:(id)arg1;
- (_Bool)viewControllerPrefersSelfDismiss;
- (_Bool)shouldDismissViewControllerWhenEnterBackground;
- (void)scrollToIndex:(BOOL)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracker:(id)arg2 snapchattersDataMutator:(id)arg3 nonSnapchattersDataFetcher:(id)arg4 inviteFriendStateTracker:(id)arg5 imageDownloader:(id)arg6 labelInfoProvider:(id)arg7 userInfoProvider:(id)arg8 addFriendsViewModelsDecorator:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
