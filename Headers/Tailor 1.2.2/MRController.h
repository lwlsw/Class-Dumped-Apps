//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPAdDestinationDisplayAgentDelegate-Protocol.h"
#import "MPClosableViewDelegate-Protocol.h"
#import "MRBridgeDelegate-Protocol.h"

@class MPAdConfiguration, MPAdDestinationDisplayAgent, MPClosableView, MPMRAIDInterstitialViewController, MPTimer, MPViewabilityTracker, MPWebView, MRBridge, MRExpandModalViewController, NSString, NSURLSessionTask, UIView;
@protocol MPAdAlertManagerProtocol, MRControllerDelegate;

@interface MRController : NSObject <MRBridgeDelegate, MPClosableViewDelegate, MPAdDestinationDisplayAgentDelegate>
{
    _Bool _shouldUseUIWebView;
    _Bool _isViewable;
    _Bool _isAnimatingAdSize;
    _Bool _isAdLoading;
    _Bool _adRequiresPrecaching;
    _Bool _isAdVastVideoPlayer;
    _Bool _firedReadyEventForDefaultAd;
    MPWebView *_mraidWebView;
    MPViewabilityTracker *_viewabilityTracker;
    id <MRControllerDelegate> _delegate;
    MPAdConfiguration *_adConfiguration;
    MRBridge *_mraidBridge;
    MRBridge *_mraidBridgeTwoPart;
    MPClosableView *_mraidAdView;
    MPClosableView *_mraidAdViewTwoPart;
    UIView *_resizeBackgroundView;
    MPTimer *_adPropertyUpdateTimer;
    unsigned long long _placementType;
    MRExpandModalViewController *_expandModalViewController;
    MPMRAIDInterstitialViewController *_interstitialViewController;
    unsigned long long _modalViewCount;
    unsigned long long _currentState;
    UIView *_originalSuperview;
    MPClosableView *_expansionContentView;
    MPAdDestinationDisplayAgent *_destinationDisplayAgent;
    id <MPAdAlertManagerProtocol> _adAlertManager;
    id <MPAdAlertManagerProtocol> _adAlertManagerTwoPart;
    unsigned long long _forceOrientationMask;
    long long _currentInterfaceOrientation;
    CDUnknownBlockType _forceOrientationAfterAnimationBlock;
    NSURLSessionTask *_task;
    struct CGSize _currentAdSize;
    struct CGRect _mraidDefaultAdFrame;
    struct CGRect _mraidDefaultAdFrameInKeyWindow;
}

