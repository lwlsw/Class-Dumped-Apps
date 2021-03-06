//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol AWEVideoRangeSliderDelegate <NSObject>

@optional
- (double)currentlyValidDelta;
- (void)videoRangeHasReachedMaxDuration;
- (_Bool)checkVideoRangeHasReachedMaxDuration;
- (void)videoRangeHasReachedMinDuration;
- (_Bool)videoRangeSliderShouldShowExpandAnimationByType:(unsigned long long)arg1;
- (void)videoRangeDidHoldToChangeByOffset:(double)arg1 movedType:(unsigned long long)arg2;
- (void)videoRangeDidTransferInnerDragToHoldDragByType:(unsigned long long)arg1;
- (void)videoRangeDidTransferHoldDragToInnerDragByType:(unsigned long long)arg1;
- (void)videoRangeDidEndHoldToChangeByType:(unsigned long long)arg1;
- (void)videoRangeDidBeginHoldToChangeByType:(unsigned long long)arg1 offset:(double)arg2;
- (_Bool)shouldBeginHoldToChangeByType:(unsigned long long)arg1;
- (void)videoRangeDidChangByPosition:(double)arg1 movedType:(unsigned long long)arg2;
- (void)videoRangeDidEndByType:(unsigned long long)arg1;
- (void)videoRangeDidBeginByType:(unsigned long long)arg1;
- (_Bool)videoRangeIgnoreGesture;
@end

