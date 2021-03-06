//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HNDRockerProtocol-Protocol.h"
#import "HNDViewDelegateControl-Protocol.h"
#import "HNDWindowDelegateProtocol-Protocol.h"

@class AXDispatchTimer, AXUIClient, HNDFingerView, HNDPinchChainView, HNDRocker, HNDView, HNDWindow, NSDictionary, NSMutableArray, NSMutableSet, NSString, UIView;

@interface HNDDisplayManager : NSObject <HNDViewDelegateControl, HNDWindowDelegateProtocol, HNDRockerProtocol>
{
    AXDispatchTimer *_idleTimer;
    AXDispatchTimer *_longIdleTimer;
    HNDWindow *_window;
    HNDWindow *_ignoredWindow;
    HNDRocker *_rocker;
    UIView *_contentView;
    UIView *_fingerContentView;
    UIView *_scannerContentView;
    UIView *_scannerBackCursorView;
    UIView *_scannerFrontCursorView;
    HNDView *_rockerDismiss;
    HNDView *_multiTouchBackgound;
    struct CGPoint _currentPoint;
    struct CGPoint _menuPoint;
    struct CGPoint _previousMenuPoint;
    double _menuOpenTime;
    struct CGPoint _menuOpenDistance;
    struct CGPoint _pointBeforePinch;
    _Bool _menuDownWillFireAutomaticUp;
    struct CGRect _screenBounds;
    HNDFingerView *_pinchFinger1;
    HNDFingerView *_pinchFinger2;
    HNDPinchChainView *_pinchChain;
    int _orientation;
    NSMutableArray *_fingers;
    _Bool _showingHoverOverMenu;
    _Bool _isPressedDown;
    _Bool _openedMenuOnDown;
    _Bool _inPinchMode;
    double _nubbitTouchToUpTimeLatency;
    double _nubbitTouchDownTime;
    struct SCRCMathAverageValue _nubbitDistanceTracking;
    struct SCRCMathAverageValue _nubbitAngleTracking;
    double _nubbitVelocity;
    _Bool _nubbitMoving;
    struct CGPoint _downPoint;
    struct CGPoint _movePoint;
    struct CGPoint _nubbitStartDownPoint;
    HNDView *_downView;
    unsigned int _lastHandType;
    double _maxOrbDuringTouch;
    double _nubbitPositionPercentage;
    int _nubbitPositionEdge;
    struct CGPoint _preKeyboardMovePosition;
    _Bool _visualsHidden;
    AXDispatchTimer *_positionSetTimer;
    _Bool _keyboardVisible;
    struct CGRect _keyboardFrame;
    _Bool _orbActionExists;
    _Bool _playedHapticForCurrentEvent;
    NSDictionary *_lastReachabilityPayload;
    _Bool _longPressActionActivated;
    AXDispatchTimer *_longPressTimer;
    AXDispatchTimer *_doubleTapTimer;
    struct UIEdgeInsets _safeAreaInsets;
    AXUIClient *_userInterfaceClient;
    double _lastMenuInteractionTime;
    NSString *_reachabilityHandlerIdentifier;
    double _reachabilityOffset;
    NSMutableSet *_userInterfaceClientEnablers;
}

