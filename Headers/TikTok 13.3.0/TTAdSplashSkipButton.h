//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIColor, UILabel, UIView;

@interface TTAdSplashSkipButton : UIButton
{
    _Bool _countDownUnitPrefix;
    NSString *_skipText;
    UILabel *_textLabel;
    UIView *_bgView;
}

@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) NSString *skipText; // @synthesize skipText=_skipText;
@property(nonatomic) _Bool countDownUnitPrefix; // @synthesize countDownUnitPrefix=_countDownUnitPrefix;
- (void).cxx_destruct;
- (void)updateFrame;
- (void)updatePrefixString:(id)arg1;
@property(retain, nonatomic) UIColor *bgColor;
@property(retain, nonatomic) UIColor *textColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end
