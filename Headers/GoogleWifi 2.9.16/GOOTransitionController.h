//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOONavigationControllerDelegate-Protocol.h"

@class GOOTransitionControllerState, NSMutableArray, NSMutableSet, NSString;

@interface GOOTransitionController : NSObject <GOONavigationControllerDelegate>
{
    GOOTransitionControllerState *_currentState;
    NSMutableSet *_cachedStates;
    NSMutableArray *_registeredAnimatedTransitioningProviders;
}

- (void).cxx_destruct;
- (unsigned long long)componentOptionsForTransition:(id)arg1;
- (void)removeAllNonCurrentStates;
- (id)stateFromViewController:(id)arg1;
- (id)navigationController:(id)arg1 headerAnimationControllerForOperation:(long long)arg2 operationContext:(id)arg3 fromViewController:(id)arg4 toViewController:(id)arg5;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 operationContext:(id)arg3 fromViewController:(id)arg4 toViewController:(id)arg5;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)registerAnimatedTransitioningProvider:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
