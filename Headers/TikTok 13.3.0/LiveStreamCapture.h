//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSGLContext, LSGLEffectFilter, LSGLPictureInput, LSGLPictureMixer, LSGLPictureOutput, LSGLPreviewView, LiveStreamSession, NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface LiveStreamCapture : NSObject
{
    _Bool _enableEffect;
    LSGLPictureInput *_gl_input;
    LSGLPictureOutput *_gl_output;
    LSGLPictureOutput *_gl_output_bypass;
    LSGLEffectFilter *_gl_effect_filter;
    LSGLPictureMixer *_gl_mixer;
    _Bool _use_mixer;
    NSMutableDictionary *_layer_input_map;
    struct CGSize _bypass_size;
    unsigned int _bypass_fmt;
    NSObject<OS_dispatch_queue> *_graph_queue;
    void *LSCaptureQueueKey;
    struct unique_ptr<ObserverInterface, std::__1::default_delete<ObserverInterface>> _audio_player_factory;
    struct mutex _data_mutex;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _b_can_input
    struct composer_mode_type_t *composer_mode_type;
    NSMutableDictionary *effect_path_dict;
    NSArray *composer_nodes;
    struct unique_ptr<std::__1::vector<composer_node_tag_value_t *, std::__1::allocator<composer_node_tag_value_t *>>, std::__1::default_delete<std::__1::vector<composer_node_tag_value_t *, std::__1::allocator<composer_node_tag_value_t *>>>> node_models;
    _Bool _should_check_input_size;
    _Bool _purgeMemoryIfNeeded;
    unsigned int _inPixelFmt;
    long long _cameraPosition;
    unsigned long long _inRotateMode;
    LiveStreamSession *_session;
    CDUnknownBlockType _firstFrameRenderCallback;
    LSGLPreviewView *_gl_render_view;
    LSGLContext *_context;
    CDUnknownBlockType _videoProcessedCallback;
    CDUnknownBlockType _bypassCallback;
    struct CGSize _outputSize;
}

