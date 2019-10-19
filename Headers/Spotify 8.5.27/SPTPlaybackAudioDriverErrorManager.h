//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAudioDriverControllerObserver-Protocol.h"
#import "SPTAudioDriverObserver-Protocol.h"

@class NSString;
@protocol SPTAudioDriverController, SPTBannerPresentationManager, SPTBannerPresentationManagerTicket;

@interface SPTPlaybackAudioDriverErrorManager : NSObject <SPTAudioDriverControllerObserver, SPTAudioDriverObserver>
{
    id <SPTAudioDriverController> _audioDriverController;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTBannerPresentationManagerTicket> _bannerTicket;
}

+ (id)playbackAudioDriverErrorManagerWithAudioDriverController:(id)arg1 bannerPresentationManager:(id)arg2;
@property(retain, nonatomic) id <SPTBannerPresentationManagerTicket> bannerTicket; // @synthesize bannerTicket=_bannerTicket;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(nonatomic) __weak id <SPTAudioDriverController> audioDriverController; // @synthesize audioDriverController=_audioDriverController;
- (void).cxx_destruct;
- (void)audioDriverDidStartRunning:(id)arg1;
- (void)audioDriver:(id)arg1 didFailWithError:(id)arg2;
- (id)errorCodesForError:(id)arg1;
- (void)audioDriverDidBegin:(id)arg1;
- (void)audioDriverController:(id)arg1 didRemoveAudioDriver:(id)arg2;
- (void)audioDriverController:(id)arg1 didAddAudioDriver:(id)arg2;
- (void)dismissBanner;
- (id)initWithAudioDriverController:(id)arg1 bannerPresentationManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
