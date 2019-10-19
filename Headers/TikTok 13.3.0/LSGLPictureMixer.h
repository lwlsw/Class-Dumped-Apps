//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LSGLFilter.h"

@class LSGLFramebuffer, NSMutableDictionary;

@interface LSGLPictureMixer : LSGLFilter
{
    int layer_count_;
    NSMutableDictionary *inputFBs_;
    int available_layer_index_;
    int alphaUniform;
    LSGLFramebuffer *canvasFramebuffer;
    struct unique_ptr<LiveCore::IMixerInterface, std::__1::default_delete<LiveCore::IMixerInterface>> mixer_;
    unsigned long long mixer_index;
    _Bool _clearBeforeRender;
    unsigned int _masterLayer;
}

@property(nonatomic) _Bool clearBeforeRender; // @synthesize clearBeforeRender=_clearBeforeRender;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)endProcessing;
- (void)mixerRender;
- (void)informTargetsAboutNewFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
@property(nonatomic) unsigned int masterLayer; // @synthesize masterLayer=_masterLayer;
- (void)clearLayer:(unsigned int)arg1;
- (const struct ILayerInfo *)getLayerInfo:(unsigned int)arg1;
- (void)setLayerInfo:(struct ILayerInfo)arg1;
- (void)dealloc;
- (id)initWithOutputSize:(struct CGSize)arg1 Context:(id)arg2;
- (id)initWithContext:(id)arg1;
- (id)init;

@end
