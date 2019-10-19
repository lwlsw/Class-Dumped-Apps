//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FPath;
@protocol FNode;

@interface FRangeMerge : NSObject
{
    FPath *_optExclusiveStart;
    FPath *_optInclusiveEnd;
    id <FNode> _updates;
}

@property(retain, nonatomic) id <FNode> updates; // @synthesize updates=_updates;
@property(retain, nonatomic) FPath *optInclusiveEnd; // @synthesize optInclusiveEnd=_optInclusiveEnd;
@property(retain, nonatomic) FPath *optExclusiveStart; // @synthesize optExclusiveStart=_optExclusiveStart;
- (void).cxx_destruct;
- (id)description;
- (id)updateRangeInNode:(id)arg1 node:(id)arg2 updates:(id)arg3;
- (id)applyToNode:(id)arg1;
- (id)initWithStart:(id)arg1 end:(id)arg2 updates:(id)arg3;

@end
