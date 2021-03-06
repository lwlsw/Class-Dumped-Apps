//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATableViewController.h>

@class NSArray, NSMutableArray, WAShareContactTableHeaderView, WAVCardNameSharingUnit;
@protocol WAShareContactViewControllerDelegate;

@interface WAShareContactViewController : WATableViewController
{
    NSArray *_sharingGroups;
    NSArray *_allSharingUnits;
    NSMutableArray *_phoneNumberSharingUnits;
    WAVCardNameSharingUnit *_nameSharingUnit;
    WAShareContactTableHeaderView *_tableHeaderView;
    id <WAShareContactViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WAShareContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)restrictNumberOfPhoneNumberSharingUnitsIfNeeded:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateTableViewHeaderSize;
- (void)wa_fontSizeDidChange;
- (void)viewDidLayoutSubviews;
- (void)sendContact:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)viewDidLoad;
- (void)rebuildSharingGroupsFromContact:(id)arg1;
- (id)initWithContact:(id)arg1;

@end

