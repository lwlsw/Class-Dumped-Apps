//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSURL;

@interface LLVideoTrack : NSObject
{
    _Bool _isPlayedToEnd;
    NSNumber *_totalDuration;
    NSNumber *_lastWatchedDuration;
    NSURL *_streamURL;
}

@property(retain, nonatomic) NSURL *streamURL; // @synthesize streamURL=_streamURL;
@property(retain, nonatomic) NSNumber *lastWatchedDuration; // @synthesize lastWatchedDuration=_lastWatchedDuration;
@property(retain, nonatomic) NSNumber *totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) _Bool isPlayedToEnd; // @synthesize isPlayedToEnd=_isPlayedToEnd;
- (void).cxx_destruct;
- (id)initWithStreamURL:(id)arg1;
- (id)init;
- (id)description;

@end

