//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEEditAndPublishViewController.h"

#import "AWEMediaBigAnimationProtocol-Protocol.h"
#import "AWEPhotoStickersViewControllerDelegate-Protocol.h"
#import "AWERecordFilterSwitchProtocol-Protocol.h"

@class AWEBigToSmallModalDelegate, AWEImageProcessService, AWEPhotoEditorModel, AWEPhotoStickerContainerView, AWEPhotoStickerViewModel, AWEPhotoStickersViewController, NSMutableArray, NSString, UIView;

@interface AWEPhotoEditAndPublishViewController : AWEEditAndPublishViewController <AWEMediaBigAnimationProtocol, AWEPhotoStickersViewControllerDelegate, AWERecordFilterSwitchProtocol>
{
    _Bool enableFilterSwitch;
    _Bool _hasShownPhotoEditFilter;
    UIView *_containerView;
    AWEPhotoEditorModel *_pictureEditorModel;
    AWEImageProcessService *_imageProcessService;
    AWEBigToSmallModalDelegate *_filterTransitionDelegate;
    NSMutableArray *_stickers;
    AWEPhotoStickersViewController *_stickerPicker;
    AWEPhotoStickerViewModel *_currentSticker;
    UIView *_stickerPickerCoverView;
    AWEPhotoStickerContainerView *_stickerContainerView;
    UIView *_stickerAnchorView;
    UIView *_referenceView;
}

@property(nonatomic) _Bool hasShownPhotoEditFilter; // @synthesize hasShownPhotoEditFilter=_hasShownPhotoEditFilter;
@property(retain, nonatomic) UIView *referenceView; // @synthesize referenceView=_referenceView;
@property(retain, nonatomic) UIView *stickerAnchorView; // @synthesize stickerAnchorView=_stickerAnchorView;
@property(retain, nonatomic) AWEPhotoStickerContainerView *stickerContainerView; // @synthesize stickerContainerView=_stickerContainerView;
@property(retain, nonatomic) UIView *stickerPickerCoverView; // @synthesize stickerPickerCoverView=_stickerPickerCoverView;
@property(retain, nonatomic) AWEPhotoStickerViewModel *currentSticker; // @synthesize currentSticker=_currentSticker;
@property(retain, nonatomic) AWEPhotoStickersViewController *stickerPicker; // @synthesize stickerPicker=_stickerPicker;
@property(retain, nonatomic) NSMutableArray *stickers; // @synthesize stickers=_stickers;
@property(retain, nonatomic) AWEBigToSmallModalDelegate *filterTransitionDelegate; // @synthesize filterTransitionDelegate=_filterTransitionDelegate;
@property(retain, nonatomic) AWEImageProcessService *imageProcessService; // @synthesize imageProcessService=_imageProcessService;
@property(retain, nonatomic) AWEPhotoEditorModel *pictureEditorModel; // @synthesize pictureEditorModel=_pictureEditorModel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool enableFilterSwitch; // @synthesize enableFilterSwitch;
- (void).cxx_destruct;
- (void)handleTapOnCoverView:(id)arg1;
- (void)p_addSticker:(id)arg1 underView:(id)arg2;
- (void)stickersPickerDidDismiss:(id)arg1;
- (void)stickersPicker:(id)arg1 didPickSticker:(id)arg2;
- (struct CGRect)mediaBigMediaFrame;
- (id)mediaBigButtonsContainer;
- (id)mediaBigButtonsContainerSnap;
- (id)mediaBigMediaSnap;
- (_Bool)switchFilterGestureShouldBegin;
- (void)switchFilterWithFilterOne:(id)arg1 FilterTwo:(id)arg2 direction:(long long)arg3 progress:(double)arg4;
- (void)applyFilterWithFilterModel:(id)arg1 type:(long long)arg2;
- (void)configFilterSwitchManager;
- (void)p_showActionButtons;
- (void)p_hideActionButtons;
- (void)stickersClicked;
- (void)cropAndRotateClicked;
- (void)filterClicked;
- (void)nextClicked;
- (void)backClicked;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)updateStickerContainer;
- (id)photoStickerEditAndPublishViewData;
- (id)filterEditAndPublishViewData;
- (id)cropAndRotateEditAndPublishViewData;
- (id)syncEditAndPublishViewData;
- (void)editAndPublishViewNextButtonClicked;
- (void)editAndPublishViewBackButtonClicked;
- (id)editAndPublishViewRightTopData;
- (id)editAndPublishViewLeftBottomData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

