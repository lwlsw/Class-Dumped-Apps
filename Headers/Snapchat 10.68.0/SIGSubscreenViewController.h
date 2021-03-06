//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SIGCardTransitionDelegate-Protocol.h"
#import "SIGHeaderDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, SIGHeader, SIGHeaderItem, SIGSubscreenViewControllerContentFade, UIScrollView, UIView;
@protocol SIGCardTransition;

@interface SIGSubscreenViewController : UIViewController <SIGCardTransitionDelegate, SIGHeaderDelegate>
{
    SIGHeader *_header;
    UIScrollView *_scrollView;
    UIView *_backgroundView;
    UIView *_contentView;
    SIGSubscreenViewControllerContentFade *_fade;
    NSLayoutConstraint *_fadeTopAnchor;
    _Bool _updatingInsets;
    unsigned long long _currentPresentationMode;
    _Bool _userCanPullToDismiss;
    unsigned long long _style;
    unsigned long long _presentationMode;
    id <SIGCardTransition> _cardTransition;
    SIGHeaderItem *_headerItem;
}

@property(readonly, nonatomic) SIGHeaderItem *headerItem; // @synthesize headerItem=_headerItem;
@property(readonly, nonatomic) id <SIGCardTransition> cardTransition; // @synthesize cardTransition=_cardTransition;
@property(nonatomic, getter=isPullToDismissEnabled) _Bool userCanPullToDismiss; // @synthesize userCanPullToDismiss=_userCanPullToDismiss;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_scrollViewBeingPanned;
- (void)scrollViewDidScroll;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didSelectDismissalActionWithHeader:(id)arg1;
- (void)cardTransitionEndedWithView:(id)arg1 transitionType:(unsigned long long)arg2;
- (void)cardTransitionDidUpdateProgress:(double)arg1;
- (void)cardTransitionWillBeginWithView:(id)arg1;
- (id)cardToExpandTransition;
- (_Bool)cardTransitionShouldBeginWithView:(id)arg1;
- (void)_installPullToDismiss;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setupStickySectionHeadersIfNeeded;
- (void)loadView;
- (void)_setupAutolayoutWithScrollLayoutView:(id)arg1;
- (id)scrollViewBottomAnchor;
- (id)scrollViewTopAnchor;
- (void)setScrollView:(id)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) SIGHeader *header;
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, nonatomic) UIView *backgroundView;
- (id)loadScrollView;
- (void)_stylize;
- (void)updateScrollViewInsets;
- (void)_syncronizeHeaderWithScrollView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

