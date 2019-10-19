//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPImageDownloadQueue;
@protocol MPNativeAdRendererImageHandlerDelegate;

@interface MPNativeAdRendererImageHandler : NSObject
{
    id <MPNativeAdRendererImageHandlerDelegate> _delegate;
    MPImageDownloadQueue *_imageDownloadQueue;
}

@property(retain, nonatomic) MPImageDownloadQueue *imageDownloadQueue; // @synthesize imageDownloadQueue=_imageDownloadQueue;
@property(nonatomic) __weak id <MPNativeAdRendererImageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)safeMainQueueSetImage:(id)arg1 intoImageView:(id)arg2;
- (void)loadImageForURL:(id)arg1 intoImageView:(id)arg2;
- (id)init;

@end
