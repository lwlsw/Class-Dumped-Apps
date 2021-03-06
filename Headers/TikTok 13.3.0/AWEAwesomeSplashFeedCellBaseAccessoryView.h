//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAwemeModel, AWESplashFakeLaunchScreenView, UIImageView;

@interface AWEAwesomeSplashFeedCellBaseAccessoryView : UIView
{
    AWEAwemeModel *_model;
    UIImageView *_logoView;
    AWESplashFakeLaunchScreenView *_fakeLaunchScreenView;
}

+ (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2;
@property(retain, nonatomic) AWESplashFakeLaunchScreenView *fakeLaunchScreenView; // @synthesize fakeLaunchScreenView=_fakeLaunchScreenView;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)updateSkipViewWithTimeInterval:(double)arg1;
- (void)removeFakeLaunchScreen;
- (void)onSplashScreenClicked;
- (void)catchGesture;
- (void)addExtraView;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

