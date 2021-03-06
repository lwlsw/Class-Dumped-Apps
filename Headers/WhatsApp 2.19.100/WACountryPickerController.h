//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATableViewController.h>

#import "UITableViewDelegate-Protocol.h"
#import "WASearchControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, WACountryInfo;
@protocol WACountryPickerControllerDelegate;

@interface WACountryPickerController : WATableViewController <WASearchControllerDelegate, UITableViewDelegate>
{
    NSArray *_preferredCountries;
    NSArray *_otherCountries;
    NSMutableArray *_searchResults;
    WACountryInfo *_selectedCountry;
    id <WACountryPickerControllerDelegate> _delegate;
    NSString *_preferredTitle;
}

+ (id)controllerWithDelegate:(id)arg1;
@property(copy, nonatomic) NSString *preferredTitle; // @synthesize preferredTitle=_preferredTitle;
@property(nonatomic) __weak id <WACountryPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WACountryInfo *selectedCountry; // @synthesize selectedCountry=_selectedCountry;
- (void).cxx_destruct;
- (id)searchController:(id)arg1 viewControllerForPreviewingContext:(id)arg2 atLocation:(struct CGPoint)arg3;
- (void)searchController:(id)arg1 previewingContext:(id)arg2 commitViewController:(id)arg3;
- (_Bool)searchControllerShouldRegisterFor3DTouch:(id)arg1;
- (void)searchControllerWillEndSearch:(id)arg1;
- (void)searchControllerWillBeginSearch:(id)arg1;
- (void)searchControllerDidEndSearch:(id)arg1;
- (void)searchControllerDidBeginSearch:(id)arg1;
- (void)searchController:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)searchController:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (id)searchController:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)searchController:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)searchController:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)searchController:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)searchController:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (long long)numberOfSectionsInSearchController:(id)arg1;
- (void)filterContentForSearchText:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectCountry:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForCountry:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

