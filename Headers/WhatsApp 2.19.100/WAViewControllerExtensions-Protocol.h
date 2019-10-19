//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UISearchBar, UISearchController, WAChatNavigationController, WADropDownAlertView, WASearchController;
@protocol WATokenizedSearchBar;

@protocol WAViewControllerExtensions <NSObject>
@property(readonly, nonatomic) _Bool wa_hasSearchController;
@property(readonly, nonatomic) _Bool wa_isSearchActive;
@property(readonly, nonatomic) WASearchController *wa_searchControllerIfCreated;
@property(readonly, nonatomic) WASearchController *wa_searchController;
@property(readonly, nonatomic) WAChatNavigationController *chatNavigationController;
- (void)dismissAllDropDownAlertViewsWithAnimation:(_Bool)arg1;
- (void)dismissDropDownAlertView:(WADropDownAlertView *)arg1 animated:(_Bool)arg2;
- (void)showDropDownAlertView:(WADropDownAlertView *)arg1 animated:(_Bool)arg2;
- (UISearchController *)customSearchController;
- (void)wa_setSearchInactiveWithAnimation:(_Bool)arg1;
- (WASearchController *)wa_newSearchControllerWithTokenizedSearchBar:(UISearchBar<WATokenizedSearchBar> *)arg1;
- (WASearchController *)wa_newSearchControllerWithSearchBar:(UISearchBar *)arg1;
- (_Bool)wa_prefersStatusBarHidden;
- (NSArray *)wa_previewActionItems;
- (_Bool)wa_is3DTouchAvailable;
- (_Bool)wa_isBeingPreviewed;
- (_Bool)wa_shouldAnimateTableViewRowChanges;
- (void)wa_performOnViewDidAppear:(void (^)(void))arg1;
- (void)performAfterTransitionEnds:(void (^)(void))arg1;
- (void)wa_fontSizeDidChange;
- (void)wa_tintColorDidChange;
- (void)wa_applicationDidBecomeActive;
- (void)wa_applicationWillResignActive;
- (void)wa_applicationDidEnterBackground;
- (void)wa_applicationWillEnterForeground;
- (_Bool)wa_shouldDeferAlertNotification;
- (_Bool)wa_defersNotificationsWhenPresented;
- (_Bool)wa_prefersMinimalBackButton;
- (NSString *)uniqueIdentifier;
@end
