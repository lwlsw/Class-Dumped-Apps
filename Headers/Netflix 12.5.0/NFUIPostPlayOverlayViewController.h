//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NFUIPostPlayOriginalsActionTapDelegate-Protocol.h"
#import "NFUIPostPlayOverlayControllerProtocol-Protocol.h"
#import "NFUITouchGestureDelegate-Protocol.h"

@class NFOUICallToAction, NFUIGradientView, NFUIPlayerViewController, NFUITouchGestureRecognizer, NSString, NSTimer, PostPlayViewModel, UIButton, UIImageViewAligned, UITouch, UIView;
@protocol NFUIPostPlayOriginalsDetailsViewProtocol, NFUIPostPlayOverlayDelegate;

@interface NFUIPostPlayOverlayViewController : UIViewController <NFUIPostPlayOriginalsActionTapDelegate, NFUITouchGestureDelegate, NFUIPostPlayOverlayControllerProtocol>
{
    _Bool _viewDimmed;
    NFUIPlayerViewController *_playerViewController;
    id <NFUIPostPlayOverlayDelegate> _delegate;
    PostPlayViewModel *_model;
    UIImageViewAligned *_titleTreatment;
    UIView *_detailsContainerView;
    UIButton *_closeButton;
    UIView<NFUIPostPlayOriginalsDetailsViewProtocol> *_detailsView;
    NFUIGradientView *_gradientView;
    NSTimer *_autoDimOverlayTimer;
    NFOUICallToAction *_currentVideoAction;
    UITouch *_trackedTouchOnView;
    NFUITouchGestureRecognizer *_gestureRecognizer;
    NSString *_currentFocusSession;
}

@property(retain, nonatomic) NSString *currentFocusSession; // @synthesize currentFocusSession=_currentFocusSession;
@property(retain, nonatomic) NFUITouchGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) __weak UITouch *trackedTouchOnView; // @synthesize trackedTouchOnView=_trackedTouchOnView;
@property(nonatomic) _Bool viewDimmed; // @synthesize viewDimmed=_viewDimmed;
@property(retain, nonatomic) NFOUICallToAction *currentVideoAction; // @synthesize currentVideoAction=_currentVideoAction;
@property(retain, nonatomic) NSTimer *autoDimOverlayTimer; // @synthesize autoDimOverlayTimer=_autoDimOverlayTimer;
@property(nonatomic) __weak NFUIGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView<NFUIPostPlayOriginalsDetailsViewProtocol> *detailsView; // @synthesize detailsView=_detailsView;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIView *detailsContainerView; // @synthesize detailsContainerView=_detailsContainerView;
@property(nonatomic) __weak UIImageViewAligned *titleTreatment; // @synthesize titleTreatment=_titleTreatment;
@property(retain, nonatomic) PostPlayViewModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <NFUIPostPlayOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NFUIPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (void).cxx_destruct;
- (void)viewShouldFadeAway:(id)arg1 animationCompletionBlock:(CDUnknownBlockType)arg2;
- (void)viewShouldFadeAway:(id)arg1;
- (id)playbackRequestForCurrentModelActionIdentifier:(id)arg1;
- (unsigned long long)retrievePlaybackBoomark:(id)arg1;
- (void)myListButtonPressed:(id)arg1 withAction:(id)arg2;
- (void)moreInfoWithVideoId:(id)arg1 trackId:(id)arg2;
- (void)playVideoWithAction:(id)arg1;
- (void)callToAction:(id)arg1 withButton:(id)arg2;
- (void)handleActionTapped:(id)arg1 withActionData:(id)arg2;
- (void)callToActionTapped:(id)arg1 withActionData:(id)arg2;
- (void)viewShouldDisplay;
- (void)configureWithModel:(id)arg1;
- (id)viewController;
- (void)playbackDidEnd;
- (void)touchesCancelled:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)touchesEnded:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)touchesBegan:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)playerController:(id)arg1 timeUpdate:(double)arg2;
- (void)playerController:(id)arg1 stateChange:(unsigned long long)arg2 previous:(unsigned long long)arg3;
- (void)playerControllerReady:(id)arg1;
- (void)resetOverlayViewBrightness;
- (void)dimOverlayView;
- (void)cancelAutoDimOverlayTimer;
- (void)startAutoDimOverlayTimer;
- (void)close:(id)arg1;
- (void)initDetailsView;
- (void)setupView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

