//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface IESMMCaptureOptions : NSObject
{
    _Bool _disableEffects;
    _Bool _pauseCameraAfterSuccess;
    long long _captureMode;
    long long _faceBeautifyType;
    NSString *_HDRPath;
    UIImage *_customPhoto;
    struct CGSize _captureSizeHD;
}

@property(retain, nonatomic) UIImage *customPhoto; // @synthesize customPhoto=_customPhoto;
@property(retain, nonatomic) NSString *HDRPath; // @synthesize HDRPath=_HDRPath;
@property(nonatomic) long long faceBeautifyType; // @synthesize faceBeautifyType=_faceBeautifyType;
@property(nonatomic) struct CGSize captureSizeHD; // @synthesize captureSizeHD=_captureSizeHD;
@property(nonatomic) _Bool pauseCameraAfterSuccess; // @synthesize pauseCameraAfterSuccess=_pauseCameraAfterSuccess;
@property(nonatomic) _Bool disableEffects; // @synthesize disableEffects=_disableEffects;
@property(nonatomic) long long captureMode; // @synthesize captureMode=_captureMode;
- (void).cxx_destruct;

@end

