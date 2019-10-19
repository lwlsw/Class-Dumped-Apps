//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseViewController.h"

@class NSArray, NSNumberFormatter, UIImageView, UITableView;

@interface FVRMoreViewController : FVRBaseViewController
{
    _Bool _shouldIgnoreShowEvent;
    UITableView *_tableView;
    NSArray *_dataSource;
    UIImageView *_sellerLevelImage;
    NSNumberFormatter *_availableFundsformatter;
}

@property(nonatomic) _Bool shouldIgnoreShowEvent; // @synthesize shouldIgnoreShowEvent=_shouldIgnoreShowEvent;
@property(retain, nonatomic) NSNumberFormatter *availableFundsformatter; // @synthesize availableFundsformatter=_availableFundsformatter;
@property(nonatomic) __weak UIImageView *sellerLevelImage; // @synthesize sellerLevelImage=_sellerLevelImage;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)mixpanelSendShareItemInteractionEventWithType:(id)arg1;
- (void)profileImageButtonAction:(id)arg1;
- (void)logoutSucceed:(id)arg1;
- (void)loginOrRegisterSucceed:(id)arg1;
- (void)inviteFriend;
- (void)logout;
- (void)openPrivacyPolicy;
- (void)openTermsOfService;
- (void)openAbout;
- (void)openWebViewWithUrlString:(id)arg1 screenName:(id)arg2 eventType:(id)arg3;
- (void)openFeedback;
- (void)pushViewController:(Class)arg1;
- (void)didReceiveMemoryWarning;
- (id)menuElementFromDataSource:(id)arg1 atIndexPath:(id)arg2;
- (void)reloadData;
- (void)searchButtonPressed;
- (void)referralManagerViewWillAppearReport;
- (void)referralManagerViewDidLoadReport;
- (void)analyticsManagerReportShowEvent;
- (id)analyticsManagerScreenName;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
