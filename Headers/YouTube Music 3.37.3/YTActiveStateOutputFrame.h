//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTActiveStateOutputFrame : NSObject
{
    double _outputFrameRotation;
    double _outputFrameAnimationDuration;
    double _outputFrameAnimationDelay;
    long long _outputFrameAnimationCount;
    struct CGRect _outputFrame;
    struct CGRect _originalFrame;
    struct CGRect _superFrame;
}

@property(nonatomic) struct CGRect superFrame; // @synthesize superFrame=_superFrame;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(nonatomic) long long outputFrameAnimationCount; // @synthesize outputFrameAnimationCount=_outputFrameAnimationCount;
@property(nonatomic) double outputFrameAnimationDelay; // @synthesize outputFrameAnimationDelay=_outputFrameAnimationDelay;
@property(nonatomic) double outputFrameAnimationDuration; // @synthesize outputFrameAnimationDuration=_outputFrameAnimationDuration;
@property(nonatomic) double outputFrameRotation; // @synthesize outputFrameRotation=_outputFrameRotation;
@property(nonatomic) struct CGRect outputFrame; // @synthesize outputFrame=_outputFrame;
- (id)initWithOutputFrame:(struct CGRect)arg1 outputFrameRotation:(double)arg2 originalFrame:(struct CGRect)arg3 superFrame:(struct CGRect)arg4;

@end

