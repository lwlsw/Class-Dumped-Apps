//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTValueAnimatedNode.h"

@class NSArray, NSString;

@interface RCTInterpolationAnimatedNode : RCTValueAnimatedNode
{
    RCTValueAnimatedNode *_parentNode;
    NSArray *_inputRange;
    NSArray *_outputRange;
    NSString *_extrapolateLeft;
    NSString *_extrapolateRight;
}

- (void).cxx_destruct;
- (void)performUpdate;
- (void)onDetachedFromNode:(id)arg1;
- (void)onAttachedToNode:(id)arg1;
- (id)initWithTag:(id)arg1 config:(id)arg2;

@end
