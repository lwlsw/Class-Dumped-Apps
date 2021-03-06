//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCPageNameLogging-Protocol.h"

@class NSString, SCButton, SCUserSession;

@interface TwoFADisabledSettingsViewController : SCGenericSettingsViewController <SCPageNameLogging>
{
    NSString *_pageViewName;
    SCButton *_continueButton;
    SCUserSession *_userSession;
}

@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) SCButton *continueButton; // @synthesize continueButton=_continueButton;
- (void).cxx_destruct;
- (void)presentTwoFAWarningView;
- (_Bool)disableLeftSwipe;
- (void)continueButtonPressed;
- (void)leftButtonPressed;
- (void)createContinueButton;
- (id)createLabelWithText:(id)arg1 font:(id)arg2 textAlignment:(long long)arg3;
- (id)createItemWithEmoji:(id)arg1 description:(id)arg2 belowView:(id)arg3 topMargin:(double)arg4 sideMargin:(double)arg5;
- (void)createInfoLabels;
- (void)loadView;
- (id)initWithPageViewName:(id)arg1 title:(id)arg2 userSession:(id)arg3;
- (id)getTitle;
- (id)pageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

