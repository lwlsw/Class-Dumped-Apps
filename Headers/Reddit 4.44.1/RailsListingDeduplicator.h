//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface RailsListingDeduplicator : NSObject
{
    NSMutableSet *_uniqueObjects;
}

@property(retain, nonatomic) NSMutableSet *uniqueObjects; // @synthesize uniqueObjects=_uniqueObjects;
- (void).cxx_destruct;
- (void)addObjects:(id)arg1;
- (void)addObject:(id)arg1;
@property(readonly, nonatomic) NSSet *objectSet;
- (id)init;

@end