@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(copy, nonatomic) CDUnknownBlockType forceOrientationAfterAnimationBlock; // @synthesize forceOrientationAfterAnimationBlock=_forceOrientationAfterAnimationBlock;
@property(nonatomic) long long currentInterfaceOrientation; // @synthesize currentInterfaceOrientation=_currentInterfaceOrientation;
@property(nonatomic) unsigned long long forceOrientationMask; // @synthesize forceOrientationMask=_forceOrientationMask;
@property(retain, nonatomic) id <MPAdAlertManagerProtocol> adAlertManagerTwoPart; // @synthesize adAlertManagerTwoPart=_adAlertManagerTwoPart;
@property(retain, nonatomic) id <MPAdAlertManagerProtocol> adAlertManager; // @synthesize adAlertManager=_adAlertManager;
@property(retain, nonatomic) MPAdDestinationDisplayAgent *destinationDisplayAgent; // @synthesize destinationDisplayAgent=_destinationDisplayAgent;
@property(retain, nonatomic) MPClosableView *expansionContentView; // @synthesize expansionContentView=_expansionContentView;
@property(nonatomic) _Bool firedReadyEventForDefaultAd; // @synthesize firedReadyEventForDefaultAd=_firedReadyEventForDefaultAd;
@property(nonatomic) _Bool isAdVastVideoPlayer; // @synthesize isAdVastVideoPlayer=_isAdVastVideoPlayer;
@property(nonatomic) _Bool adRequiresPrecaching; // @synthesize adRequiresPrecaching=_adRequiresPrecaching;
@property(nonatomic) _Bool isAdLoading; // @synthesize isAdLoading=_isAdLoading;
@property(nonatomic) _Bool isAnimatingAdSize; // @synthesize isAnimatingAdSize=_isAnimatingAdSize;
@property(nonatomic) _Bool isViewable; // @synthesize isViewable=_isViewable;
@property(nonatomic) __weak UIView *originalSuperview; // @synthesize originalSuperview=_originalSuperview;
@property(nonatomic) _Bool shouldUseUIWebView; // @synthesize shouldUseUIWebView=_shouldUseUIWebView;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) unsigned long long modalViewCount; // @synthesize modalViewCount=_modalViewCount;
@property(nonatomic) struct CGSize currentAdSize; // @synthesize currentAdSize=_currentAdSize;
@property(nonatomic) struct CGRect mraidDefaultAdFrameInKeyWindow; // @synthesize mraidDefaultAdFrameInKeyWindow=_mraidDefaultAdFrameInKeyWindow;
@property(nonatomic) struct CGRect mraidDefaultAdFrame; // @synthesize mraidDefaultAdFrame=_mraidDefaultAdFrame;
@property(nonatomic) __weak MPMRAIDInterstitialViewController *interstitialViewController; // @synthesize interstitialViewController=_interstitialViewController;
@property(retain, nonatomic) MRExpandModalViewController *expandModalViewController; // @synthesize expandModalViewController=_expandModalViewController;
@property(nonatomic) unsigned long long placementType; // @synthesize placementType=_placementType;
@property(retain, nonatomic) MPTimer *adPropertyUpdateTimer; // @synthesize adPropertyUpdateTimer=_adPropertyUpdateTimer;
@property(retain, nonatomic) UIView *resizeBackgroundView; // @synthesize resizeBackgroundView=_resizeBackgroundView;
@property(retain, nonatomic) MPClosableView *mraidAdViewTwoPart; // @synthesize mraidAdViewTwoPart=_mraidAdViewTwoPart;
@property(retain, nonatomic) MPClosableView *mraidAdView; // @synthesize mraidAdView=_mraidAdView;
@property(retain, nonatomic) MRBridge *mraidBridgeTwoPart; // @synthesize mraidBridgeTwoPart=_mraidBridgeTwoPart;
@property(retain, nonatomic) MRBridge *mraidBridge; // @synthesize mraidBridge=_mraidBridge;
@property(retain, nonatomic) MPAdConfiguration *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property(nonatomic) __weak id <MRControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MPViewabilityTracker *viewabilityTracker; // @synthesize viewabilityTracker=_viewabilityTracker;
@property(retain, nonatomic) MPWebView *mraidWebView; // @synthesize mraidWebView=_mraidWebView;
- (void).cxx_destruct;
- (void)appShouldResume;
- (void)appShouldSuspend;
- (void)adDidDismissModalView;
- (void)adWillPresentModalView;
- (void)adDidClose;
- (void)adWillClose;
- (void)adDidFailToLoad;
- (void)adDidLoad;
- (void)adAlertManagerDidTriggerAlert:(id)arg1;
- (id)viewControllerForPresentingMailVC;
- (void)updateViewabilityWithBool:(_Bool)arg1;
- (void)viewEnteredBackground;
- (void)checkViewability;
- (void)changeStateTo:(unsigned long long)arg1;
- (void)updateEventSizeChange;
- (void)updateMaxSize;
- (void)updateScreenSize;
- (void)updateDefaultPosition;
- (void)updateCurrentPosition;
- (struct CGRect)defaultAdFrameInScreenSpace;
- (struct CGRect)activeAdFrameInScreenSpace;
- (void)updateMRAIDProperties;
- (void)displayAgentWillLeaveApplication;
- (void)displayAgentDidDismissModal;
- (void)displayAgentWillPresentModal;
- (void)closableView:(id)arg1 didMoveToWindow:(id)arg2;
- (void)closeButtonPressed:(id)arg1;
- (void)bridge:(id)arg1 handleNativeCommandResizeWithParameters:(id)arg2;
- (void)bridge:(id)arg1 handleNativeCommandExpandWithURL:(id)arg2 useCustomClose:(_Bool)arg3;
- (void)bridge:(id)arg1 handleNativeCommandSetOrientationPropertiesWithForceOrientationMask:(unsigned long long)arg2;
- (void)configureCloseButtonForView:(id)arg1 forUseCustomClose:(_Bool)arg2;
- (void)bridge:(id)arg1 handleNativeCommandUseCustomClose:(_Bool)arg2;
- (void)bridge:(id)arg1 handleDisplayForDestinationURL:(id)arg2;
- (void)handleNativeCommandCloseWithBridge:(id)arg1;
- (void)bridge:(id)arg1 performActionForMoPubSpecificURL:(id)arg2;
- (void)bridge:(id)arg1 didFailLoadingWebView:(id)arg2 error:(id)arg3;
- (void)bridge:(id)arg1 didFinishLoadingWebView:(id)arg2;
- (void)nativeCommandDidDismissModalView;
- (void)nativeCommandWillPresentModalView;
- (id)viewControllerForPresentingModalView;
- (_Bool)hasUserInteractedWithWebViewForBridge:(id)arg1;
- (_Bool)isLoadingAd;
- (void)closeFromResizedState;
- (void)closeFromExpandedState;
- (void)closeFromDefaultState;
- (void)close;
- (void)didEndAnimatingAdSize;
- (void)willBeginAnimatingAdSize;
- (void)presentExpandModalViewControllerWithView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentExpandModalViewControllerWithView:(id)arg1 animated:(_Bool)arg2;
- (void)animateViewFromDefaultStateToResizedState:(id)arg1 withFrame:(struct CGRect)arg2;
- (long long)adCloseButtonLocationFromString:(id)arg1;
- (_Bool)isValidResizeCloseButtonPlacementInFrame:(struct CGRect)arg1;
- (_Bool)isValidResizeFrame:(struct CGRect)arg1 allowOffscreen:(_Bool)arg2;
- (struct CGRect)adjustedFrameForFrame:(struct CGRect)arg1 allowOffscreen:(_Bool)arg2;
- (void)fireChangeEventToBothBridgesForProperty:(id)arg1;
- (void)initializeLoadedAdForBridge:(id)arg1;
- (void)orientationDidChange:(id)arg1;
- (id)buildMRAIDWebViewWithFrame:(struct CGRect)arg1 forceUIWebView:(_Bool)arg2;
- (id)bridgeForActiveAdView;
- (id)activeView;
- (id)bridgeForAdView:(id)arg1;
- (id)adViewForBridge:(id)arg1;
- (void)initAdAlertManager:(id)arg1 forAdView:(id)arg2;
- (_Bool)isInterstitialAd;
- (_Bool)shouldStartViewabilityDuringInitialization;
- (void)init3rdPartyViewabilityTrackers;
- (void)connectionDidFinishLoadingData:(id)arg1 withResponse:(id)arg2 fromRequestUrl:(id)arg3;
- (void)didFailWithError:(id)arg1;
- (void)loadTwoPartCreativeFromURL:(id)arg1;
- (void)disableRequestHandling;
- (void)enableRequestHandling;
- (void)handleMRAIDInterstitialDidPresentWithViewController:(id)arg1;
- (void)loadAdWithConfiguration:(id)arg1;
- (void)dealloc;
- (id)initWithAdViewFrame:(struct CGRect)arg1 adPlacementType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
