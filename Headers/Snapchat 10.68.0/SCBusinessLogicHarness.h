//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSOperationQueue, SCBehaviorSubject, SCBusinessLogic, SCDisposableObserverLifecycle, SCScreen;

@interface SCBusinessLogicHarness : NSObject
{
    SCBusinessLogic *_businessLogic;
    NSOperationQueue *_businessLogicQueue;
    SCDisposableObserverLifecycle *_subscriptions;
    SCBehaviorSubject *_viewModels;
    NSMutableSet *_childHarnesses;
    SCScreen *_screen;
}

- (void).cxx_destruct;
- (void)_handleNewAction:(id)arg1;
- (void)_emitViewModel;
- (void)_setActions:(id)arg1;
- (id)addChildBusinessLogic:(id)arg1;
- (id)screen;
- (id)initWithBusinessLogic:(id)arg1 businessLogicQueue:(id)arg2;
- (id)initWithBusinessLogic:(id)arg1;

@end

