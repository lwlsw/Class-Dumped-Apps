//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ModFormViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class ModFormTextField, NSString;

@interface ApprovedUserFormViewController : ModFormViewController <UITextFieldDelegate>
{
    ModFormTextField *_usernameField;
}

@property(retain, nonatomic) ModFormTextField *usernameField; // @synthesize usernameField=_usernameField;
- (void).cxx_destruct;
- (void)addApprovedSubmitter:(id)arg1;
- (void)addButtonPress:(id)arg1;
- (void)buildForm;
- (id)addButtonTitle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
