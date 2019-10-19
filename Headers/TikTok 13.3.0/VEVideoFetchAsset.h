//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VEFetchAssetProtocol-Protocol.h"

@class AVAsset, AVVideoComposition, NSString;

@interface VEVideoFetchAsset : NSObject <VEFetchAssetProtocol>
{
    long long _totalDuration;
    AVAsset *_asset;
    AVVideoComposition *_videoCompostion;
    CDStruct_1b6d18a9 _assetDuration;
}

@property(nonatomic) CDStruct_1b6d18a9 assetDuration; // @synthesize assetDuration=_assetDuration;
@property(retain, nonatomic) AVVideoComposition *videoCompostion; // @synthesize videoCompostion=_videoCompostion;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) long long totalDuration; // @synthesize totalDuration=_totalDuration;
- (void).cxx_destruct;
- (void)asynFetchImageWithBound:(struct CGSize)arg1 pts:(double)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (struct __CVBuffer *)fetchImageWithBound:(struct CGSize)arg1 pts:(double)arg2;
- (id)initWithAsset:(id)arg1 videoCompostion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
