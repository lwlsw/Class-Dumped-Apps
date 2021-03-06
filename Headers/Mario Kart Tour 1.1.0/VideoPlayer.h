//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetReader, AVAssetReaderTrackOutput, AVPlayer, AVPlayerItem;

@interface VideoPlayer : NSObject
{
    id <VideoPlayerDelegate> delegate;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    AVAssetReader *_reader;
    AVAssetReaderTrackOutput *_videoOut;
    struct opaqueCMSampleBuffer *_cmSampleBuffer;
    struct CMVideoSampling _videoSampling;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _curTime;
    CDStruct_1b6d18a9 _curFrameTimestamp;
    CDStruct_1b6d18a9 _lastFrameTimestamp;
    struct CGSize _videoSize;
    _Bool _playerReady;
    _Bool _assetReady;
    _Bool _itemReady;
}

+ (_Bool)CheckScalingModeAspectFill:(struct CGSize)arg1 screenSize:(struct CGSize)arg2;
+ (_Bool)CanPlayToTexture:(id)arg1;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) id delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)prepareReader;
- (void)prepareAsset:(id)arg1 withKeys:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)audioRouteChanged:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (_Bool)setAudioVolume:(float)arg1;
- (long long)curFrameTexture;
- (void)seekToTimestamp:(CDStruct_1b6d18a9)arg1;
- (void)seekTo:(float)arg1;
- (void)rewind;
- (void)resume;
- (void)pause;
- (_Bool)isPlaying;
- (_Bool)playVideoPlayer;
- (_Bool)playToTexture;
- (_Bool)playToView:(id)arg1;
- (_Bool)_playWithPrepareBlock:(CDUnknownBlockType)arg1;
- (_Bool)loadVideo:(id)arg1;
- (void)unloadPlayer;
- (void)cleanupPlayer;
- (void)cleanupAssetReader;
- (void)cleanupCVTextureCache;
- (id)init;
- (void)reportErrorWithString:(const char *)arg1 category:(const char *)arg2;
- (void)reportError:(id)arg1 category:(const char *)arg2;
- (float)durationSeconds;
- (CDStruct_1b6d18a9)duration;
- (struct CGSize)videoSize;
- (_Bool)readyToPlay;

@end

