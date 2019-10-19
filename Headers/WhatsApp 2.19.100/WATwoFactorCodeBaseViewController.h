//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

@class NSString, WALinkLabel, WAOverlayView, WAPasscodeView;

@interface WATwoFactorCodeBaseViewController : WAViewController
{
    NSString *_helperLabelText;
    NSString *_leftBarButtonTitle;
    NSString *_rightBarButtonTitle;
    WAOverlayView *_overlayView;
    double _keyboardHeight;
    WALinkLabel *_labelHelperText;
    WAPasscodeView *_passcodeView;
}

@property(retain, nonatomic) WAPasscodeView *passcodeView; // @synthesize passcodeView=_passcodeView;
@property(retain, nonatomic) WALinkLabel *labelHelperText; // @synthesize labelHelperText=_labelHelperText;
- (void).cxx_destruct;
- (void)handleLeftNavigationButtonTapped;
- (void)handleCodeEntered:(id)arg1;
- (void)handleOpenURL:(id)arg1;
- (void)hideOverlayWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)overlayDisplayed;
- (void)showOverlayWithMessage:(id)arg1;
- (void)activatePasscodeFieldIfNecessary;
- (void)setPasscodeEditingEnabled:(_Bool)arg1;
- (void)resetPasscodeField;
- (void)shakePasscodeField;
- (double)keyboardHeight;
- (struct CGRect)subclassAvailableContentBounds;
- (void)leftBarButtonItemTapped:(id)arg1;
- (void)rightBarButtonItemTapped:(id)arg1;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)passcodeViewDidEnterPasscode:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
