//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesMyStoryIdentifiers : SCDocObject <NSCopying>
{
    NSString *_storyId;
    NSString *_groupId;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryId:(id)arg1 groupId:(id)arg2;

@end
