//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface DuplicatePostManager : NSObject
{
    NSDictionary *_duplicateHistory;
}

+ (id)sharedManager;
@property(copy, nonatomic) NSDictionary *duplicateHistory; // @synthesize duplicateHistory=_duplicateHistory;
- (void).cxx_destruct;
- (void)duplicatePostsForPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearCache;

@end
