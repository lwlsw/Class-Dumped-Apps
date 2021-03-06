//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNotification, NSString, SCRegisterV2BackButton, SCRegisterV2EnterButton;

@protocol SCInfoForRegisterPhoneView <NSObject>
@property(retain, nonatomic) SCRegisterV2EnterButton *continueButton;
@property(retain, nonatomic) SCRegisterV2BackButton *backButton;
- (void)keyboardWillHide:(NSNotification *)arg1;
- (void)keyboardWillShow:(NSNotification *)arg1;
- (void)registerNumberDidFailValidation;
- (void)setError:(NSString *)arg1;
- (void)setActivityAnimating:(_Bool)arg1;
- (void)setContinueButtonEnabled:(_Bool)arg1;
- (void)hideInput;
- (void)showInput;
- (void)setInput:(NSString *)arg1;
- (NSString *)getInput;

@optional
- (void)updateCountryCode:(NSString *)arg1;
- (void)hideSkipButton:(_Bool)arg1;
- (void)setEmailLinkHidden:(_Bool)arg1;
@end

