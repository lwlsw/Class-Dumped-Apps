//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "RCTBridgeModule-Protocol.h"

@class NSMutableDictionary, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface DCDSoundManager : NSObject <RCTBridgeModule, AVAudioPlayerDelegate>
{
    NSMutableDictionary *_playerPool;
    NSMutableDictionary *_callbackPool;
}

+ (const struct RCTMethodInfo *)__rct_export__1589;
+ (const struct RCTMethodInfo *)__rct_export__1488;
+ (const struct RCTMethodInfo *)__rct_export__1407;
+ (const struct RCTMethodInfo *)__rct_export__1326;
+ (const struct RCTMethodInfo *)__rct_export__1245;
+ (const struct RCTMethodInfo *)__rct_export__1144;
+ (const struct RCTMethodInfo *)__rct_export__1053;
+ (const struct RCTMethodInfo *)__rct_export__972;
+ (const struct RCTMethodInfo *)__rct_export__881;
+ (const struct RCTMethodInfo *)__rct_export__660;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)getCurrentTime:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)setCurrentTime:(id)arg1 withValue:(id)arg2;
- (void)setNumberOfLoops:(id)arg1 withValue:(id)arg2;
- (void)setPan:(id)arg1 withValue:(id)arg2;
- (void)setVolume:(id)arg1 withValue:(id)arg2;
- (void)release:(id)arg1;
- (void)stop:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)prepare:(id)arg1 withKey:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (id)getDirectory:(unsigned long long)arg1;
- (CDUnknownBlockType)callbackForKey:(id)arg1;
- (id)keyForPlayer:(id)arg1;
- (id)playerForKey:(id)arg1;
- (id)callbackPool;
- (id)playerPool;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end
