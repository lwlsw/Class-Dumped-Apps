//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SFSafariViewControllerDelegate-Protocol.h"
#import "SPTSignupTermsAndPolicyManagerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, SPTSignupTermsAndPolicyManager, SPTSignupTermsAndPolicyViewStyle;
@protocol SPTLoginLogger, SPTSignupTermsAndPolicyViewConfiguration, SPTSignupTermsAndPolicyViewModelDelegate;

@interface SPTSignupTermsAndPolicyViewModel : NSObject <SPTSignupTermsAndPolicyManagerDelegate, SFSafariViewControllerDelegate, UITextViewDelegate>
{
    _Bool _guestModeEnabled;
    id <SPTSignupTermsAndPolicyViewModelDelegate> _delegate;
    SPTSignupTermsAndPolicyManager *_termsAndPolicyManager;
    SPTSignupTermsAndPolicyViewStyle *_style;
    id <SPTSignupTermsAndPolicyViewConfiguration> _termsViewConfiguration;
    id <SPTLoginLogger> _logger;
}

@property(readonly, nonatomic, getter=isGuestModeEnabled) _Bool guestModeEnabled; // @synthesize guestModeEnabled=_guestModeEnabled;
@property(retain, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTSignupTermsAndPolicyViewConfiguration> termsViewConfiguration; // @synthesize termsViewConfiguration=_termsViewConfiguration;
@property(retain, nonatomic) SPTSignupTermsAndPolicyViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTSignupTermsAndPolicyManager *termsAndPolicyManager; // @synthesize termsAndPolicyManager=_termsAndPolicyManager;
@property(nonatomic) __weak id <SPTSignupTermsAndPolicyViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)safariViewControllerDidFinish:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)showTermsAndPolicyDialog;
- (void)termsAndPolicyManagerDidAcceptAllLicences:(id)arg1;
- (void)termsAndPolicyManagerDidSelectPrivacyAndPolicyDetails:(id)arg1;
- (void)termsAndPolicyManagerDidSelectTermsAndConditionsDetails:(id)arg1;
- (void)logUserDidTapLinkWith:(id)arg1;
- (void)presentTermsDetailsForURL:(id)arg1;
- (_Bool)isTermsAndPolicyDialogRequired;
- (id)linksForTermsAndConditionsText;
- (id)localizedTextForTermsAndConditions;
- (id)termsAndConditionsAttributedText;
- (id)initWithTermsViewConfiguration:(id)arg1 termsAndPolicyManager:(id)arg2 style:(id)arg3 logger:(id)arg4 guestModeEnabled:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

