//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIViewControllerInteractiveTransitioning.h"
#import "YTSwipeDismissAnimatorDelegate.h"

@class NSString, UIPanGestureRecognizer, UIViewController, UIViewPropertyAnimator, YTSwipeDismissAnimator;

@interface YTSwipeDismissInteractiveTransition : NSObject <UIGestureRecognizerDelegate, YTSwipeDismissAnimatorDelegate, UIViewControllerInteractiveTransitioning>
{
    UIViewController *_presentedViewController;
    double _progress;
    id <UIViewControllerContextTransitioning> _context;
    YTSwipeDismissAnimator *_animator;
    UIViewPropertyAnimator *_animation;
    double _startingFraction;
    UIPanGestureRecognizer *_interruptGestureRecognizer;
    _Bool _isInteractiveTransition;
    _Bool _isPanning;
    id <YTSwipeDismissInteractiveTransitionDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool isPanning; // @synthesize isPanning=_isPanning;
@property(nonatomic) __weak id <YTSwipeDismissInteractiveTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidComplete:(_Bool)arg1;
- (void)finishAnimation:(_Bool)arg1 withVelocity:(double)arg2;
- (void)didPan:(id)arg1;
- (void)prepareViewController:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithPresentedViewController:(id)arg1 animator:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end
