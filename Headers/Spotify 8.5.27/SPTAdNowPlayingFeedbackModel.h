//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuPresenterDelegate-Protocol.h"

@class NSArray, NSString, SPTAdPlayerObservable;
@protocol SPContextMenuFeature, SPTAdsBaseEntity, SPTContextMenuPresenter, SPTLogCenter, SPTSnackbarConditionalPresenter;

@interface SPTAdNowPlayingFeedbackModel : NSObject <SPTContextMenuPresenterDelegate>
{
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    id <SPTLogCenter> _logCenter;
    SPTAdPlayerObservable *_playerObserver;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPTAdsBaseEntity> _adEntity;
    NSArray *_contextMenuActions;
}

@property(copy, nonatomic) NSArray *contextMenuActions; // @synthesize contextMenuActions=_contextMenuActions;
@property(retain, nonatomic) id <SPTAdsBaseEntity> adEntity; // @synthesize adEntity=_adEntity;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(readonly, nonatomic) SPTAdPlayerObservable *playerObserver; // @synthesize playerObserver=_playerObserver;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
- (void).cxx_destruct;
- (void)contextMenuPresenterDidDismiss:(id)arg1;
- (void)logEventForAdEntity:(id)arg1 action:(id)arg2;
- (id)randomizedArrayFromArray:(id)arg1;
- (void)performNegativeActionForAd:(id)arg1 inViewController:(id)arg2 sender:(id)arg3;
- (void)performPositiveActionForAd:(id)arg1 inViewController:(id)arg2 withSender:(id)arg3;
- (id)initWithEducationPresenter:(id)arg1 contextMenuFeature:(id)arg2 logCenter:(id)arg3 playerObserver:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

