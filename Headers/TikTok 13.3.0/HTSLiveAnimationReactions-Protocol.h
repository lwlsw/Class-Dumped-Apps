//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSLiveCommonToastMessage, HTSLiveSunDailyRankExtraModel, HTSLiveSunDailyRankMessage, RoomNotifyMessage, SunDailyRankMessage;

@protocol HTSLiveAnimationReactions <NSObject>
- (void)dispatchCommonToastWithMessage:(HTSLiveCommonToastMessage *)arg1;
- (void)dispatchTopRegionAnimationWithMessage:(HTSLiveSunDailyRankMessage *)arg1 extra:(HTSLiveSunDailyRankExtraModel *)arg2;
- (void)dispatchTop20AnchorAnimationWithMessage:(SunDailyRankMessage *)arg1;
- (void)dispatchTop3AnchorAnimationWithMessage:(HTSLiveSunDailyRankMessage *)arg1 extra:(HTSLiveSunDailyRankExtraModel *)arg2;
- (void)dispatchRocketAnimationWithMessage:(RoomNotifyMessage *)arg1;
@end

