//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReportFormViewController.h"

@class BaseButton, NSString, RedditService, ReportReason, User;

@interface ReportReceivedViewController : ReportFormViewController
{
    RedditService *_service;
    ReportReason *_reportReason;
    User *_reportedUser;
    NSString *_reportedUsername;
    BaseButton *_blockUserButton;
}

@property(retain, nonatomic) BaseButton *blockUserButton; // @synthesize blockUserButton=_blockUserButton;
@property(copy, nonatomic) NSString *reportedUsername; // @synthesize reportedUsername=_reportedUsername;
@property(retain, nonatomic) User *reportedUser; // @synthesize reportedUser=_reportedUser;
@property(retain, nonatomic) ReportReason *reportReason; // @synthesize reportReason=_reportReason;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)performBlockUserRequest;
- (void)fetchUser;
- (void)presentBlockUserPrompt;
- (void)closeButtonTapped;
- (void)configureActionButtons;
- (void)configureLayout;
- (void)viewDidLoad;
- (id)initWithRedditService:(id)arg1 reportReason:(id)arg2;

@end

