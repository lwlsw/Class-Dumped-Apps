//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LLVideoPlayerCacheLoader, NSDictionary, NSError, NSURL;

@interface DCDBaseVideoView : UIView
{
    LLVideoPlayerCacheLoader *_resourceLoader;
    _Bool _paused;
    _Bool _hasSentOnLoadStart;
    _Bool _hasCompleted;
    NSURL *_URL;
    CDUnknownBlockType _onLoadStart;
    CDUnknownBlockType _onError;
    CDUnknownBlockType _onLoad;
    CDUnknownBlockType _onLoadEnd;
    NSError *_error;
    NSDictionary *_onLoadEvent;
}

+ (Class)layerClass;
@property(retain, nonatomic) NSDictionary *onLoadEvent; // @synthesize onLoadEvent=_onLoadEvent;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool hasCompleted; // @synthesize hasCompleted=_hasCompleted;
@property(nonatomic) _Bool hasSentOnLoadStart; // @synthesize hasSentOnLoadStart=_hasSentOnLoadStart;
@property(copy, nonatomic) CDUnknownBlockType onLoadEnd; // @synthesize onLoadEnd=_onLoadEnd;
@property(copy, nonatomic) CDUnknownBlockType onLoad; // @synthesize onLoad=_onLoad;
@property(copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(copy, nonatomic) CDUnknownBlockType onLoadStart; // @synthesize onLoadStart=_onLoadStart;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)downloadVideo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resume;
- (void)pause;
- (void)play;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)playerDidPlayToEnd:(id)arg1;
- (void)preparePlay:(id)arg1;
- (void)sendOnLoad;
- (id)playerLayer;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)setup;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

