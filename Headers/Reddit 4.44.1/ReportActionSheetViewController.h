//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/RUIActionSheetViewController.h>

@class Account, RedditService;
@protocol ReportActionSheetDelegate, ReportableModel;

@interface ReportActionSheetViewController : RUIActionSheetViewController
{
    id <ReportableModel> _model;
    id <ReportActionSheetDelegate> _reportActionSheetDelegate;
    RedditService *_service;
}

@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <ReportActionSheetDelegate> reportActionSheetDelegate; // @synthesize reportActionSheetDelegate=_reportActionSheetDelegate;
@property(readonly, nonatomic) id <ReportableModel> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)logBlockedItem:(id)arg1;
- (void)logReportedItem:(id)arg1;
- (void)performBlockUserRequest;
- (void)presentBlockUserPromptForModel:(id)arg1;
- (void)presentReportControllerForModel:(id)arg1;
@property(readonly, nonatomic) Account *account;
- (void)setupActionSheetItems;
- (id)initWithModel:(id)arg1 service:(id)arg2;

@end

