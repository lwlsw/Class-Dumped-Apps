//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, SIGLabel, UIColor;

@interface SIGBadgeView : UIView
{
    SIGLabel *_badgeLabel;
    UIView *_containerView;
    unsigned long long _style;
    UIColor *_textColor;
    NSArray *_containerViewConstraints;
    NSArray *_badgeLabelConstraints;
    NSString *_text;
}

+ (id)newBadgeWithStyle:(unsigned long long)arg1 color:(unsigned long long)arg2;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)_setupViewForRectangleShape;
- (void)_setupViewForOvalShape;
- (id)_createBadgeLabel;
- (unsigned long long)_typographicalStyleOfBadge;
- (double)_heightOfBadge;
- (void)_activateTextConstraints;
- (void)_activateTextConstraintsForRectangleShape;
- (void)_activateTextConstraintsForOvalShape;
- (void)layoutSubviews;
- (void)setHidden:(_Bool)arg1;
- (id)initWithStyle:(unsigned long long)arg1 color:(unsigned long long)arg2;

@end

