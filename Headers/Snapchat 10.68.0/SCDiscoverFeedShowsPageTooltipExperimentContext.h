//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCDiscoverFeedShowsPageTooltipExperimentContext : SCExperimentContext
{
    _Bool _tooltipEnabled;
    _Bool _shouldUseAnimation;
}

@property(readonly, nonatomic) _Bool shouldUseAnimation; // @synthesize shouldUseAnimation=_shouldUseAnimation;
@property(readonly, nonatomic) _Bool tooltipEnabled; // @synthesize tooltipEnabled=_tooltipEnabled;
- (void)setupParameters;
- (id)experimentName;

@end

