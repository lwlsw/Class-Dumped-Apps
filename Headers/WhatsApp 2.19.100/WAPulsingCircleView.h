//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAShapeView.h>

@class CAAnimation;

@interface WAPulsingCircleView : WAShapeView
{
    WAShapeView *_innerCircle;
    double _innerCircleRadius;
}

@property(nonatomic) double innerCircleRadius; // @synthesize innerCircleRadius=_innerCircleRadius;
- (void).cxx_destruct;
@property(copy, nonatomic) CAAnimation *pulseAnimation;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
