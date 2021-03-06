//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMCamera.h"

#import "AWEVideoRecoderProtocol-Protocol.h"
#import "IESMMRecoderProtocol-Protocol.h"

@class HTSCameraWriter, HTSGLAspectScaleFilter, HTSGLFilterInput, HTSGLFilterTwoInput, HTSGLPicture, HTSMediaMixPlayer, HTSVideoData, IESEffectModel, IESMMARCamera, IESMMDuetPlayer, IESMMEffectGroup, NSMutableArray, NSString, NSTimer;
@protocol AWEComposerEffectProtocol, IESMMARCameraDelegate;

@interface IESMMDuetRecoder : IESMMCamera <AWEVideoRecoderProtocol, IESMMRecoderProtocol>
{
    _Bool _useEffectRecognize;
    _Bool _needProcessAudio;
    _Bool _needResolveAudio;
    _Bool _isVideoPlayerEnd;
    _Bool _shouldReplay;
    _Bool _captureImageProcessed;
    _Bool _isVideoRecorded;
    _Bool _isPlayerProgressSyncReady;
    _Bool _duetAutoAddAudio;
    float _currentPlayPercent;
    long long _fillMode;
    HTSMediaMixPlayer *mixPlayer;
    HTSGLAspectScaleFilter *_scaleFilter;
    NSTimer *_motionDetectTimer;
    double _maxAcceleration;
    HTSVideoData *_videoData;
    HTSVideoData *_duetSourceData;
    double _videoRecordStartTime;
    double _recordRate;
    long long _recordStatus;
    HTSCameraWriter *_videoWriter;
    id _videoPlayerObserver;
    double _videoPlayerStartedTime;
    NSMutableArray *_audioPlayerCache;
    NSMutableArray *_activeAudioPlayers;
    double _videoSyncStart;
    HTSGLFilterTwoInput *_mixFilter;
    HTSGLFilterInput *_duetInput;
    HTSGLPicture *_firstPic;
    IESMMDuetPlayer *_duetPlayer;
    struct CGSize _outputSize;
}

