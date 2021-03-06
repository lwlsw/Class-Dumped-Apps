//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class BaseButton, BaseImageView, BaseLabel;
@protocol ChatSplashViewDelegate;

@interface ChatSplashView : BaseView
{
    id <ChatSplashViewDelegate> _delegate;
    unsigned long long _type;
    BaseButton *_primaryCtaButton;
    BaseLabel *_titleLabel;
    BaseLabel *_descriptionLabel;
    BaseImageView *_imageView;
}

@property(retain, nonatomic) BaseImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) BaseLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) BaseButton *primaryCtaButton; // @synthesize primaryCtaButton=_primaryCtaButton;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <ChatSplashViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)primaryCtaButtonAction;
- (void)configureWithType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (_Bool)prefersStatusBarHidden;

@end

