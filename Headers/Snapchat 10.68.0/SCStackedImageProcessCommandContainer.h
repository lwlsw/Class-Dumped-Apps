//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCStackedImageProcessCommandContainer : NSObject
{
    float _dualCommandSwipingOffset;
    NSArray *_stackedCommands;
    NSArray *_leftSwipedCommands;
    NSArray *_rightSwipedCommands;
}

@property(readonly, nonatomic) float dualCommandSwipingOffset; // @synthesize dualCommandSwipingOffset=_dualCommandSwipingOffset;
@property(readonly, nonatomic) NSArray *rightSwipedCommands; // @synthesize rightSwipedCommands=_rightSwipedCommands;
@property(readonly, nonatomic) NSArray *leftSwipedCommands; // @synthesize leftSwipedCommands=_leftSwipedCommands;
@property(readonly, nonatomic) NSArray *stackedCommands; // @synthesize stackedCommands=_stackedCommands;
- (void).cxx_destruct;
- (id)_arrayFromSingleCommand:(id)arg1;
- (id)initWithStackedCommands:(id)arg1 stackedCommandPosition:(unsigned long long)arg2 leftSwipedCommand:(id)arg3 rightSwipedCommand:(id)arg4 dualCommandSwipingOffset:(float)arg5;
- (id)initWithStackedCommands:(id)arg1 leftSwipedCommands:(id)arg2 rightSwipedCommands:(id)arg3 dualCommandSwipingOffset:(float)arg4;

@end

