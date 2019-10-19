//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWEResourceChannel : NSObject
{
    NSString *_channel;
    long long _priority;
    double _repeatInterval;
}

@property(readonly, nonatomic) double repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (void)downloadResourceList:(CDUnknownBlockType)arg1;
- (id)initWithChannel:(id)arg1 priority:(long long)arg2;
- (id)initWithChannel:(id)arg1;

@end
