//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SCScrollUpAffordanceView, UIScrollView;
@protocol SCVerticalSwipeViewDelegate;

@interface SCVerticalSwipeView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    _Bool _headerOnlySubview;
    _Bool _offsetEnabled;
    _Bool _bottomSubviewVisible;
    id <SCVerticalSwipeViewDelegate> delegate;
    unsigned long long _currentPageIndex;
    UIScrollView *_scrollView;
    SCScrollUpAffordanceView *_affordanceTouchView;
    UIScrollView *_bottomSubviewScrollView;
    double _bottomSubviewOffset;
    UIView *_topSubviewContainerView;
    UIView *_bottomSubviewContainerView;
    struct CGPoint _currentSecondPageScrollViewOffset;
}

@property(retain, nonatomic) UIView *bottomSubviewContainerView; // @synthesize bottomSubviewContainerView=_bottomSubviewContainerView;
@property(retain, nonatomic) UIView *topSubviewContainerView; // @synthesize topSubviewContainerView=_topSubviewContainerView;
@property(nonatomic) double bottomSubviewOffset; // @synthesize bottomSubviewOffset=_bottomSubviewOffset;
@property(nonatomic) _Bool bottomSubviewVisible; // @synthesize bottomSubviewVisible=_bottomSubviewVisible;
@property(retain, nonatomic) UIScrollView *bottomSubviewScrollView; // @synthesize bottomSubviewScrollView=_bottomSubviewScrollView;
@property(nonatomic) _Bool offsetEnabled; // @synthesize offsetEnabled=_offsetEnabled;
@property(nonatomic) _Bool headerOnlySubview; // @synthesize headerOnlySubview=_headerOnlySubview;
@property(retain, nonatomic) SCScrollUpAffordanceView *affordanceTouchView; // @synthesize affordanceTouchView=_affordanceTouchView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct CGPoint currentSecondPageScrollViewOffset; // @synthesize currentSecondPageScrollViewOffset=_currentSecondPageScrollViewOffset;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) __weak id <SCVerticalSwipeViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)scrollToBottom:(_Bool)arg1;
- (void)scrollToTop:(_Bool)arg1;
- (void)setTopSubviewTopOffset:(double)arg1;
- (void)setAffordanceViewVisible:(_Bool)arg1;
- (void)setScrollEnabled:(_Bool)arg1;
- (_Bool)isDraggingOrDecelerating;
- (_Bool)isScrolling;
- (double)yOffset;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_handlePageChange:(id)arg1 yOffset:(double)arg2;
- (void)_handleBottomSubviewVisiblityChange:(id)arg1 yOffset:(double)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideAffordanceArrow;
- (void)showAffordanceArrow;
- (void)slideInAffordanceArrow;
- (void)slideInAffordanceArrowWithAffordanceText:(id)arg1;
- (void)didTapAffordanceView:(id)arg1;
- (void)_setupTapGestureRecognizerForAffordanceView;
- (void)_setupAffordanceViewConstraints;
- (void)_setupScrollView;
- (void)restoreTopSubviewPosition;
- (void)insertTopSubviewAboveBottomSubview;
- (void)setBottomSubviewFooterView:(id)arg1;
- (void)setBottomSubview:(id)arg1 withScrollView:(id)arg2;
- (void)setBottomSubviewConstraintsForOnlyHeader;
- (void)setBottomSubviewConstraints;
- (void)setBottomSubview:(id)arg1;
- (void)setTopSubview:(id)arg1;
- (_Bool)isOnTop;
- (void)dealloc;
- (id)initWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 bottomSubviewOffset:(double)arg3 affordanceText:(id)arg4 showGradientBackgroundForAffordance:(_Bool)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
