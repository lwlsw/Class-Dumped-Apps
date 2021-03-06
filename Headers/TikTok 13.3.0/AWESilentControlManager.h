//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEBubble, NSOperationQueue, NSPointerArray, UIView;

@interface AWESilentControlManager : NSObject
{
    _Bool _isSilent;
    _Bool _isFadingInVolume;
    double _currentVolume;
    NSOperationQueue *_volumeAdjustOperationQueue;
    NSPointerArray *_registeredSilentControls;
    AWEBubble *_soundHintBubble;
    UIView *_bubbleParentView;
}

+ (unsigned long long)currentSilentStrategy;
+ (_Bool)isNewUser;
+ (_Bool)checkExemptState;
+ (id)sharedInstance;
@property(nonatomic) __weak UIView *bubbleParentView; // @synthesize bubbleParentView=_bubbleParentView;
@property(retain, nonatomic) AWEBubble *soundHintBubble; // @synthesize soundHintBubble=_soundHintBubble;
@property(retain, nonatomic) NSPointerArray *registeredSilentControls; // @synthesize registeredSilentControls=_registeredSilentControls;
@property(retain, nonatomic) NSOperationQueue *volumeAdjustOperationQueue; // @synthesize volumeAdjustOperationQueue=_volumeAdjustOperationQueue;
@property(nonatomic) double currentVolume; // @synthesize currentVolume=_currentVolume;
@property(nonatomic) _Bool isFadingInVolume; // @synthesize isFadingInVolume=_isFadingInVolume;
@property(nonatomic) _Bool isSilent; // @synthesize isSilent=_isSilent;
- (void).cxx_destruct;
- (void)registerSilentControl:(id)arg1;
- (void)updateSilentControls;
- (void)clickSilentButton:(id)arg1;
- (id)registerSilentControl;
- (void)reset;
- (void)resetVolume;
- (_Bool)closeSoundHintGuideIfNeeded;
- (void)showBubbleWithHint:(id)arg1 forView:(id)arg2;
- (void)_fadeIn;
- (void)fadeIn;
- (double)rampVolumeFrom:(double)arg1 exp:(double)arg2;
- (_Bool)shouldSilentVolumn;
- (_Bool)shouldKeepVolumn;
@property(readonly, nonatomic) _Bool shouldFadeInVolumn;
- (_Bool)shouldShowSilentControlIcon;
- (void)startFadingInVolumnIfNeeded;
- (void)updateAndDoActions;
- (double)getCurrentVolume;
- (void)checkSilentStatus;

@end