+ (double)fadeDuration;
+ (id)sharedManager;
+ (void)initialize;
@property(retain, nonatomic) NSMutableSet *userInterfaceClientEnablers; // @synthesize userInterfaceClientEnablers=_userInterfaceClientEnablers;
@property(nonatomic) double reachabilityOffset; // @synthesize reachabilityOffset=_reachabilityOffset;
@property(copy, nonatomic) NSString *reachabilityHandlerIdentifier; // @synthesize reachabilityHandlerIdentifier=_reachabilityHandlerIdentifier;
@property(nonatomic) double lastMenuInteractionTime; // @synthesize lastMenuInteractionTime=_lastMenuInteractionTime;
@property(retain, nonatomic) AXUIClient *userInterfaceClient; // @synthesize userInterfaceClient=_userInterfaceClient;
@property(nonatomic) _Bool playedHapticForCurrentEvent; // @synthesize playedHapticForCurrentEvent=_playedHapticForCurrentEvent;
@property(nonatomic) _Bool showingHoverOverMenu; // @synthesize showingHoverOverMenu=_showingHoverOverMenu;
- (void).cxx_destruct;
- (_Bool)_nubbitIsOverFrame:(struct CGRect)arg1;
- (struct CGPoint)_testingRockerPosition;
@property(readonly, nonatomic) UIView *scannerBackCursorView;
@property(readonly, nonatomic) UIView *scannerFrontCursorView;
@property(readonly, nonatomic) UIView *scannerContentView;
- (void)showSimpleBannerWithTitle:(id)arg1 text:(id)arg2;
- (void)showSimpleAlertWithText:(id)arg1;
- (void)_cleanupUserInterfaceClient;
- (void)_setupUserInterfaceClient;
- (void)removeUserInterfaceClientEnabler:(id)arg1;
- (void)addUserInterfaceClientEnabler:(id)arg1;
- (void)viewPressedUp:(id)arg1;
- (void)activateAssistiveTouchAction:(id)arg1;
- (id)rocker;
- (void)viewOrbActionTriggered:(id)arg1;
- (void)transformSizeOfCustomGestureIconWithForce:(double)arg1;
- (void)viewPressedDown:(id)arg1;
- (void)didFailToFloatApp;
- (void)didFailToPinApp;
- (void)volumeChanged;
- (_Bool)inNubbitMode;
- (void)updateRotationLockSwitch;
- (void)updateRingerSwitch;
- (void)deviceCountChanged:(long long)arg1;
- (void)_deviceCountChanged:(id)arg1;
- (void)updateMenuStyle;
- (void)restartWithCompletion:(CDUnknownBlockType)arg1;
- (void)handlePinchToolEndMove;
- (void)handlePinchToolBeginMove;
- (void)resetPinchChain:(struct CGPoint)arg1;
- (void)getFirstFingerPosition:(struct CGPoint *)arg1 secondFingerPosition:(struct CGPoint *)arg2 forPinchAroundFulcrum:(struct CGPoint)arg3;
- (struct CGPoint)_onScreenMidpointForPinchChainMidpoint:(struct CGPoint)arg1;
- (void)hidePinchFingers;
- (void)showPinchFingers:(_Bool)arg1 withPoint:(struct CGPoint)arg2 animateToVisible:(_Bool)arg3 alpha:(double)arg4;
- (void)showPinchFingers:(_Bool)arg1 withPoint:(struct CGPoint)arg2;
- (void)updatePinchChain;
- (void)_updatePinchChainFrame;
- (void)removeMultiFingers:(_Bool)arg1 animateToPoint:(struct CGPoint)arg2;
- (void)removeMultiFingers:(_Bool)arg1;
- (_Bool)isMenuVisible;
- (void)showMenu:(_Bool)arg1;
- (void)hideVisuals:(_Bool)arg1 animate:(_Bool)arg2;
- (_Bool)visualsHidden;
- (_Bool)acceptsHitTest:(struct CGPoint)arg1;
- (void)showPrimaryFinger:(_Bool)arg1 location:(struct CGPoint)arg2;
- (void)showPrimaryFinger:(_Bool)arg1 active:(_Bool)arg2 location:(struct CGPoint)arg3;
- (struct CGPoint)_layoutPointForPoint:(struct CGPoint)arg1 screenBounds:(struct CGRect)arg2;
- (struct CGPoint)_menuPointForFingerLayout;
- (void)adjustMultiFingersToScreenCenter;
- (struct CGPoint)centroidForPinchChainMidPoint:(struct CGPoint)arg1;
- (struct CGPoint)standardCentroidForMultifingers:(struct CGPoint)arg1;
- (struct CGPoint)absoluteCentroidForMultifingers:(struct CGPoint)arg1;
- (struct CGRect)rotatedScreenBounds;
- (void)setFingersVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)performPress:(int)arg1 type:(int)arg2;
- (_Bool)inPinchMode;
- (void)_handlePinchPress:(_Bool)arg1;
- (void)_multiFingers:(_Bool)arg1 animated:(_Bool)arg2;
- (void)cancelImplodeAnimation;
- (void)showCircleMenu:(_Bool)arg1;
- (void)fingerFinishedImplosion:(id)arg1;
- (void)_displayLinkFired:(id)arg1;
- (struct CGRect)screenBounds;
- (struct CGPoint)point;
- (struct CGPoint)screenPoint;
- (struct CGPoint)rotatedScreenPoint;
- (struct CGPoint)hoverMoved:(struct CGPoint)arg1;
- (_Bool)initialDownMenuCanTransitionToPressDown;
- (_Bool)initialMenuDownHasFinished;
- (int)orientation;
- (void)setOrientation:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_updateViewsForOrientation;
- (struct CGAffineTransform)_transformForOrientation;
- (unsigned long long)isFingerInCorner;
- (double)_rotationDegreesForOrientation:(int)arg1;
- (void)modifyPinch:(_Bool)arg1 angle:(double)arg2 movement:(struct CGPoint)arg3;
- (void)modifyRealPinch:(struct CGPoint)arg1 finger:(id)arg2;
- (struct CGPoint)modifyFakePinch:(struct CGPoint)arg1;
- (void)_updateCurrentPoint:(struct CGPoint)arg1;
- (struct CGPoint)_renormalizedPointDifference:(struct CGPoint)arg1;
- (void)_startIdleTimer;
- (void)_idleTimerFired;
- (void)activateDisplayItems;
- (void)_longIdleTimerFired;
- (id)currentMultiFingerPositions;
- (void)showMultiFingersWithPoints:(id)arg1 alpha:(double)arg2;
- (void)showMultiFingersWithPoints:(id)arg1;
- (_Bool)_shouldEnableMultiTouchToolBackground;
- (void)setFingerAtIndex:(long long)arg1 pressed:(_Bool)arg2;
- (void)moveFinger:(long long)arg1 toPoint:(struct CGPoint)arg2;
- (_Bool)canMoveFinger:(long long)arg1 toPoint:(struct CGPoint)arg2;
- (id)addFinger:(struct CGPoint)arg1;
- (id)addFinger:(struct CGPoint)arg1 active:(_Bool)arg2;
- (id)multiFingers;
- (id)fingerViews;
- (struct CGPoint)convertPointFromOrientation:(struct CGPoint)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOrientation:(int)arg2;
- (struct CGPoint)convertPointToOrientation:(struct CGPoint)arg1;
- (void)updateRockersForSubstantialTransition;
- (_Bool)handleRealEvent:(id)arg1;
- (void)resetNubbitLocation;
- (id)viewAtDisplayPoint:(struct CGPoint)arg1;
- (id)window;
- (id)viewAtDisplayPoint:(struct CGPoint)arg1 downPoint:(struct CGPoint *)arg2 window:(id)arg3;
- (double)_iconScaleForForce:(double)arg1;
- (void)_handleNubbitMove:(struct CGPoint)arg1 event:(id)arg2;
- (void)keyboardVisible:(_Bool)arg1 withFrame:(struct CGRect)arg2;
@property(nonatomic) struct UIEdgeInsets safeAreaInsets;
- (void)_moveNubbitForKeyboard:(struct CGRect)arg1;
- (struct CGPoint)_nubbitPositionForKeyboardFrame:(struct CGRect)arg1;
- (_Bool)_nubbitIsOverKeyboard:(struct CGRect)arg1;
- (_Bool)_position:(struct CGPoint)arg1 isOverKeyboard:(struct CGRect)arg2;
- (void)_repositionNubbitAfterLift:(struct CGPoint)arg1;
- (void)_moveNubbitToPosition:(struct CGPoint)arg1 forKeyboard:(_Bool)arg2;
- (void)_updateNubbitEdgePosition:(struct CGPoint)arg1;
- (void)_updateNubbitPosition;
- (struct CGPoint)_nubbitPointForEdgePosition;
- (void)_moveNubbitToPosition:(struct CGPoint)arg1;
- (struct CGPoint)_validateNubbitPosition:(struct CGPoint)arg1 forKeyboard:(_Bool)arg2;
- (double)_xNubbitPadding:(double)arg1 x:(double)arg2;
- (double)_yNubbitPadding:(double)arg1 y:(double)arg2;
- (struct CGPoint)nubbitPositionForFlick:(struct CGPoint)arg1;
- (int)_angleForDegrees:(double)arg1;
- (struct CGPoint)closestNubbitPositionForPoint:(struct CGPoint)arg1 offsetByMidpoint:(_Bool)arg2;
- (long long)fingerCount;
- (void)setMultiTouchToolBackgroundEnabled:(_Bool)arg1;
- (_Bool)multiTouchToolBackgroundEnabled;
- (void)_hoverMultiFingers:(struct CGPoint)arg1;
- (void)_hoverFingerRecorder:(struct CGPoint)arg1;
- (void)_endHandlingReachabilityIfNeeded;
- (void)_startHandlingReachabilityIfNeeded;
- (void)_handleReachability:(id)arg1;
- (void)_resetReachabilityOffset;
- (void)_updateRockerReachability;
- (void)dealloc;
- (void)cleanup;
- (void)placeNubbitAtBottomCenter;
- (void)initializeDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

