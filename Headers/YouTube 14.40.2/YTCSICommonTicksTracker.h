//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface YTCSICommonTicksTracker : NSObject
{
    NSArray *_ticks;
    long long _adRequestIndex;
    NSString *_adFormat;
    id <YTLegacyCSIAction> _action;
}

- (void).cxx_destruct;
- (void)checkAdFormatNotOverwritten:(id)arg1;
- (_Bool)adBreakLoaded;
- (int)tickForAdIndex:(long long)arg1;
- (void)didReceiveWatchNextResponse;
- (void)willRequestWatchNext;
- (void)didReceiveAdWithFormat:(id)arg1;
- (void)didPlay;
- (void)willLoadAdThenMainVideoWithMonetizable:(_Bool)arg1;
- (void)willPlayPrerollWithFormat:(id)arg1;
- (void)willRequestAd;
- (void)playerWillProvideStreamWithPlayerType:(int)arg1;
- (void)didPauseContentVideo;
- (void)willPauseContentVideo;
- (void)willPrebuffer;
- (void)didReceiveAdVideoInfo;
- (void)willRequestAdVideoInfo;
- (void)didReceiveAdBreakServiceResponse;
- (void)willRequestAdBreakService;
- (void)didStartAdTick;
- (void)didStartLoadingContent;
- (void)startAllTicks;
- (id)ticks;
- (id)initWithAction:(id)arg1;

@end

