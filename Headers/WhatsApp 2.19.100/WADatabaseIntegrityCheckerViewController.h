//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

@class UITextView;

@interface WADatabaseIntegrityCheckerViewController : WAViewController
{
    UITextView *_consoleTextView;
}

@property(retain, nonatomic) UITextView *consoleTextView; // @synthesize consoleTextView=_consoleTextView;
- (void).cxx_destruct;
- (void)repairChatDatabase:(id)arg1;
- (void)email:(id)arg1;
- (void)checkDatabaseIntegrity:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
