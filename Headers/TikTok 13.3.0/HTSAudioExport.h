//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class AVAssetExportSession;

@interface HTSAudioExport : IESMMObject
{
    AVAssetExportSession *_audioExportSession;
}

@property(retain, nonatomic) AVAssetExportSession *audioExportSession; // @synthesize audioExportSession=_audioExportSession;
- (void).cxx_destruct;
- (_Bool)exportVideoSoundSourceWithVideoData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exportM4aProcess:(id)arg1 videoItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (double)getAudioExportProgress;
- (void)cancelAudioExport;
- (void)prepareExportAudioDub:(id)arg1 compostion:(id)arg2;
- (void)prepareExportVideoSoundSource:(id)arg1 compostion:(id)arg2;
- (_Bool)exportAudioWithVideoData:(id)arg1 exportAudioType:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)exportAudioWithVideoData:(id)arg1 isOriSound:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)exportAudioWithVideoData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

