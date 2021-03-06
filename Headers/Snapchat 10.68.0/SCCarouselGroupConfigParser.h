//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, SCExperimentManager;

@interface SCCarouselGroupConfigParser : NSObject
{
    SCExperimentManager *_experimentManager;
    unsigned long long _globalHardLimit;
    unsigned long long _globalSoftLimit;
    NSMutableDictionary *_baseScores;
    NSMutableDictionary *_defaultFilterScores;
    NSDictionary *_defaultFilterCarouselGroups;
    NSDictionary *_groupConfigs;
}

@property(retain, nonatomic) NSDictionary *groupConfigs; // @synthesize groupConfigs=_groupConfigs;
@property(readonly, nonatomic) NSDictionary *defaultFilterCarouselGroups; // @synthesize defaultFilterCarouselGroups=_defaultFilterCarouselGroups;
@property(readonly, nonatomic) NSMutableDictionary *defaultFilterScores; // @synthesize defaultFilterScores=_defaultFilterScores;
@property(readonly, nonatomic) NSMutableDictionary *baseScores; // @synthesize baseScores=_baseScores;
@property(nonatomic) unsigned long long globalSoftLimit; // @synthesize globalSoftLimit=_globalSoftLimit;
@property(nonatomic) unsigned long long globalHardLimit; // @synthesize globalHardLimit=_globalHardLimit;
- (void).cxx_destruct;
- (float)absoluteScoreForFilterWithCarouselGroup:(id)arg1;
- (id)defaultCarouselGroupForFilterName:(id)arg1 type:(long long)arg2 geoFilterSubType:(long long)arg3 mediaFilterSubType:(long long)arg4;
- (id)configForGroup:(id)arg1;
- (void)_parseCarouselGroupConfigs;
- (id)initWithExperimentManager:(id)arg1;

@end