+ (id)effectVersion;
@property(nonatomic) _Bool duetAutoAddAudio; // @synthesize duetAutoAddAudio=_duetAutoAddAudio;
@property(retain, nonatomic) IESMMDuetPlayer *duetPlayer; // @synthesize duetPlayer=_duetPlayer;
@property(nonatomic) float currentPlayPercent; // @synthesize currentPlayPercent=_currentPlayPercent;
@property(retain, nonatomic) HTSGLPicture *firstPic; // @synthesize firstPic=_firstPic;
@property(retain, nonatomic) HTSGLFilterInput *duetInput; // @synthesize duetInput=_duetInput;
@property(retain, nonatomic) HTSGLFilterTwoInput *mixFilter; // @synthesize mixFilter=_mixFilter;
@property(nonatomic) double videoSyncStart; // @synthesize videoSyncStart=_videoSyncStart;
@property(retain, nonatomic) NSMutableArray *activeAudioPlayers; // @synthesize activeAudioPlayers=_activeAudioPlayers;
@property(retain, nonatomic) NSMutableArray *audioPlayerCache; // @synthesize audioPlayerCache=_audioPlayerCache;
@property(nonatomic) _Bool isPlayerProgressSyncReady; // @synthesize isPlayerProgressSyncReady=_isPlayerProgressSyncReady;
@property(nonatomic) double videoPlayerStartedTime; // @synthesize videoPlayerStartedTime=_videoPlayerStartedTime;
@property(retain, nonatomic) id videoPlayerObserver; // @synthesize videoPlayerObserver=_videoPlayerObserver;
@property(retain, nonatomic) HTSCameraWriter *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) long long recordStatus; // @synthesize recordStatus=_recordStatus;
@property(nonatomic) double recordRate; // @synthesize recordRate=_recordRate;
@property(nonatomic) double videoRecordStartTime; // @synthesize videoRecordStartTime=_videoRecordStartTime;
@property(nonatomic) _Bool isVideoRecorded; // @synthesize isVideoRecorded=_isVideoRecorded;
@property(nonatomic) _Bool captureImageProcessed; // @synthesize captureImageProcessed=_captureImageProcessed;
@property(nonatomic) _Bool shouldReplay; // @synthesize shouldReplay=_shouldReplay;
@property(nonatomic) _Bool isVideoPlayerEnd; // @synthesize isVideoPlayerEnd=_isVideoPlayerEnd;
@property(retain, nonatomic) HTSVideoData *duetSourceData; // @synthesize duetSourceData=_duetSourceData;
@property(retain, nonatomic) HTSVideoData *videoData; // @synthesize videoData=_videoData;
@property(nonatomic) double maxAcceleration; // @synthesize maxAcceleration=_maxAcceleration;
@property(retain, nonatomic) NSTimer *motionDetectTimer; // @synthesize motionDetectTimer=_motionDetectTimer;
@property(retain, nonatomic) HTSGLAspectScaleFilter *scaleFilter; // @synthesize scaleFilter=_scaleFilter;
@property(nonatomic) _Bool needResolveAudio; // @synthesize needResolveAudio=_needResolveAudio;
@property(nonatomic) _Bool needProcessAudio; // @synthesize needProcessAudio=_needProcessAudio;
@property(retain, nonatomic) HTSMediaMixPlayer *mixPlayer; // @synthesize mixPlayer;
@property(nonatomic) long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) _Bool useEffectRecognize; // @synthesize useEffectRecognize=_useEffectRecognize;
- (void).cxx_destruct;
- (struct CGImage *)getPreview:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (unsigned long long)imageOrientationToHTSRotation:(long long)arg1;
- (void)mediaMixPlayer:(id)arg1 didResetItem:(id)arg2;
- (void)resetStoryModeWithConfig:(id)arg1;
- (void)registerMediaServicesResetNotify;
- (void)registerEnterForegroundNotify;
- (void)registerEnterBackgroundNotify;
- (void)startAudioCapture;
- (void)startVideoCapture;
- (void)setupAudioSession;
- (void)p_initVideoWriter;
- (struct CGSize)cameraCaptureSize;
- (void)switchAudioMode:(long long)arg1;
- (void)resetVideoRecordReady;
- (void)removePlayer:(CDUnknownBlockType)arg1;
- (void)removePlayer;
- (void)changeDuetVideo:(id)arg1 startTime:(double)arg2 duaration:(double)arg3 block:(CDUnknownBlockType)arg4;
- (long long)getModeFromMode:(long long)arg1;
- (void)setDuetMovieWithVideoURL:(id)arg1 cameraBound:(struct CGRect)arg2 duetBound:(struct CGRect)arg3 startTime:(double)arg4 clipDuration:(double)arg5;
- (void)setDuetMovieWithMaskImage:(id)arg1 frontBound:(struct CGRect)arg2 duetVideoURL:(id)arg3 startTime:(double)arg4 clipDuration:(double)arg5;
@property(readonly, nonatomic) unsigned long long fragmentCount;
- (void)setOutputDirection:(long long)arg1;
- (void)resetRecorderWriter;
- (void)enableAudioEffectSticker:(_Bool)arg1;
- (void)setDropFrame:(_Bool)arg1;
- (void)removeAllVideoFragments:(CDUnknownBlockType)arg1;
- (void)removeAllVideoFragments;
- (void)removeLastVideoFragment;
- (double)getTotalDuration;
- (void)cancelVideoRecord;
- (void)pauseVideoRecord;
- (void)setRecordRate:(double)arg1 complete:(CDUnknownBlockType)arg2;
- (void)startVideoRecordWithRate:(double)arg1;
- (void)cancelVideoRecordReady;
- (id)videoRecordReadyWithSyncFlag:(_Bool)arg1;
- (id)videoRecordReady;
- (void)reSyncAudioProgress;
- (void)reSyncVideoProgress;
- (void)removeObserverForAVPlayerStatus;
- (void)removeAudioPlayerObserver;
- (void)addAudioPlayerObserver;
- (void)p_pauseCameraCapture;
- (void)p_resumeCameraCapture;
- (void)resumeCameraCapture;
- (void)motionDetectRun;
- (void)p_stopMotionDetect;
- (void)p_startMotionDetect;
- (void)p_resetFilterChain;
- (void)dealloc;
- (id)initWithView:(id)arg1 config:(id)arg2 cameraComplete:(CDUnknownBlockType)arg3;
- (void)awe_stopVideoCapture;
- (void)awe_startVideoCapture;
- (void)awe_captureStillImage:(CDUnknownBlockType)arg1;
- (void)awe_pauseStickerBGM:(unsigned long long)arg1;
- (void)awe_applyFilterEffectWithPath:(id)arg1;
- (void)p_safelySetRenderCacheStringByKey:(id)arg1 value:(id)arg2;
- (void)awe_operateVEComposerEffect:(id)arg1 operation:(long long)arg2;
- (void)awe_operateComposerEffect:(id)arg1 operation:(long long)arg2;
- (void)awe_applyVEComposerEffect:(id)arg1;
- (void)awe_applyComposerEffect:(id)arg1;
- (void)awe_applyVEStickerEffect:(id)arg1;
- (void)awe_applyStickerEffect:(id)arg1;
- (float)awe_sharpenIndensity;
- (float)awe_blusherIndensity;
- (float)awe_lipIndensity;
- (float)awe_bigEyeIndensity;
- (float)awe_faceLiftIndensity;
- (float)awe_reshapeIndensity;
- (float)awe_smoothIndensity;
- (void)awe_applySharpenValue:(float)arg1;
- (void)awe_applyBlusherValue:(float)arg1;
- (void)awe_applyLipValue:(float)arg1;
- (void)awe_applySmoothWithValue:(float)arg1;
- (void)awe_applyBigEyeValue:(float)arg1 strategy:(unsigned long long)arg2;
- (void)awe_applyBigEyeValue:(float)arg1;
- (void)awe_applyFaceLiftValue:(float)arg1 strategy:(unsigned long long)arg2;
- (void)awe_applyFaceLiftValue:(float)arg1;
- (void)setFaceLiftValue:(float)arg1 forIndensityParam:(struct IESIndensityParam_t *)arg2;
- (unsigned long long)genderForEffect;
@property(retain, nonatomic) id <AWEComposerEffectProtocol> currentComposerSticker;
@property(retain, nonatomic) IESEffectModel *currentSticker;
@property(nonatomic) _Bool awe_maleDetected;
- (void)setAwe_contextInfo:(id)arg1;
- (id)awe_contextInfo;
@property(nonatomic) long long cameraMode;
@property(nonatomic) _Bool forceApply;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)addRealTimeMusic:(id)arg1;
- (void)applyRealPlayWithInfo:(id)arg1;
- (void)applyRealPlay:(id)arg1;
- (void)enableEffectMusicPlayerProgress:(_Bool)arg1;
- (void)applyMusicNodes:(id)arg1;
- (_Bool)exportWithVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(retain, nonatomic) id <IESMMARCameraDelegate> arCameraDelegate;
@property(readonly, nonatomic) IESMMARCamera *arVideoCamera;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) IESMMEffectGroup *effectFilter;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType onCameraTypeDidChangeBlock;
@property(nonatomic) long long preferredCameraType;
@property(readonly) Class superclass;

@end

