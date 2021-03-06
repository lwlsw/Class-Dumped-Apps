//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessCommand.h"

@class SCImageProcessLensCommandMetadata, SCLens;

@interface SCImageProcessVirtualLensCommand : SCImageProcessCommand
{
    _Bool _isVideo;
    SCLens *_lens;
    SCImageProcessLensCommandMetadata *_metadata;
}

@property(readonly, nonatomic) SCImageProcessLensCommandMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(readonly, nonatomic) SCLens *lens; // @synthesize lens=_lens;
- (void).cxx_destruct;
- (id)description;
- (id)copy;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)unloadWithError:(id *)arg1;
- (id)runWithContext:(id)arg1 pixelSize:(CDStruct_5e758c1a)arg2 bytesPerRow:(unsigned long long)arg3 outputPixelSize:(CDStruct_5e758c1a)arg4 renderRange:(CDStruct_b2fbf00d)arg5 orientation:(long long)arg6 viewportTransform:(struct CGAffineTransform)arg7 negativeSpaceColor:(id)arg8 error:(id *)arg9;
- (_Bool)drawWithPixelSize:(CDStruct_5e758c1a)arg1 outputPixelSize:(CDStruct_5e758c1a)arg2 renderRange:(CDStruct_b2fbf00d)arg3 orientation:(long long)arg4 viewportTransform:(struct CGAffineTransform)arg5 negativeSpaceColor:(id)arg6 error:(id *)arg7;
- (_Bool)isUnifiedCameraObjectCompatible;
- (_Bool)isGPUPass;
- (_Bool)loadWithContext:(id)arg1 error:(id *)arg2;
- (id)initWithLens:(id)arg1 isVideo:(_Bool)arg2 metadata:(id)arg3;

@end

