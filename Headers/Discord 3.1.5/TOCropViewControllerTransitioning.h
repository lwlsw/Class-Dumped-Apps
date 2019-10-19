//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIImage, UIView;

@interface TOCropViewControllerTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _isDismissing;
    UIImage *_image;
    UIView *_fromView;
    UIView *_toView;
    CDUnknownBlockType _prepareForTransitionHandler;
    struct CGRect _fromFrame;
    struct CGRect _toFrame;
}

@property(copy, nonatomic) CDUnknownBlockType prepareForTransitionHandler; // @synthesize prepareForTransitionHandler=_prepareForTransitionHandler;
@property(nonatomic) struct CGRect toFrame; // @synthesize toFrame=_toFrame;
@property(nonatomic) struct CGRect fromFrame; // @synthesize fromFrame=_fromFrame;
@property(retain, nonatomic) UIView *toView; // @synthesize toView=_toView;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
- (void).cxx_destruct;
- (void)reset;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
