//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RedditService;

@interface ZeroStateSearchNetworkSourceBuilder : NSObject
{
    RedditService *_service;
}

@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)trendingObjectProviderForRailsContext:(id)arg1;
- (id)historyIndexProvider;
- (id)networkSourceWithRailsContext:(id)arg1;
- (id)initWithService:(id)arg1;

@end

