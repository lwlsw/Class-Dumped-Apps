//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCStoriesPlaybackSnapViewerInfoSummary : NSObject <NSCopying>
{
    NSArray *_friendViewers;
    long long _friendViewCount;
    long long _friendScreenshotCount;
    NSArray *_otherViewers;
    long long _otherViewCount;
    long long _otherScreenshotCount;
}

@property(readonly, nonatomic) long long otherScreenshotCount; // @synthesize otherScreenshotCount=_otherScreenshotCount;
@property(readonly, nonatomic) long long otherViewCount; // @synthesize otherViewCount=_otherViewCount;
@property(readonly, copy, nonatomic) NSArray *otherViewers; // @synthesize otherViewers=_otherViewers;
@property(readonly, nonatomic) long long friendScreenshotCount; // @synthesize friendScreenshotCount=_friendScreenshotCount;
@property(readonly, nonatomic) long long friendViewCount; // @synthesize friendViewCount=_friendViewCount;
@property(readonly, copy, nonatomic) NSArray *friendViewers; // @synthesize friendViewers=_friendViewers;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFriendViewers:(id)arg1 friendViewCount:(long long)arg2 friendScreenshotCount:(long long)arg3 otherViewers:(id)arg4 otherViewCount:(long long)arg5 otherScreenshotCount:(long long)arg6;

@end

