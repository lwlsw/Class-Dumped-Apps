//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVForwardingRangedScale.h"

@protocol GAVRangedScale;

@interface GAVAnimatedMergedScale : GAVForwardingRangedScale
{
    double _progress;
    id <GAVRangedScale> _initialScale;
}

@property(readonly, nonatomic) id <GAVRangedScale> initialScale; // @synthesize initialScale=_initialScale;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (double)rangeBandWidth;
- (double)applyForValue:(id)arg1;
- (id)initWithInitialScale:(id)arg1 finalScale:(id)arg2 progress:(double)arg3;

@end
