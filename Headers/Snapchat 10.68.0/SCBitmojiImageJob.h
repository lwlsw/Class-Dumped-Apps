//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCBitmojiImageParams, SCBitmojiMutableMetricsTracker;
@protocol OS_dispatch_queue;

@interface SCBitmojiImageJob : NSObject
{
    _Bool _verboseLogging;
    int _type;
    SCBitmojiImageParams *_imageParams;
    NSArray *_contexts;
    long long _feature;
    SCBitmojiMutableMetricsTracker *_tracker;
    NSObject<OS_dispatch_queue> *_completionQueue;
    unsigned long long _imageType;
}

+ (void)completeWithImage:(id)arg1 imageParams:(id)arg2 responseContext:(id)arg3 queue:(id)arg4 block:(CDUnknownBlockType)arg5;
+ (id)jobForDataImageParams:(id)arg1 contexts:(id)arg2 type:(int)arg3 feature:(long long)arg4 transform:(CDUnknownBlockType)arg5 completionQueue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
+ (id)jobWithImageParams:(id)arg1 contexts:(id)arg2 type:(int)arg3 feature:(long long)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(readonly, nonatomic) _Bool verboseLogging; // @synthesize verboseLogging=_verboseLogging;
@property(readonly, nonatomic) SCBitmojiMutableMetricsTracker *tracker; // @synthesize tracker=_tracker;
@property(readonly, nonatomic) long long feature; // @synthesize feature=_feature;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(readonly, nonatomic) SCBitmojiImageParams *imageParams; // @synthesize imageParams=_imageParams;
- (void).cxx_destruct;
- (id)parentJobWithQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)generateImageRequest;
- (void)_finalizeImageTypeFromData:(id)arg1;
- (void)completeWithImageData:(id)arg1 decodedImage:(id)arg2 responseContext:(id)arg3;
- (id)initWithImageParams:(id)arg1 contexts:(id)arg2 type:(int)arg3 feature:(long long)arg4 imageType:(unsigned long long)arg5 completionQueue:(id)arg6;

@end
