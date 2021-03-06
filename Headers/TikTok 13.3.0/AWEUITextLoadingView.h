//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEUILoadingView, UILabel;

@interface AWEUITextLoadingView : UIView
{
    UIView *_hudView;
    AWEUILoadingView *_loadingView;
    UILabel *_titleLabel;
    UIView *_containerView;
}

+ (id)p_imageWithColor:(id)arg1;
+ (id)showLoadingOnView:(id)arg1 withTitle:(id)arg2;
+ (id)showLoadingOnView:(id)arg1 title:(id)arg2 animated:(_Bool)arg3;
+ (id)showLoadingOnView:(id)arg1 title:(id)arg2 animated:(_Bool)arg3 afterDelay:(double)arg4;
+ (void)dismissWindowLoading;
+ (void)dismissWindowLoadingWithAnimated:(_Bool)arg1;
+ (id)showWindowLoadingWithTitle:(id)arg1;
+ (id)showWindowLoadingWithTitle:(id)arg1 animated:(_Bool)arg2;
+ (id)showWindowLoadingWithTitle:(id)arg1 animated:(_Bool)arg2 afterDelay:(double)arg3;
+ (id)sharedView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *hudView; // @synthesize hudView=_hudView;
- (void).cxx_destruct;
- (void)p_showLoadingOnView:(id)arg1 title:(id)arg2 animated:(_Bool)arg3;
- (void)p_showLoadingOnView:(id)arg1;
- (void)allowUserInteraction:(_Bool)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setTitle:(id)arg1;
- (void)dismiss;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)setupUI;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

