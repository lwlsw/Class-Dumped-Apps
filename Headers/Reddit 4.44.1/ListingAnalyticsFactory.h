//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAnalyticsEventFactory.h"

@interface ListingAnalyticsFactory : BaseAnalyticsEventFactory
{
}

+ (id)createOutboundLinkClickEventWithURL:(id)arg1 referringData:(id)arg2 source:(id)arg3 noun:(id)arg4 pageType:(id)arg5;
+ (id)createInternalLinkClickEventWithURL:(id)arg1 referringData:(id)arg2 source:(id)arg3 noun:(id)arg4;
+ (id)linkClickEventWithURL:(id)arg1 referringData:(id)arg2 source:(id)arg3 sourceAnalyticsView:(id)arg4 userAllowsOutboundLinkClickTracking:(_Bool)arg5;
+ (id)listingLoadEventWithId:(id)arg1 source:(id)arg2 action:(id)arg3 noun:(id)arg4 timeInterval:(double)arg5;
+ (void)addDepthForCommentTreeNode:(id)arg1 toEvent:(id)arg2;
+ (void)addComment:(id)arg1 toEvent:(id)arg2;
+ (void)addPost:(id)arg1 toEvent:(id)arg2;
+ (id)clickEventWithPost:(id)arg1 source:(id)arg2 listingSource:(id)arg3 noun:(id)arg4 pageType:(id)arg5 commentSort:(unsigned long long)arg6 previousCommentSort:(unsigned long long)arg7;
+ (id)clickEventWithPost:(id)arg1 comment:(id)arg2 source:(id)arg3 noun:(id)arg4 pageType:(id)arg5 shouldIncludeSubreddit:(_Bool)arg6 isChatPost:(_Bool)arg7;
+ (id)clickEventWithPost:(id)arg1 comment:(id)arg2 source:(id)arg3 noun:(id)arg4 pageType:(id)arg5;
+ (id)clickEventWithPost:(id)arg1 commentTreeNode:(id)arg2 source:(id)arg3 noun:(id)arg4 pageType:(id)arg5 isChatPost:(_Bool)arg6;
+ (id)unsaveEventWithPost:(id)arg1 pageType:(id)arg2;
+ (id)saveEventWithPost:(id)arg1 pageType:(id)arg2;

@end
