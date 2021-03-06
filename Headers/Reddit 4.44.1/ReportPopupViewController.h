//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "PopupViewControllerProtocol-Protocol.h"
#import "RUIThemeUpdateCallbackProtocol-Protocol.h"

@class BaseControl, BaseNavigationViewController, NSString, ReportFormViewController, ReportReason;

@interface ReportPopupViewController : BaseViewController <RUIThemeUpdateCallbackProtocol, PopupViewControllerProtocol>
{
    BaseControl *_dimmerView;
    ReportReason *_reportReason;
    NSString *_popupTitle;
    double _preferredPopupHeight;
    double _visibleKeyboardHeight;
    BaseNavigationViewController *_navController;
    ReportFormViewController *_contentVC;
}

@property(retain, nonatomic) ReportFormViewController *contentVC; // @synthesize contentVC=_contentVC;
@property(retain, nonatomic) BaseNavigationViewController *navController; // @synthesize navController=_navController;
@property(nonatomic) double visibleKeyboardHeight; // @synthesize visibleKeyboardHeight=_visibleKeyboardHeight;
@property(readonly, nonatomic) double preferredPopupHeight; // @synthesize preferredPopupHeight=_preferredPopupHeight;
@property(retain, nonatomic) NSString *popupTitle; // @synthesize popupTitle=_popupTitle;
@property(retain, nonatomic) ReportReason *reportReason; // @synthesize reportReason=_reportReason;
@property(readonly, nonatomic) BaseControl *dimmerView; // @synthesize dimmerView=_dimmerView;
- (void).cxx_destruct;
- (void)chatDidTapFileComplaintBlock:(id)arg1;
- (void)themeDidChange:(id)arg1;
- (void)setupNavigationController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
- (double)preferredPopupHeightForWidth:(double)arg1;
- (id)initWithChatPostMessage:(id)arg1;
- (id)initWithLiveStreamComment:(id)arg1;
- (id)initWithLiveStream:(id)arg1 relativeReportTimeSeconds:(id)arg2;
- (id)initWithReportable:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

