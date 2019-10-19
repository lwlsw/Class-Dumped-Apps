//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEPhotoEditorModel, IESImageProcess, UIView;

@interface AWEImageProcessService : NSObject
{
    AWEPhotoEditorModel *_pictureEditorModel;
    UIView *_mediaContainer;
    IESImageProcess *_imageProcess;
    CDUnknownBlockType _errorRetryBlock;
    struct CGSize _containerSize;
    struct CGRect _mediaContainerOriginalFrame;
}

@property(copy, nonatomic) CDUnknownBlockType errorRetryBlock; // @synthesize errorRetryBlock=_errorRetryBlock;
@property(retain, nonatomic) IESImageProcess *imageProcess; // @synthesize imageProcess=_imageProcess;
@property(nonatomic) struct CGRect mediaContainerOriginalFrame; // @synthesize mediaContainerOriginalFrame=_mediaContainerOriginalFrame;
@property(retain, nonatomic) UIView *mediaContainer; // @synthesize mediaContainer=_mediaContainer;
@property(retain, nonatomic) AWEPhotoEditorModel *pictureEditorModel; // @synthesize pictureEditorModel=_pictureEditorModel;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
- (void).cxx_destruct;
- (struct CGRect)mediaBigMediaFrameForSize:(struct CGSize)arg1;
- (void)resetView;
- (id)builderWithCropedImage;
- (id)builder;

@end
