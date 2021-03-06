//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandAssetBox-Protocol.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandAssetBox : NSObject <SOJUUnlockablesOndemandAssetBox>
{
    NSNumber *_posX;
    NSNumber *_posY;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_rotation;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *rotation; // @synthesize rotation=_rotation;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSNumber *posY; // @synthesize posY=_posY;
@property(readonly, copy, nonatomic) NSNumber *posX; // @synthesize posX=_posX;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPosX:(id)arg1 posY:(id)arg2 width:(id)arg3 height:(id)arg4 rotation:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (double)rotationValue;
- (double)heightValue;
- (double)widthValue;
- (double)posYValue;
- (double)posXValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

