//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCCognacPreloadingExperimentContext : SCExperimentContext
{
    _Bool _enableBackgroundPreloading;
    _Bool _enablePreloadOnFeedPage;
    long long _inactiveDaysThreshold;
}

@property(readonly, nonatomic) _Bool enablePreloadOnFeedPage; // @synthesize enablePreloadOnFeedPage=_enablePreloadOnFeedPage;
@property(readonly, nonatomic) _Bool enableBackgroundPreloading; // @synthesize enableBackgroundPreloading=_enableBackgroundPreloading;
@property(readonly, nonatomic) long long inactiveDaysThreshold; // @synthesize inactiveDaysThreshold=_inactiveDaysThreshold;
- (void)setupParameters;
- (id)experimentName;

@end
