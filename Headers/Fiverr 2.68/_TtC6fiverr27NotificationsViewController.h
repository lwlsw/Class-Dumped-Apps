//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseViewController.h"

@class UITableView;

@interface _TtC6fiverr27NotificationsViewController : FVRBaseViewController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: getListNotificationsRetryCounter
    // Error parsing type: , name: notificationItems
    // Error parsing type: , name: refreshControl
    // Error parsing type: , name: fetchingDataInProgress
    // Error parsing type: , name: noNetworkView
    // Error parsing type: , name: notificationCellId
    // Error parsing type: , name: userService
    // Error parsing type: , name: maxRetryCounter
    // Error parsing type: , name: pollingTimeConstant
    // Error parsing type: , name: pollingTimer
    // Error parsing type: , name: $__lazy_storage_$_footerStackView
    // Error parsing type: , name: $__lazy_storage_$_readUnreadButton
}

+ (id)showEnablePushBannerDateKey;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)logoutSucceed:(id)arg1;
- (void)loginOrRegisterSucceed:(id)arg1;
- (void)readUnreadClickedWithButton:(id)arg1;
- (void)editClickedWithSender:(id)arg1;
- (void)tryAgainButtonClicked:(id)arg1;
- (void)notNowClicked:(id)arg1;
- (void)turnOnPushClicked:(id)arg1;
- (void)refresh:(id)arg1;
- (id)analyticsManagerScreenName;
- (void)reloadTable;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;

@end

