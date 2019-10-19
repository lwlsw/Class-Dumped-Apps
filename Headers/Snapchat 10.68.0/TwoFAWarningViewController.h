//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCPageNameLogging-Protocol.h"

@class NSString, SCButton, SCUserSession, UILabel;

@interface TwoFAWarningViewController : SCGenericSettingsViewController <SCPageNameLogging>
{
    NSString *_pageViewName;
    NSString *_title;
    SCUserSession *_userSession;
    UILabel *_infoLabel;
    UILabel *_questionLabel;
    SCButton *_continueButton;
    _Bool _leftSwipeEnabled;
}

- (void).cxx_destruct;
- (void)presentSetupAuthView;
- (void)continueButtonPressed;
- (void)createContinueButton;
- (id)createLabelWithText:(id)arg1 font:(id)arg2;
- (void)createLabels;
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
