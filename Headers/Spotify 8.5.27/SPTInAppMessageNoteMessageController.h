//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageNoteMessagePriorityDeciderDelegate-Protocol.h"

@class NSString, SPTInAppMessageActionFactory, SPTInAppMessageNoteMessageParser, SPTInAppMessageNoteMessagePresentationController, SPTInAppMessageNoteMessageViewModel, SPTInAppMessageNotePresentationManager, SPTInAppMessageNowPlayingManagerRegistryImplementation, SPTInAppMessageServiceLogger;
@protocol SPTAuthController, SPTBannerPresentationManager, SPTCrashReporter, SPTExternalIntegrationDriverDistractionController, SPTFreeTierTooltipConditionalPresenter, SPTOfflineModeState, SPTSlateManager, SPTSnackbarConditionalPresenter, SPTTooltipPresentationManager;

@interface SPTInAppMessageNoteMessageController : NSObject <SPTInAppMessageNoteMessagePriorityDeciderDelegate>
{
    SPTInAppMessageNoteMessageParser *_noteMessageParser;
    id <SPTSlateManager> _slateManager;
    SPTInAppMessageNotePresentationManager *_notePresentationManager;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTTooltipPresentationManager> _tooltipPresentationManager;
    id <SPTFreeTierTooltipConditionalPresenter> _freeTierTooltipPresenter;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    SPTInAppMessageActionFactory *_actionFactory;
    SPTInAppMessageServiceLogger *_serviceLogger;
    id <SPTExternalIntegrationDriverDistractionController> _driverDistractionController;
    SPTInAppMessageNoteMessageViewModel *_noteMessageViewModel;
    SPTInAppMessageNoteMessagePresentationController *_notePresentationController;
    id <SPTOfflineModeState> _offlineModeState;
    SPTInAppMessageNowPlayingManagerRegistryImplementation *_nowPlayingManagerRegistry;
    id <SPTCrashReporter> _crashReporter;
    id <SPTAuthController> _authController;
}

@property(retain, nonatomic) id <SPTAuthController> authController; // @synthesize authController=_authController;
@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) SPTInAppMessageNowPlayingManagerRegistryImplementation *nowPlayingManagerRegistry; // @synthesize nowPlayingManagerRegistry=_nowPlayingManagerRegistry;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) SPTInAppMessageNoteMessagePresentationController *notePresentationController; // @synthesize notePresentationController=_notePresentationController;
@property(retain, nonatomic) SPTInAppMessageNoteMessageViewModel *noteMessageViewModel; // @synthesize noteMessageViewModel=_noteMessageViewModel;
@property(retain, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistractionController; // @synthesize driverDistractionController=_driverDistractionController;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(retain, nonatomic) SPTInAppMessageActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(retain, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(retain, nonatomic) id <SPTFreeTierTooltipConditionalPresenter> freeTierTooltipPresenter; // @synthesize freeTierTooltipPresenter=_freeTierTooltipPresenter;
@property(retain, nonatomic) id <SPTTooltipPresentationManager> tooltipPresentationManager; // @synthesize tooltipPresentationManager=_tooltipPresentationManager;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) SPTInAppMessageNotePresentationManager *notePresentationManager; // @synthesize notePresentationManager=_notePresentationManager;
@property(retain, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(retain, nonatomic) SPTInAppMessageNoteMessageParser *noteMessageParser; // @synthesize noteMessageParser=_noteMessageParser;
- (void).cxx_destruct;
- (void)noteMessagePriorityDeciderDidFetchMessage:(id)arg1 forTrigger:(id)arg2;
- (id)initWithNoteMessageParser:(id)arg1 slateManager:(id)arg2 notePresentationManager:(id)arg3 bannerPresentationManager:(id)arg4 tooltipPresentationManager:(id)arg5 freeTierTooltipPresenter:(id)arg6 snackbarPresenter:(id)arg7 actionFactory:(id)arg8 serviceLogger:(id)arg9 driverDistractionController:(id)arg10 offlineModeState:(id)arg11 nowPlayingManagerRegistry:(id)arg12 crashReporter:(id)arg13 authController:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

