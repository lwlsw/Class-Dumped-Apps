//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADNAdRendering-Protocol.h"

@class GADNInterstitialAd, GADNServerTransaction, GADNTargeting, NSDictionary, NSString;

@interface GADNMediationRewardBasedVideoAdRenderer : NSObject <GADNAdRendering>
{
    GADNServerTransaction *_transaction;
    struct NSDictionary *_adConfiguration;
    id _connector;
    CDUnknownBlockType _renderCompletionHandler;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _adLoadCompleted
    GADNInterstitialAd *_rewardBasedVideoAd;
    NSDictionary *_rewardGrantedUserInfo;
    NSString *_shouldRenderTestAdLabel;
}

@property(readonly, nonatomic) NSString *shouldRenderTestAdLabel; // @synthesize shouldRenderTestAdLabel=_shouldRenderTestAdLabel;
@property(readonly, nonatomic) NSDictionary *rewardGrantedUserInfo; // @synthesize rewardGrantedUserInfo=_rewardGrantedUserInfo;
- (void).cxx_destruct;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) GADNTargeting *targeting;
- (void)receivedRewardBasedVideoAdWithError:(id)arg1;
- (void)receivedRewardBasedVideoAdFromConnector:(id)arg1;
- (void)failedToSetUpWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

