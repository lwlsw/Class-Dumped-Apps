//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCComponentProtocol-Protocol.h"

@class AVAsset, AWEAnimatedButton, AWEFlashModeSwitchButton, NSArray, NSMutableSet, NSString, UIButton, UILabel;

@protocol ACCRecordToolBarComponentProtocol <ACCComponentProtocol>
@property(nonatomic) _Bool isSwapCamera;
@property(nonatomic) _Bool shouldShowTorchButton;
@property(nonatomic) _Bool useBeautySwitchButton;
@property(retain, nonatomic) NSMutableSet *viewsNeedsHidden;
@property(retain, nonatomic) UILabel *moreButtonLabel;
@property(retain, nonatomic) AWEAnimatedButton *moreButton;
@property(retain, nonatomic) UILabel *audioClipButtonLabel;
@property(retain, nonatomic) AWEAnimatedButton *musicClipButton;
@property(retain, nonatomic) UILabel *beautySwitchButtonLabel;
@property(retain, nonatomic) AWEAnimatedButton *beautySwitchButton;
@property(retain, nonatomic) UILabel *cameraSwapButtonLabel;
@property(retain, nonatomic) UIButton *cameraSwapButton;
@property(retain, nonatomic) UILabel *speedControlButtonLabel;
@property(retain, nonatomic) AWEAnimatedButton *speedControlButton;
- (void)clickVideoDurationButton:(AWEAnimatedButton *)arg1;
- (_Bool)enableLongDurationRecordAsTab;
- (void)clickTorchSwitchBtn:(AWEFlashModeSwitchButton *)arg1;
- (UILabel *)p_createButtonLabel:(NSString *)arg1;
- (void)updateAudioClipButtonStatusWithAsset:(AVAsset *)arg1;
- (void)clickSwapCameraBtn:(id)arg1;
- (void)updateTorchSwitchButtonStateForCameraChange;
- (void)updateTorchSwitchButtonHiddenState;
- (void)resetTorchSwitchButtonToOffState;
- (void)updateVideoDurationButtonState;
- (void)p_swapCameraComplete:(void (^)(void))arg1;
- (NSArray *)flashButtons;
@end

