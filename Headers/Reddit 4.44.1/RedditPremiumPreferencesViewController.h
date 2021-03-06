//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

@class RedditService, UIStackView;

@interface RedditPremiumPreferencesViewController : BaseViewController
{
    RedditService *_service;
    UIStackView *_contentStackView;
}

@property(retain, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)lineSeparatorView;
- (id)spacerWithHeight:(double)arg1;
- (id)buttonWithTitle:(id)arg1 action:(SEL)arg2;
- (id)labelWithText:(id)arg1;
- (id)labelWithTitle:(id)arg1;
- (void)manageWebSubscriptionDidTap:(id)arg1;
- (void)manageInAppSubscriptionDidTap:(id)arg1;
- (void)setupViewsForNonSubscriber;
- (void)setupViewsForSubscriber;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1;

@end

