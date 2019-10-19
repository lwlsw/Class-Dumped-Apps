//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTPageStyleProvider-Protocol.h"
#import "YTResponseViewController-Protocol.h"

@class GIMMe, NSString, YTIConnectionInviteUrlDialogRenderer;
@protocol YTResponder;

@interface YTDirectInviteViewController : UIViewController <YTPageStyleProvider, YTResponseViewController>
{
    YTIConnectionInviteUrlDialogRenderer *_renderer;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)retryRequest;
- (void)dismissAndNavigateWithNavigationEndpoint:(id)arg1;
- (void)dismissViewController;
- (void)shareLink;
- (void)copyLink;
- (id)directInviteView;
- (_Bool)accessibilityPerformEscape;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)willMakeRequest:(id)arg1;
- (void)loadWithError:(id)arg1;
- (void)loadWithModel:(id)arg1;
@property(readonly, nonatomic) long long pageStyle;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end
