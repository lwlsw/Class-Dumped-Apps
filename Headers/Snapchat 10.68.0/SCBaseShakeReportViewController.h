//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCHeaderDelegate-Protocol.h"
#import "SCShakeAttachmentViewDelegate-Protocol.h"
#import "SCShakeDescriptionViewDelegate-Protocol.h"
#import "SCShakeDrawOnAttachmentViewControllerDelegate-Protocol.h"

@class NSString, SCShakeAttachmentViewProvider, SCShakeCaptureData, SCShakeDescriptionViewProvider, SCShakeHeaderViewProvider, SCShakeProjectViewProvider, SCShakeSubmitViewProvider;
@protocol SCShakeReportDelegate, SCShakeToReportExternalImageAttachmentProvider;

@interface SCBaseShakeReportViewController : UIViewController <SCHeaderDelegate, SCShakeDescriptionViewDelegate, SCShakeAttachmentViewDelegate, SCShakeDrawOnAttachmentViewControllerDelegate>
{
    _Bool isStatusBarHiddenBefore;
    _Bool _doesAttachScreenshot;
    long long _mode;
    id <SCShakeReportDelegate> _delegate;
    NSString *_shakeId;
    SCShakeCaptureData *_shakeCaptureData;
    SCShakeHeaderViewProvider *_headerProvider;
    SCShakeDescriptionViewProvider *_descriptionProvider;
    SCShakeAttachmentViewProvider *_attachmentProvider;
    SCShakeProjectViewProvider *_projectProvider;
    SCShakeSubmitViewProvider *_submitProvider;
    long long _reportCreationTime;
    NSString *_viewControllerName;
    NSString *_viewControllerFeature;
    id <SCShakeToReportExternalImageAttachmentProvider> _externalImageAttachmentProvider;
}

@property(nonatomic) __weak id <SCShakeToReportExternalImageAttachmentProvider> externalImageAttachmentProvider; // @synthesize externalImageAttachmentProvider=_externalImageAttachmentProvider;
@property(copy, nonatomic) NSString *viewControllerFeature; // @synthesize viewControllerFeature=_viewControllerFeature;
@property(copy, nonatomic) NSString *viewControllerName; // @synthesize viewControllerName=_viewControllerName;
@property(nonatomic) long long reportCreationTime; // @synthesize reportCreationTime=_reportCreationTime;
@property(nonatomic) _Bool doesAttachScreenshot; // @synthesize doesAttachScreenshot=_doesAttachScreenshot;
@property(retain, nonatomic) SCShakeSubmitViewProvider *submitProvider; // @synthesize submitProvider=_submitProvider;
@property(retain, nonatomic) SCShakeProjectViewProvider *projectProvider; // @synthesize projectProvider=_projectProvider;
@property(retain, nonatomic) SCShakeAttachmentViewProvider *attachmentProvider; // @synthesize attachmentProvider=_attachmentProvider;
@property(retain, nonatomic) SCShakeDescriptionViewProvider *descriptionProvider; // @synthesize descriptionProvider=_descriptionProvider;
@property(retain, nonatomic) SCShakeHeaderViewProvider *headerProvider; // @synthesize headerProvider=_headerProvider;
@property(copy, nonatomic) SCShakeCaptureData *shakeCaptureData; // @synthesize shakeCaptureData=_shakeCaptureData;
@property(retain, nonatomic) NSString *shakeId; // @synthesize shakeId=_shakeId;
@property(nonatomic) __weak id <SCShakeReportDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)drawOnAttachmentViewControllerDidDeleteImage:(id)arg1 index:(long long)arg2;
- (void)drawOnAttachmentViewController:(id)arg1 didChangeAttachmentImage:(id)arg2 index:(long long)arg3;
- (void)attachmentDidSingleTap:(long long)arg1 attachmentView:(id)arg2 type:(unsigned long long)arg3;
- (void)descriptionTextChange:(id)arg1;
- (void)leftButtonPressed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateSubmitButton;
- (void)setupSubmitView:(id)arg1 size:(unsigned long long)arg2;
- (void)setupProjectView:(id)arg1;
- (void)setupAttachmentView:(id)arg1;
- (void)setupDescriptionView:(id)arg1 placeholder:(id)arg2;
- (id)createDescriptionAndAttachmentView:(id)arg1;
- (void)setupHeaderView:(id)arg1 title:(id)arg2 headerType:(long long)arg3;
- (id)createStackView:(id)arg1;
- (id)createScrollView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
