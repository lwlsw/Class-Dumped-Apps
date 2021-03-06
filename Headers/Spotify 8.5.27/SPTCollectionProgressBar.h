//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class CAShapeLayer, NSMutableArray, NSString;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTCollectionProgressBar : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    NSMutableArray *_colors;
    double _percentComplete;
    CAShapeLayer *_fullBarLayer;
    double _animationDuration;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) CAShapeLayer *fullBarLayer; // @synthesize fullBarLayer=_fullBarLayer;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(retain, nonatomic) NSMutableArray *colors; // @synthesize colors=_colors;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)animateFullBarLayerToPath:(id)arg1;
- (void)applyThemeLayout;
- (void)updateVisibleElementsAnimated:(_Bool)arg1;
- (void)setPercentComplete:(double)arg1 animated:(_Bool)arg2;
- (id)colorForPart:(unsigned long long)arg1;
- (void)setColor:(id)arg1 forPart:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