+ (_Bool)containsEffectModule;
+ (void)resetContext;
+ (void)setResourceFinder:(CDUnknownFunctionPointerType)arg1;
+ (_Bool)containsEffectModule;
+ (void)setResourceFinder:(CDUnknownFunctionPointerType)arg1;
@property(copy, nonatomic) CDUnknownBlockType bypassCallback; // @synthesize bypassCallback=_bypassCallback;
@property(copy, nonatomic) CDUnknownBlockType videoProcessedCallback; // @synthesize videoProcessedCallback=_videoProcessedCallback;
@property(retain, nonatomic) LSGLContext *context; // @synthesize context=_context;
@property(retain, nonatomic) LSGLPreviewView *gl_render_view; // @synthesize gl_render_view=_gl_render_view;
@property(copy, nonatomic) CDUnknownBlockType firstFrameRenderCallback; // @synthesize firstFrameRenderCallback=_firstFrameRenderCallback;
@property(nonatomic) __weak LiveStreamSession *session; // @synthesize session=_session;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) unsigned long long inRotateMode; // @synthesize inRotateMode=_inRotateMode;
@property(nonatomic) unsigned int inPixelFmt; // @synthesize inPixelFmt=_inPixelFmt;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(nonatomic) _Bool purgeMemoryIfNeeded; // @synthesize purgeMemoryIfNeeded=_purgeMemoryIfNeeded;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)checkBufferInEffectCategory:(struct __CVBuffer *)arg1;
- (_Bool)isEffectEnabled;
- (void)setEnableEffect:(_Bool)arg1;
- (void)destructEffectModules;
- (void)initialEffectCategory;
- (void)checkInputBuffer:(struct __CVBuffer *)arg1;
- (void)startIfNeeded;
- (void)stopIfNeeded;
- (void)destructCategoriesIfNeeded;
- (void)initialCategoriesIfNeeded;
- (void)setVideoProcessedBypassCallback:(CDUnknownBlockType)arg1;
- (void)setupBypassGraph;
- (void)setBypassOutputSize:(struct CGSize)arg1 pixelFormat:(unsigned int)arg2 enable:(_Bool)arg3;
- (void)pushVideoBuffer:(struct __CVBuffer *)arg1 withCMTime:(CDStruct_1b6d18a9)arg2 toLayer:(int)arg3;
- (void)pushVideoBuffer:(struct __CVBuffer *)arg1 andCMTime:(CDStruct_1b6d18a9)arg2;
- (void)setupGLVideoPath;
- (void)removeVideoInput:(int)arg1;
- (void)addVideoInput:(struct CGRect)arg1 forLayer:(int)arg2;
- (void)addVideoInput:(struct CGRect)arg1 fillMode:(unsigned long long)arg2 zOrder:(int)arg3 forLayer:(int)arg4;
- (void)removeEffectNode;
- (void)addEffectNode;
- (void)addMixerNode;
- (void)addIONodes;
- (id)getGLContext;
- (void)setSharedEAGLContext:(id)arg1;
- (id)previewView;
- (void)setPreviewFrame:(struct CGRect)arg1;
- (id)resetPreviewView:(id)arg1;
- (void)startVideoCapture;
- (void)stopVideoCapture;
- (void)dealloc;
- (void)setupInputNodeWith:(unsigned int)arg1;
- (void)setupAudioFactoryWithBlock:(CDUnknownBlockType)arg1;
- (void)setupAudioFactory;
- (void)setMultiThreadEnable:(_Bool)arg1;
- (id)init;
- (void)runSyncOnQueue:(CDUnknownBlockType)arg1;
- (void)resumeEffect:(long long)arg1;
- (void)pauseEffect:(long long)arg1;
- (void)updateComposerNode:(id)arg1 tag:(id)arg2 value:(double)arg3;
- (void)applyComposerNodes:(id)arg1 enableFakeFace:(_Bool)arg2;
- (void)applyComposerNodes:(id)arg1;
- (void)setComposerMode:(int)arg1 orderType:(int)arg2;
- (void)enableFakeFace:(_Bool)arg1;
- (void)setMaxStickerMemoryCache:(unsigned long long)arg1;
- (void)applyReshape:(id)arg1 withIntensity:(struct LSLiveIntensityParam_t)arg2;
- (void)applyIntensity:(struct LSLiveIntensityParam_t)arg1 type:(long long)arg2;
- (void)applyEffect:(id)arg1 type:(long long)arg2 enableFakeFace:(_Bool)arg3;
- (void)applyEffectKey:(id)arg1 image:(id)arg2;
- (void)applyEffect:(id)arg1 type:(long long)arg2;
- (void)switchFilterWithLeftPath:(id)arg1 rightPath:(id)arg2 progress:(double)arg3;
- (void)setLogToFileMessageCallback:(CDUnknownBlockType)arg1;
- (void)setLogLevel:(int)arg1;
- (void)setupAudioFactoryWithBlock:(CDUnknownBlockType)arg1;
- (void)setupAudioFactory;
- (void)setBgmPlayer:(id)arg1;
- (id)bgmPlayer;
- (_Bool)isEffectEnabled;
- (void)setEnableEffect:(_Bool)arg1;
- (void)restoreEffectIfNeeded;
- (void)pauseEffectIfNeeded;
- (void)checkBufferInEffectCategory:(struct __CVBuffer *)arg1;
- (void)destructEffectModules;
- (void)initialEffectCategory;
- (void)sendMessage:(unsigned long long)arg1 param1:(unsigned long long)arg2 param2:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)sendMessage:(unsigned long long)arg1 param1:(unsigned long long)arg2 param2:(unsigned long long)arg3;
- (void)sendMessage:(unsigned long long)arg1 param1:(unsigned long long)arg2;
- (void)sendMessage:(unsigned long long)arg1;
- (void)setEffectMessageBlock:(CDUnknownBlockType)arg1;
- (void)setAlgorithmResultRequirement:(unsigned long long)arg1 withCallbackBlock:(CDUnknownBlockType)arg2;
- (void)setAlgorithmRequirement:(unsigned long long)arg1 enableDetect:(_Bool)arg2;
- (_Bool)handleRotationEvent:(double)arg1;
- (_Bool)handleScaleEvent:(double)arg1;
- (_Bool)handleLongPressEventWithLocation:(struct CGPoint)arg1;
- (_Bool)handlePanEventWithTranslation:(struct CGPoint)arg1 location:(struct CGPoint)arg2;
- (_Bool)handleTouchEvent:(struct CGPoint)arg1;
- (_Bool)handleTouchUp:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (_Bool)handleTouchDown:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (id)initReducedMode;
- (id)initWithMode:(long long)arg1;

@end

