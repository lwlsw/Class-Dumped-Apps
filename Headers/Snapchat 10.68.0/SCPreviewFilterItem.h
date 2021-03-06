//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString, SOJUUnlockablesCarouselGroup;

@interface SCPreviewFilterItem : NSObject
{
    _Bool _sortOrderDependsOnSwipeDirection;
    _Bool _isAutoStackingFilter;
    _Bool _isSkyFilter;
    NSString *_filterName;
    NSDate *_creationTime;
    long long _filterType;
    unsigned long long _stackType;
    NSNumber *_filterScore;
    SOJUUnlockablesCarouselGroup *_carouselGroup;
}

+ (unsigned long long)_stackTypeFromFilterType:(long long)arg1 carouselGroup:(id)arg2 isAutoStackingFilter:(_Bool)arg3 isSkyFilter:(_Bool)arg4;
+ (id)unfilteredItem;
+ (id)matchingFilterItemForName:(id)arg1 filterType:(long long)arg2;
+ (id)itemForAutoStacking:(long long)arg1;
+ (id)itemWithFilterName:(id)arg1 filterType:(long long)arg2 sortOrderDependsOnSwipeDirection:(_Bool)arg3 carouselGroup:(id)arg4;
+ (id)itemWithFilterName:(id)arg1 filterType:(long long)arg2 sortOrderDependsOnSwipeDirection:(_Bool)arg3 carouselGroup:(id)arg4 isAutoStackingFilter:(_Bool)arg5 isSkyFilter:(_Bool)arg6;
@property(readonly, nonatomic) _Bool isSkyFilter; // @synthesize isSkyFilter=_isSkyFilter;
@property(readonly, nonatomic) _Bool isAutoStackingFilter; // @synthesize isAutoStackingFilter=_isAutoStackingFilter;
@property(retain, nonatomic) SOJUUnlockablesCarouselGroup *carouselGroup; // @synthesize carouselGroup=_carouselGroup;
@property(nonatomic) _Bool sortOrderDependsOnSwipeDirection; // @synthesize sortOrderDependsOnSwipeDirection=_sortOrderDependsOnSwipeDirection;
@property(retain, nonatomic) NSNumber *filterScore; // @synthesize filterScore=_filterScore;
@property(readonly, nonatomic) unsigned long long stackType; // @synthesize stackType=_stackType;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(readonly, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(retain, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
- (void).cxx_destruct;
- (long long)zPosition;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isPromptFilter;
- (_Bool)isUnfilteredFilter;
- (id)initWithFilterName:(id)arg1 filterType:(long long)arg2 sortOrderDependsOnSwipeDirection:(_Bool)arg3 carouselGroup:(id)arg4 isAutoStackingFilter:(_Bool)arg5 isSkyFilter:(_Bool)arg6;

@end

