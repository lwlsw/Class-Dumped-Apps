//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewAlignmentGuide.h"

@class NSNumber;

@interface SCPreviewAlignmentRotationGuide : SCPreviewAlignmentGuide
{
    NSNumber *_angle;
    struct CGPoint _center;
}

@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) NSNumber *angle; // @synthesize angle=_angle;
- (void).cxx_destruct;
- (void)_layoutAlignmentGuide;
- (void)showGuideInView:(id)arg1;
- (id)initWithAngle:(id)arg1 center:(struct CGPoint)arg2;

@end

