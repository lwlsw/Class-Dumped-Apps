//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface FBAdVideoLoggingEvent : NSObject
{
    NSDictionary *_loggingParams;
}

+ (id)loggingEventWithAction:(long long)arg1 targetView:(id)arg2 autoplay:(_Bool)arg3 currentTime:(double)arg4 previousTime:(double)arg5 viewabilityStatistics:(id)arg6 audibilityStatistics:(id)arg7 cardIndex:(id)arg8 cardCount:(id)arg9;
+ (id)loggingEventWithAction:(long long)arg1 targetView:(id)arg2 autoplay:(_Bool)arg3 currentTime:(double)arg4 viewabilityStatistics:(id)arg5 audibilityStatistics:(id)arg6 cardIndex:(id)arg7 cardCount:(id)arg8;
+ (id)loggingEventWithAction:(long long)arg1 targetView:(id)arg2 autoplay:(_Bool)arg3 currentTime:(double)arg4 cardIndex:(id)arg5 cardCount:(id)arg6;
@property(readonly, copy, nonatomic) NSDictionary *loggingParams; // @synthesize loggingParams=_loggingParams;
- (void).cxx_destruct;
- (id)initWithLoggingParams:(id)arg1;
- (id)init;

@end
