//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCActionModel, SCDiscoverFeedCircleViewLayoutConfiguration, SCDiscoverFeedStoryCircleViewModel, SCDiscoverFeedStoryLoggingInfo;

@interface SCDiscoverFeedStoryCircleCollectionViewModel : NSObject <NSCopying>
{
    SCDiscoverFeedStoryCircleViewModel *_storyCircleViewModel;
    NSAttributedString *_displayLabel;
    NSAttributedString *_actionSubtext;
    SCActionModel *_tapActionModel;
    SCActionModel *_longPressActionModel;
    SCDiscoverFeedCircleViewLayoutConfiguration *_layoutConfig;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    struct CGSize _preferredSize;
}

@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;
@property(readonly, copy, nonatomic) SCDiscoverFeedCircleViewLayoutConfiguration *layoutConfig; // @synthesize layoutConfig=_layoutConfig;
@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) NSAttributedString *actionSubtext; // @synthesize actionSubtext=_actionSubtext;
@property(readonly, copy, nonatomic) NSAttributedString *displayLabel; // @synthesize displayLabel=_displayLabel;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryCircleViewModel *storyCircleViewModel; // @synthesize storyCircleViewModel=_storyCircleViewModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryCircleViewModel:(id)arg1 displayLabel:(id)arg2 actionSubtext:(id)arg3 tapActionModel:(id)arg4 longPressActionModel:(id)arg5 preferredSize:(struct CGSize)arg6 layoutConfig:(id)arg7 storyLoggingInfo:(id)arg8;

@end
