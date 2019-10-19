//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HTSDanmukuSettingCustomSlider, UILabel;

@interface HTSLiveGameDanmukuSettingSlider : UIView
{
    CDUnknownBlockType _valueChangedBlock;
    HTSDanmukuSettingCustomSlider *_slider;
    UILabel *_valueLabel;
    long long _currentValue;
}

@property(nonatomic) long long currentValue; // @synthesize currentValue=_currentValue;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) HTSDanmukuSettingCustomSlider *slider; // @synthesize slider=_slider;
@property(copy, nonatomic) CDUnknownBlockType valueChangedBlock; // @synthesize valueChangedBlock=_valueChangedBlock;
- (void).cxx_destruct;
- (double)thumbCenterX;
- (void)updateValueLabel;
- (void)layoutSubviews;
- (void)slideChanged:(id)arg1;
- (void)setValue:(long long)arg1;
@property(readonly, nonatomic) double value;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;

@end
