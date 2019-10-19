//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NFISceneManager;

@interface NFISequence : NSObject
{
    NFISceneManager *_sceneManager;
    long long _sequenceState;
    CDUnknownBlockType _sequenceCompletionBlock;
    CALayer *_layer;
}

+ (id)initWithSize:(struct CGSize)arg1 scene:(id)arg2;
+ (id)initWithSize:(struct CGSize)arg1 scene:(id)arg2 animationCompletionBlock:(CDUnknownBlockType)arg3;
+ (id)initWithSize:(struct CGSize)arg1 sceneManager:(id)arg2 animationCompletionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak NFISceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(readonly) long long sequenceState; // @synthesize sequenceState=_sequenceState;
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(copy, nonatomic) CDUnknownBlockType sequenceCompletionBlock; // @synthesize sequenceCompletionBlock=_sequenceCompletionBlock;
- (void).cxx_destruct;
- (struct CGImage *)snapshot;
- (void)cancelAllAnimations;
- (void)animateBack;
- (void)animateOut;
- (void)animateIn;
- (void)layoutContent;
- (id)initWithSize:(struct CGSize)arg1;

@end
