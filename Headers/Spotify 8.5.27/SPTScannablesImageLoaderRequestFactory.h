//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageLoaderRequestFactory-Protocol.h"

@class NSString, SPTDataLoaderFactory;
@protocol SPTImageLoaderFactory;

@interface SPTScannablesImageLoaderRequestFactory : NSObject <SPTImageLoaderRequestFactory>
{
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    SPTDataLoaderFactory *_dataLoaderFactory;
}

@property(nonatomic) __weak SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(nonatomic) __weak id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
- (void).cxx_destruct;
- (id)provideImageLoaderRequestForURL:(id)arg1 sourceIdentifier:(id)arg2 downloadSize:(struct CGSize)arg3 requestedSize:(struct CGSize)arg4 allowUpscaling:(_Bool)arg5 context:(id)arg6 callback:(id)arg7 dataLoader:(id)arg8 delegate:(id)arg9 baseImageLoader:(id)arg10;
- (id)initWithImageLoader:(id)arg1 dataLoaderFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

