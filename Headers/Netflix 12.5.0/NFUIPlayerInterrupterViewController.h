//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NFUIPlayerControllerDelegate-Protocol.h"

@class NSString, NSTimer, UILabel;
@protocol NFUIPlayerInterrupterDelegate, UIViewControllerTransitioningDelegate;

@interface NFUIPlayerInterrupterViewController : UIViewController <NFUIPlayerControllerDelegate>
{
    long long _continuousEpisodeLimit;
    double _timeout;
    id <NFUIPlayerInterrupterDelegate> _delegate;
    id <UIViewControllerTransitioningDelegate> _transitioningDelegate;
    long long _continuousEpisodeCount;
    NSTimer *_playerInterrupterTimer;
    UILabel *_titleLabel;
    CDStruct_4d28754b _featureFlags;
}

+ (id)playerInterrupterViewController:(id)arg1;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSTimer *playerInterrupterTimer; // @synthesize playerInterrupterTimer=_playerInterrupterTimer;
@property(nonatomic) long long continuousEpisodeCount; // @synthesize continuousEpisodeCount=_continuousEpisodeCount;
@property(retain, nonatomic) id <UIViewControllerTransitioningDelegate> transitioningDelegate; // @synthesize transitioningDelegate=_transitioningDelegate;
@property(nonatomic) __weak id <NFUIPlayerInterrupterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long continuousEpisodeLimit; // @synthesize continuousEpisodeLimit=_continuousEpisodeLimit;
@property(nonatomic) CDStruct_4d28754b featureFlags; // @synthesize featureFlags=_featureFlags;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)resumeButtonAction:(id)arg1;
- (void)backToBrowseAction:(id)arg1;
- (void)playerController:(id)arg1 stateChange:(unsigned long long)arg2 previous:(unsigned long long)arg3;
- (void)shouldDisplay:(id)arg1;
- (void)resetContinuousEpisodeCountByUserAction;
- (void)incrementContinuousEpisodeCount:(_Bool)arg1;
- (void)cancelPlayerInterrupterTimer;
- (void)startInterrupterTimerForRuntime:(long long)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
