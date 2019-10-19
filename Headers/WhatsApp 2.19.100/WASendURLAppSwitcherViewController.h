//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

@class NSLayoutConstraint, NSURL, WAViewControllerTransitionWithBackgroundScrim;
@protocol WASendURLAppSwitcherViewControllerDelegate;

@interface WASendURLAppSwitcherViewController : WAViewController
{
    NSURL *_sendURL;
    NSLayoutConstraint *_leftEdgeConstraint;
    NSLayoutConstraint *_rightEdgeConstraint;
    WAViewControllerTransitionWithBackgroundScrim *_transitionController;
    id <WASendURLAppSwitcherViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WASendURLAppSwitcherViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)phoneNumberFromURL;
- (id)messageTextFromURL;
- (void)dismissWithUserResponse:(long long)arg1;
- (void)didTapOpenInOtherAppButton;
- (void)didTapOpenLinkButton;
- (void)didTapCancelButton;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithSendURL:(id)arg1;

@end
