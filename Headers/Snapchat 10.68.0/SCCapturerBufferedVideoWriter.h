//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, FBKVOController, SCQueuePerformer;
@protocol SCCapturerBufferedVideoWriterDelegate;

@interface SCCapturerBufferedVideoWriter : NSObject
{
    SCQueuePerformer *_performer;
    id <SCCapturerBufferedVideoWriterDelegate> _delegate;
    FBKVOController *_observeController;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_audioWriterInput;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
    struct __CVPixelBufferPool *_currentPixelBufferPool;
    struct CGSize _currentPixelBufferSize;
    struct opaqueCMBufferQueue *_videoBufferQueue;
    struct opaqueCMBufferQueue *_audioBufferQueue;
}

+ (void)warmupInputsWithOutputSettings:(id)arg1;
- (void).cxx_destruct;
- (void)_appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (struct __CVPixelBufferPool *)_pixelBufferPoolWithPixelBufferSize:(struct CGSize)arg1;
- (struct __CVBuffer *)_croppedPixelBufferWithInputPixelBuffer:(struct __CVBuffer *)arg1;
- (void)assetWriterStatusChanged:(id)arg1;
- (void)dealloc;
- (void)cleanUp;
- (void)finishWritingAtSourceTime:(CDStruct_1b6d18a9)arg1 withCompletionHanlder:(CDUnknownBlockType)arg2;
- (void)cancelWriting;
- (_Bool)startWritingAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)prepareWritingWithOutputSettings:(id)arg1;
- (id)initWithPerformer:(id)arg1 outputURL:(id)arg2 delegate:(id)arg3 error:(id *)arg4;

@end
