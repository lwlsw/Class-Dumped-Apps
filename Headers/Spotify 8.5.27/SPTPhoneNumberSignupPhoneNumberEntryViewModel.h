//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSString, SPCore, SPTPhoneNumberSignupPhoneNumberEntryModel, SPTPhoneNumberSignupPhoneNumberEntryViewLogger, SPTPhoneNumberSignupUtils;

@interface SPTPhoneNumberSignupPhoneNumberEntryViewModel : NSObject
{
    _Bool _isNextButtonEnabled;
    _Bool _isNextButtonLoading;
    _Bool _didUserEditPhoneNumber;
    SPTPhoneNumberSignupPhoneNumberEntryModel *_model;
    NSString *_callingCode;
    NSString *_countryName;
    NSLocale *_locale;
    SPCore *_core;
    SPTPhoneNumberSignupPhoneNumberEntryViewLogger *_logger;
    SPTPhoneNumberSignupUtils *_phoneNumberSignupUtils;
}

@property(readonly, nonatomic) SPTPhoneNumberSignupUtils *phoneNumberSignupUtils; // @synthesize phoneNumberSignupUtils=_phoneNumberSignupUtils;
@property(nonatomic) _Bool didUserEditPhoneNumber; // @synthesize didUserEditPhoneNumber=_didUserEditPhoneNumber;
@property(readonly, nonatomic) SPTPhoneNumberSignupPhoneNumberEntryViewLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) _Bool isNextButtonLoading; // @synthesize isNextButtonLoading=_isNextButtonLoading;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy, nonatomic) NSString *callingCode; // @synthesize callingCode=_callingCode;
@property(nonatomic) _Bool isNextButtonEnabled; // @synthesize isNextButtonEnabled=_isNextButtonEnabled;
@property(readonly, nonatomic) SPTPhoneNumberSignupPhoneNumberEntryModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)dealloc;
- (void)disableNextButtonLoadingWithDelay;
@property(readonly, nonatomic) _Bool isCountrySelectionEnabled;
- (void)setNationalPhoneNumber:(id)arg1;
- (void)setSelectedCountryCode:(id)arg1;
- (void)nextButtonPressed;
- (void)viewWillDisappear;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)configureModelBindings;
- (void)disableNextButtonLoading;
- (void)selectedCountryDidUpdate;
- (void)updateSelectedCountryCodeIfCountrySelectionIsDisabled;
- (id)callingCodeForCountryCode:(id)arg1;
- (id)initWithModel:(id)arg1 core:(id)arg2 locale:(id)arg3 logger:(id)arg4 phoneNumberSignupUtils:(id)arg5;
@property(readonly, nonatomic) NSString *dialogGeneralErrorMessage;
@property(readonly, nonatomic) NSString *dialogTryAgainMessage;
@property(readonly, nonatomic) NSString *dialogInactiveInternetMessage;
@property(readonly, nonatomic) NSString *dialogInactiveInternetTitle;
@property(readonly, nonatomic) NSString *dialogInvalidPhoneNumberMessage;
@property(readonly, nonatomic) NSString *dialogInvalidPhoneNumberTitle;
@property(readonly, nonatomic) NSString *dialogButtonTitle;
@property(readonly, nonatomic) NSString *phoneNumberTextFieldPlaceholder;
@property(readonly, nonatomic) NSString *nextButtonTitle;
@property(readonly, nonatomic) NSString *title;
- (void)logOtpRequestFailure;
- (void)logOtpRequestSuccess;
- (void)logUserDidEditPhoneNumber;
- (void)logUserDidSelectCountry;
- (void)logUserDidTapNextButton;
- (void)logUserDidTapCountrySelector;
- (void)logUserDidSeeDialogType:(unsigned long long)arg1;
- (void)logUserDidSeeView;

@end
