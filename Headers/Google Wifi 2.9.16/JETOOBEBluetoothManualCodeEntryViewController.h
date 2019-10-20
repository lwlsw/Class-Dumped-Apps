//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETOOBEViewController.h"

#import "GOOAlertViewDelegate-Protocol.h"
#import "GOONavigationCustomization-Protocol.h"
#import "JETTextEntryViewDelegate-Protocol.h"

@class GOONavigationStyle, JETButton, JETSetupPSKValidator, JETTextEntryView, NSSet, NSString, UIScrollView, UIView;

@interface JETOOBEBluetoothManualCodeEntryViewController : JETOOBEViewController <GOOAlertViewDelegate, GOONavigationCustomization, JETTextEntryViewDelegate>
{
    JETTextEntryView *_codeEntryView;
    JETButton *_QRScanButton;
    JETButton *_nextButton;
    JETSetupPSKValidator *_setupPSKValidator;
}

@property(retain, nonatomic) JETSetupPSKValidator *setupPSKValidator; // @synthesize setupPSKValidator=_setupPSKValidator;
@property(retain, nonatomic) JETButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) JETButton *QRScanButton; // @synthesize QRScanButton=_QRScanButton;
@property(retain, nonatomic) JETTextEntryView *codeEntryView; // @synthesize codeEntryView=_codeEntryView;
- (void).cxx_destruct;
- (void)textEdited:(id)arg1 valid:(_Bool)arg2;
- (void)nextButtonTapped;
- (void)QRScanButtonTapped;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (id)analyticsScreenName;
- (void)loadView;
- (id)createFooterWrappingView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end
