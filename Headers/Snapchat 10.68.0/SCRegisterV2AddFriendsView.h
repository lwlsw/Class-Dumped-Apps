//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCExperimentManager, UIButton, UILabel, UIView;
@protocol SCAddFriendsInterstitialView;

@interface SCRegisterV2AddFriendsView : SCRegisterV2BaseView <SCTraceEnabled>
{
    struct UIEdgeInsets _horizontalInsets;
    UIView *_titleView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_descContainer;
    UIView<SCAddFriendsInterstitialView> *_interstitial;
    UIView *_currentTableView;
    double _headerOffset;
    double _descLabelMinOffset;
    SCExperimentManager *_experimentManager;
    _Bool _isShowingLoadingView;
    UIButton *_skipButton;
}

@property(nonatomic) _Bool isShowingLoadingView; // @synthesize isShowingLoadingView=_isShowingLoadingView;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
- (void).cxx_destruct;
- (double)_titlePadding;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)setHeaderOffset:(double)arg1;
- (void)setContinueActivityAnimating:(_Bool)arg1;
- (void)setContinueButtonHidden:(_Bool)arg1;
- (void)updateTextForOfficialAccountSuggestionsAndOthers;
- (void)updateTextForOfficialAccountSuggestionsOnly;
- (void)updateTextForPublisherAccountSuggestions;
- (void)updateToInvite;
- (void)setTableView:(id)arg1;
- (_Bool)actionButtonsVisible;
- (void)hideIntersitial;
- (void)setInterstitialGrayscaleIfNeeded:(_Bool)arg1;
- (_Bool)isInterstitialShowing;
- (void)onContinuePressed;
- (void)onSkipPressed;
- (void)removeObservers;
- (void)addObservers;
- (void)initSkipButton;
- (void)initNextButton;
- (void)initDescription;
- (void)initTitle;
- (void)setInterstitialHidden:(_Bool)arg1;
- (void)initInterstitial:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 experimentManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

