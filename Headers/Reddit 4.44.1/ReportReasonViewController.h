//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReportFormViewController.h"

@class BaseButton, FeedSpinnerView, NSArray, RedditService;
@protocol ReportableModel;

@interface ReportReasonViewController : ReportFormViewController
{
    NSArray *_subredditRules;
    NSArray *_redditRules;
    BaseButton *_nextButton;
    FeedSpinnerView *_spinner;
    id <ReportableModel> _reportableModel;
}

@property(readonly, nonatomic) id <ReportableModel> reportableModel; // @synthesize reportableModel=_reportableModel;
@property(retain, nonatomic) FeedSpinnerView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) BaseButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) NSArray *redditRules; // @synthesize redditRules=_redditRules;
@property(retain, nonatomic) NSArray *subredditRules; // @synthesize subredditRules=_subredditRules;
- (void).cxx_destruct;
- (id)reportItems;
- (id)redditRuleForItem:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)nextButtonTapped;
- (void)cancelButtonTapped;
- (void)stopSpinner;
- (void)showErrorState;
- (void)configureViewAppearance;
- (void)configureEmptySpacerView;
- (void)configureActionButtonsWithNextButton:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *acceptableRuleTypes;
- (void)handleRulesFetchWithSubredditRules:(id)arg1 siteRules:(id)arg2 error:(id)arg3;
- (void)fetchData;
- (void)viewDidLoad;
- (id)initWithReportableModel:(id)arg1;
@property(readonly, nonatomic) RedditService *service;

@end

