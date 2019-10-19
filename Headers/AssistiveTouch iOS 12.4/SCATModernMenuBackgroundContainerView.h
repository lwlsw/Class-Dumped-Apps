//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCATModernMenuContentViewContainer, SCATModernMenuFooterView;

@interface SCATModernMenuBackgroundContainerView : UIView
{
    _Bool _showingFooterView;
    _Bool _shouldUseDockContentPadding;
    SCATModernMenuContentViewContainer *_contentViewContainer;
    SCATModernMenuFooterView *_footerView;
}

@property(nonatomic) _Bool shouldUseDockContentPadding; // @synthesize shouldUseDockContentPadding=_shouldUseDockContentPadding;
@property(nonatomic, getter=isShowingFooterView) _Bool showingFooterView; // @synthesize showingFooterView=_showingFooterView;
@property(retain, nonatomic) SCATModernMenuFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) SCATModernMenuContentViewContainer *contentViewContainer; // @synthesize contentViewContainer=_contentViewContainer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets contentPadding;
- (id)initWithFrame:(struct CGRect)arg1;

@end
