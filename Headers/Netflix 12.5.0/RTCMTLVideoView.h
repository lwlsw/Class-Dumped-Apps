//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MTKViewDelegate-Protocol.h"
#import "RTCVideoRenderer-Protocol.h"

@class MTKView, NSString, RTCMTLI420Renderer, RTCMTLNV12Renderer, RTCVideoFrame;

@interface RTCMTLVideoView : UIView <MTKViewDelegate, RTCVideoRenderer>
{
    RTCMTLI420Renderer *_rendererI420;
    RTCMTLNV12Renderer *_rendererNV12;
    MTKView *_metalView;
    RTCVideoFrame *_videoFrame;
}

+ (id)createI420Renderer;
+ (id)createNV12Renderer;
+ (id)createMetalView:(struct CGRect)arg1;
+ (_Bool)isMetalAvailable;
@property(retain) RTCVideoFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(retain, nonatomic) MTKView *metalView; // @synthesize metalView=_metalView;
@property(retain, nonatomic) RTCMTLNV12Renderer *rendererNV12; // @synthesize rendererNV12=_rendererNV12;
@property(retain, nonatomic) RTCMTLI420Renderer *rendererI420; // @synthesize rendererI420=_rendererI420;
- (void).cxx_destruct;
- (void)renderFrame:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)drawInMTKView:(id)arg1;
- (void)layoutSubviews;
- (void)configureMetalView;
- (void)configure;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
