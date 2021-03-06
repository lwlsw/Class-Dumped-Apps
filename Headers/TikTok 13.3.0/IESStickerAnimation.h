//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface IESStickerAnimation : NSObject <NSCopying>
{
    _Bool _isAbsoluteFrameTs;
    unsigned long long _type;
    NSArray *_values;
    NSArray *_mediaTimingFuncs;
    NSArray *_frameTs;
    unsigned long long _repeatType;
}

@property(nonatomic) unsigned long long repeatType; // @synthesize repeatType=_repeatType;
@property(nonatomic) _Bool isAbsoluteFrameTs; // @synthesize isAbsoluteFrameTs=_isAbsoluteFrameTs;
@property(copy, nonatomic) NSArray *frameTs; // @synthesize frameTs=_frameTs;
@property(copy, nonatomic) NSArray *mediaTimingFuncs; // @synthesize mediaTimingFuncs=_mediaTimingFuncs;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

