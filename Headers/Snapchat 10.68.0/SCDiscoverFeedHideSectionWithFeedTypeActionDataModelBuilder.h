//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCDiscoverFeedHideSectionWithFeedTypeActionDataModelBuilder : NSObject
{
    unsigned long long _feedType;
    NSString *_sectionIdentifier;
}

+ (id)discoverFeedHideSectionWithFeedTypeActionDataModelFromExistingDiscoverFeedHideSectionWithFeedTypeActionDataModel:(id)arg1;
+ (id)discoverFeedHideSectionWithFeedTypeActionDataModel;
- (void).cxx_destruct;
- (id)withSectionIdentifier:(id)arg1;
- (id)withFeedType:(unsigned long long)arg1;
- (id)build;

@end
