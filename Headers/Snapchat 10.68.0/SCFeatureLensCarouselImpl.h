//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureLensCarousel-Protocol.h"
#import "SCLensUIUpdateListener-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"

@class NSString, SCBehaviorSubject, SCDisposableObserverLifecycle, SCFeatureReference, SCLens, SCManagedCapturerState, SCObservable, SCReplyParameters;
@protocol SCCameraViewControllerLensDelegate;

@interface SCFeatureLensCarouselImpl : SCFeature <SCLensUIUpdateListener, SCFeatureLensCarousel, SCManagedCapturerListener>
{
    long long _applicationState;
    _Bool _lensCarouselOpen;
    _Bool _subscribedToLensCarouselEvents;
    SCLens *_selectedLens;
    SCManagedCapturerState *_managedCapturerState;
    SCReplyParameters *_replyParameters;
    id <SCCameraViewControllerLensDelegate> _lensDelegate;
    SCDisposableObserverLifecycle *_appLifecycleObserver;
    SCObservable *_applicationLifecycleEvents;
    SCBehaviorSubject *_lensCarouselActivationStateObservable;
    SCBehaviorSubject *_willLensCarouselOpenObservable;
    SCBehaviorSubject *_selectedLensObservable;
    SCFeatureReference *_cameraToggler;
}

@property(readonly, nonatomic) SCObservable *selectedLensObservable; // @synthesize selectedLensObservable=_selectedLensObservable;
@property(readonly, nonatomic) SCObservable *willLensCarouselOpenObservable; // @synthesize willLensCarouselOpenObservable=_willLensCarouselOpenObservable;
@property(readonly, nonatomic) SCObservable *lensCarouselActivationStateObservable; // @synthesize lensCarouselActivationStateObservable=_lensCarouselActivationStateObservable;
- (void).cxx_destruct;
- (void)_updateLensCarouselOpenedState:(_Bool)arg1;
- (void)_setCameraPositionForLens:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_subscribeToLensCarouselEventsIfNeeded;
- (void)willShowLenses;
- (void)willDisplayLens:(id)arg1;
- (void)didUpdateActiveLensOrder:(id)arg1;
- (void)didHideLenses;
- (void)didEndDisplayingLens:(id)arg1;
- (void)didSelectLens:(id)arg1;
- (id)turnLensesOnAndSelectFirstApplicableLens;
- (void)turnLensesOnWithActivationState:(id)arg1;
- (void)setReplyParameters:(id)arg1;
- (void)setCameraPositionForLens:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)selectLens:(id)arg1 switchCameraIfNeeded:(_Bool)arg2;
- (void)selectLens:(id)arg1;
- (void)managedCapturer:(id)arg1 didChangeCaptureDevicePosition:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeLensesActive:(id)arg2;
@property(nonatomic) __weak id <SCCameraViewControllerLensDelegate> lensDelegate; // @synthesize lensDelegate=_lensDelegate;
- (void)activate;
- (id)initWithApplicationLifecycleEvents:(id)arg1 cameraToggler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

