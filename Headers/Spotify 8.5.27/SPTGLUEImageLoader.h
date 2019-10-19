//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGLUEObservableImageLoader-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol SPTImageLoader;

@interface SPTGLUEImageLoader : NSObject <SPTImageLoaderDelegate, SPTGLUEObservableImageLoader>
{
    id <SPTImageLoader> _imageLoader;
    NSString *_sourceIdentifier;
    NSMutableDictionary *_operations;
}

@property(retain, nonatomic) NSMutableDictionary *operations; // @synthesize operations=_operations;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void).cxx_destruct;
- (void)removeInstrumentationObserver:(id)arg1;
- (void)addInstrumentationObserver:(id)arg1;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (id)loadImageForURL:(id)arg1 imageSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithImageLoader:(id)arg1 sourceIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
