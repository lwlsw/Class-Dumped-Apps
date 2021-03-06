//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTLightweightBaseCellFactory.h"

@class GIMMe, NSCache, NSDictionary, NSSet, YTIMusicColdConfig, YTMSettings;

@interface YTMLightweightCellFactory : YTLightweightBaseCellFactory
{
    YTMSettings *_settings;
    NSDictionary *_supportedClassMap;
    YTIMusicColdConfig *_musicColdConfig;
    NSSet *_sizeConfigureableClasses;
    NSCache *_sizingCellCache;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)configureTwoColumnItemCell:(id)arg1;
- (void)setUpSettings;
- (void)setUpMusicColdConfig;
- (void)setUpSizingCellCache;
- (void)setUpSizeConfigureableClasses;
- (void)configureCell:(id)arg1;
- (id)sizingCellForEntryClassName:(id)arg1;
- (id)supportedClassMap;

@end

