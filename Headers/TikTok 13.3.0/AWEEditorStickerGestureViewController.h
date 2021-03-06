//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEActivityStickerContainerView, AWEPollStickerEditView, AWESimplifiedStickerContainerView, AWEStickerContainerView, AWEStoryBackgroundTextView, AWEStoryTextContainerView, AWEVideoStickerEditCircleView, NSString, UIView;
@protocol AWEEditorStickerGestureViewControllerDelegate;

@interface AWEEditorStickerGestureViewController : UIViewController <UIGestureRecognizerDelegate>
{
    _Bool _isGestureBegin;
    _Bool _isGestureEnded;
    _Bool _isMoving;
    _Bool _isDraging;
    CDUnknownBlockType _gestureStartBlock;
    id <AWEEditorStickerGestureViewControllerDelegate> _delegate;
    AWEVideoStickerEditCircleView *_currentInfoStickerView;
    AWEStoryBackgroundTextView *_currentTextStickerView;
    AWEPollStickerEditView *_currentPollStickerView;
    AWEStickerContainerView *_infoStickerContainer;
    AWEStoryTextContainerView *_textStickerContainer;
    AWEActivityStickerContainerView *_activityStickerContainer;
    AWESimplifiedStickerContainerView *_simplifiedStickerContainer;
    CDUnknownBlockType _tapToTextEdit;
    UIView *_targetView;
    UIView *_previousTargetViewForPinch;
    UIView *_previousTargetViewForRotate;
    AWEStoryBackgroundTextView *_targetTextView;
    AWEPollStickerEditView *_targetPollView;
}

@property(nonatomic) _Bool isDraging; // @synthesize isDraging=_isDraging;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(retain, nonatomic) AWEPollStickerEditView *targetPollView; // @synthesize targetPollView=_targetPollView;
@property(retain, nonatomic) AWEStoryBackgroundTextView *targetTextView; // @synthesize targetTextView=_targetTextView;
@property(retain, nonatomic) UIView *previousTargetViewForRotate; // @synthesize previousTargetViewForRotate=_previousTargetViewForRotate;
@property(retain, nonatomic) UIView *previousTargetViewForPinch; // @synthesize previousTargetViewForPinch=_previousTargetViewForPinch;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(copy, nonatomic) CDUnknownBlockType tapToTextEdit; // @synthesize tapToTextEdit=_tapToTextEdit;
@property(nonatomic) _Bool isGestureEnded; // @synthesize isGestureEnded=_isGestureEnded;
@property(nonatomic) _Bool isGestureBegin; // @synthesize isGestureBegin=_isGestureBegin;
@property(retain, nonatomic) AWESimplifiedStickerContainerView *simplifiedStickerContainer; // @synthesize simplifiedStickerContainer=_simplifiedStickerContainer;
@property(retain, nonatomic) AWEActivityStickerContainerView *activityStickerContainer; // @synthesize activityStickerContainer=_activityStickerContainer;
@property(retain, nonatomic) AWEStoryTextContainerView *textStickerContainer; // @synthesize textStickerContainer=_textStickerContainer;
@property(retain, nonatomic) AWEStickerContainerView *infoStickerContainer; // @synthesize infoStickerContainer=_infoStickerContainer;
@property(retain, nonatomic) AWEPollStickerEditView *currentPollStickerView; // @synthesize currentPollStickerView=_currentPollStickerView;
@property(retain, nonatomic) AWEStoryBackgroundTextView *currentTextStickerView; // @synthesize currentTextStickerView=_currentTextStickerView;
@property(retain, nonatomic) AWEVideoStickerEditCircleView *currentInfoStickerView; // @synthesize currentInfoStickerView=_currentInfoStickerView;
@property(nonatomic) __weak id <AWEEditorStickerGestureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType gestureStartBlock; // @synthesize gestureStartBlock=_gestureStartBlock;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)endedGesture;
- (_Bool)startGestureOnView:(id)arg1;
- (id)hitTargetStickerWithGesture:(id)arg1 deSelected:(_Bool)arg2;
- (_Bool)stickerView:(id)arg1 hasTextViewAboveWithPoint:(struct CGPoint)arg2;
- (id)hitTargetStickerWithGesture:(id)arg1;
- (_Bool)checkIsHandleButtonPanGesture:(id)arg1;
- (void)rotationAction:(id)arg1;
- (void)pinchAction:(id)arg1;
- (void)panAction:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)configSimpliedInfoStickerContainer:(id)arg1;
- (void)configActivityStickerContainer:(id)arg1;
- (void)configTextStickerContainer:(id)arg1;
- (void)configInfoStickerContainer:(id)arg1;
- (void)setupGesture;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

