//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCDiscoverFeedFriendStoriesReplayManagerRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_startToPlayStory_storyId;
    _Bool _startToPlayStory_firstInList;
    _Bool _startToPlayStory_hasUnviewedSnaps;
    long long _clearAll_reason;
}

+ (id)startToPlayStoryWithStoryId:(id)arg1 firstInList:(_Bool)arg2 hasUnviewedSnaps:(_Bool)arg3;
+ (id)expandAllStories;
+ (id)clearAllWithReason:(long long)arg1;
- (void).cxx_destruct;
- (void)matchStartToPlayStory:(CDUnknownBlockType)arg1 clearAll:(CDUnknownBlockType)arg2 expandAllStories:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

