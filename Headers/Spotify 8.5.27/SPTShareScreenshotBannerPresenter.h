//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBannerViewDelegate-Protocol.h"

@class NSString, SPTShareScreenshotBannerLogger;
@protocol SPTBannerPresentationManager, SPTBannerPresentationManagerTicket, SPTShareEntityData, SPTShareScreenshotBannerPresenterDelegate, SPTShareTestManager;

@interface SPTShareScreenshotBannerPresenter : NSObject <SPTBannerViewDelegate>
{
    id <SPTShareEntityData> _shareEntityData;
    id <SPTShareScreenshotBannerPresenterDelegate> _delegate;
    id <SPTBannerPresentationManagerTicket> _bannerTicket;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTShareTestManager> _testManager;
    SPTShareScreenshotBannerLogger *_screenshotBannerLogger;
}

@property(retain, nonatomic) SPTShareScreenshotBannerLogger *screenshotBannerLogger; // @synthesize screenshotBannerLogger=_screenshotBannerLogger;
@property(retain, nonatomic) id <SPTShareTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) id <SPTBannerPresentationManagerTicket> bannerTicket; // @synthesize bannerTicket=_bannerTicket;
@property(nonatomic) __weak id <SPTShareScreenshotBannerPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SPTShareEntityData> shareEntityData; // @synthesize shareEntityData=_shareEntityData;
- (void).cxx_destruct;
- (void)actionButtonTappedInBannerView:(id)arg1;
- (void)closeButtonTappedInBannerView:(id)arg1;
- (void)dismissCurrentBannerAnimated:(_Bool)arg1;
- (void)presentShareScreenshotBanner:(id)arg1;
- (void)presentShareScreenshotBannerAndDismiss:(_Bool)arg1 afterDelay:(double)arg2;
- (id)initWithBannerPresentationManager:(id)arg1 screenshotBannerLogger:(id)arg2 testManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

