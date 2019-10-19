//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessagingAlertTemplate.h"

@class MessagingAlert, MessagingViewController, NFUILabel, UILocalizedButton;

@interface MessagingAlertTemplate_Generic : MessagingAlertTemplate
{
    _Bool didShowPlans;
    MessagingViewController *_messagingViewController;
    NFUILabel *_titleLabel;
    UILocalizedButton *_continueButton;
    MessagingAlert *_messagingAlert;
}

+ (id)supportedTemplates;
@property(retain, nonatomic) MessagingAlert *messagingAlert; // @synthesize messagingAlert=_messagingAlert;
@property(nonatomic) __weak UILocalizedButton *continueButton; // @synthesize continueButton=_continueButton;
@property(nonatomic) __weak NFUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MessagingViewController *messagingViewController; // @synthesize messagingViewController=_messagingViewController;
- (void).cxx_destruct;
- (void)continueButtonTapped:(id)arg1;
- (void)messagingViewControllerViewDidLoad:(id)arg1;
- (void)handleMessage:(id)arg1;

@end
