//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMRecoderProtocol-Protocol.h"

@class IESEffectModel, IESMMARCamera, IESMMEffectGroup, NSString, NSURL;
@protocol AWEComposerEffectProtocol, IESMMARCameraDelegate;

@protocol AWEVideoRecoderProtocol <IESMMRecoderProtocol>
@property(retain, nonatomic) id <IESMMARCameraDelegate> arCameraDelegate;
@property(readonly, nonatomic) IESMMARCamera *arVideoCamera;
@property(retain, nonatomic) IESMMEffectGroup *effectFilter;
@property(copy, nonatomic) CDUnknownBlockType onCameraTypeDidChangeBlock;
@property(nonatomic) long long preferredCameraType;
@property(retain, nonatomic) id <AWEComposerEffectProtocol> currentComposerSticker;
@property(retain, nonatomic) IESEffectModel *currentSticker;
@property(nonatomic) _Bool awe_maleDetected;
@property(nonatomic) _Bool forceApply;
@property(nonatomic) long long cameraMode;
- (_Bool)save3DObjectMeshToFile:(NSURL *)arg1;
- (_Bool)handleFinishManipulate3DObject;
- (_Bool)handleEndManipulate3DObject;
- (_Bool)handleManipulate3DObject;
- (_Bool)handleBeginManipulate3DObject;
- (long long)cameraType;
- (void)awe_applySharpenValue:(float)arg1;
- (void)awe_applyBlusherValue:(float)arg1;
- (void)awe_applyLipValue:(float)arg1;
- (void)awe_applyBigEyeValue:(float)arg1 strategy:(unsigned long long)arg2;
- (void)awe_applyBigEyeValue:(float)arg1;
- (void)awe_applyFaceLiftValue:(float)arg1 strategy:(unsigned long long)arg2;
- (void)awe_applyFaceLiftValue:(float)arg1;
- (void)awe_applySmoothWithValue:(float)arg1;
- (float)awe_sharpenIndensity;
- (float)awe_blusherIndensity;
- (float)awe_lipIndensity;
- (float)awe_bigEyeIndensity;
- (float)awe_faceLiftIndensity;
- (float)awe_reshapeIndensity;
- (float)awe_smoothIndensity;
- (void)awe_stopVideoCapture;
- (void)awe_startVideoCapture;
- (void)awe_captureStillImage:(void (^)(UIImage *, NSError *))arg1;
- (void)awe_pauseStickerBGM:(unsigned long long)arg1;
- (void)awe_applyFilterEffectWithPath:(NSString *)arg1;
- (void)awe_operateVEComposerEffect:(id <AWEComposerEffectProtocol>)arg1 operation:(long long)arg2;
- (void)awe_operateComposerEffect:(id <AWEComposerEffectProtocol>)arg1 operation:(long long)arg2;
- (void)awe_applyVEComposerEffect:(id <AWEComposerEffectProtocol>)arg1;
- (void)awe_applyComposerEffect:(id <AWEComposerEffectProtocol>)arg1;
- (void)awe_applyVEStickerEffect:(IESEffectModel *)arg1;
- (void)awe_applyStickerEffect:(IESEffectModel *)arg1;
@end

