//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETFamilyHubStationSetSelectionViewController.h"

#import "JETFamilyHubSetupWrapperDelegate-Protocol.h"
#import "JETFamilyHubStationSetSelectionDelegate-Protocol.h"

@class GTLRAccesspoints_BlockingSchedule, JETFamilyHubSetupWrapperView, NSString;

@interface JETFamilyHubAssignStationSetsViewController : JETFamilyHubStationSetSelectionViewController <JETFamilyHubSetupWrapperDelegate, JETFamilyHubStationSetSelectionDelegate>
{
    JETFamilyHubSetupWrapperView *_wrapperView;
    GTLRAccesspoints_BlockingSchedule *_schedule;
}

@property(retain, nonatomic) GTLRAccesspoints_BlockingSchedule *schedule; // @synthesize schedule=_schedule;
@property(retain, nonatomic) JETFamilyHubSetupWrapperView *wrapperView; // @synthesize wrapperView=_wrapperView;
- (void).cxx_destruct;
- (void)stationSetSelectionViewController:(id)arg1 didDeselectStationWithID:(id)arg2;
- (void)stationSetSelectionViewController:(id)arg1 didSelectStationWithID:(id)arg2;
- (void)nextButtonTapped;
- (void)styleStationSetsController;
- (void)viewDidLoad;
- (void)loadView;
- (id)navigationStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2 schedule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

