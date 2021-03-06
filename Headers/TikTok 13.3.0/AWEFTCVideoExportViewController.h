//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class MASConstraint, NSArray, NSAttributedString, NSLayoutConstraint, NSString, UIButton, UILabel;

@interface AWEFTCVideoExportViewController : UIViewController <UITextFieldDelegate>
{
    _Bool _disableBackBehavior;
    _Bool _confirmYes;
    NSString *_titleText;
    NSAttributedString *_titleDetailDescription;
    NSString *_removeLineDateString;
    NSArray *_informationTextFields;
    unsigned long long _videoActionState;
    NSString *_actionText;
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _backButtonBlock;
    UILabel *_titleLabel;
    UILabel *_titleDescriptionLabel;
    NSArray *_separateViews;
    NSArray *_errorMessageLabels;
    NSArray *_errorMessageIcons;
    UIButton *_actionButton;
    NSArray *_errorMessageToNextVerticalConstrains;
    NSArray *_seprateViewHeightConstraints;
    UIButton *_backButton;
    NSArray *_errorMessages;
    NSLayoutConstraint *_bottomMarginConstraint;
    MASConstraint *_firstTextFieldTopConstraint;
    NSArray *_optionsViewArray;
}

@property(retain, nonatomic) NSArray *optionsViewArray; // @synthesize optionsViewArray=_optionsViewArray;
@property(retain, nonatomic) MASConstraint *firstTextFieldTopConstraint; // @synthesize firstTextFieldTopConstraint=_firstTextFieldTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property(copy, nonatomic) NSArray *errorMessages; // @synthesize errorMessages=_errorMessages;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) NSArray *seprateViewHeightConstraints; // @synthesize seprateViewHeightConstraints=_seprateViewHeightConstraints;
@property(retain, nonatomic) NSArray *errorMessageToNextVerticalConstrains; // @synthesize errorMessageToNextVerticalConstrains=_errorMessageToNextVerticalConstrains;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSArray *errorMessageIcons; // @synthesize errorMessageIcons=_errorMessageIcons;
@property(retain, nonatomic) NSArray *errorMessageLabels; // @synthesize errorMessageLabels=_errorMessageLabels;
@property(retain, nonatomic) NSArray *separateViews; // @synthesize separateViews=_separateViews;
@property(retain, nonatomic) UILabel *titleDescriptionLabel; // @synthesize titleDescriptionLabel=_titleDescriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool confirmYes; // @synthesize confirmYes=_confirmYes;
@property(copy, nonatomic) CDUnknownBlockType backButtonBlock; // @synthesize backButtonBlock=_backButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(nonatomic) unsigned long long videoActionState; // @synthesize videoActionState=_videoActionState;
@property(copy, nonatomic) NSArray *informationTextFields; // @synthesize informationTextFields=_informationTextFields;
@property(copy, nonatomic) NSString *removeLineDateString; // @synthesize removeLineDateString=_removeLineDateString;
@property(copy, nonatomic) NSAttributedString *titleDetailDescription; // @synthesize titleDetailDescription=_titleDetailDescription;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) _Bool disableBackBehavior; // @synthesize disableBackBehavior=_disableBackBehavior;
- (void).cxx_destruct;
- (void)backAction;
- (_Bool)screenHeightTooNarrow;
- (void)keyboardSizeChanged:(id)arg1;
- (void)action:(id)arg1;
- (_Bool)checkEmailFormat:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)hideErrorMessages;
- (void)showErrorMessages:(id)arg1;
- (void)showGlobalErrorMessage:(id)arg1;
- (void)updateErrorMessage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)stopConnecting;
- (void)startConnecting;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)getOptionsView:(_Bool)arg1;
- (void)configureConstraints;
- (void)backButtonTapped;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

