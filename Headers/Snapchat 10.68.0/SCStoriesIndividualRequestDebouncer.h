//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol SCPerforming, SCStoriesGrapheneMetricsEmitting;

@interface SCStoriesIndividualRequestDebouncer : NSObject
{
    id <SCPerforming> _performer;
    id <SCStoriesGrapheneMetricsEmitting> _grapheneMetricsEmitter;
    double _debounceInterval;
    NSString *_identifier;
    NSMutableDictionary *_requestKeyToLastRequestTimeInSec;
}

- (void).cxx_destruct;
- (void)resetDebounceForRequests:(id)arg1;
- (id)debounceRequests:(id)arg1;
- (id)initWithPerformer:(id)arg1 grapheneMetricsEmitter:(id)arg2 debounceInterval:(double)arg3 identifier:(id)arg4;

@end

