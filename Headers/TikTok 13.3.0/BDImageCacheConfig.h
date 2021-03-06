//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface BDImageCacheConfig : NSObject <NSCopying>
{
    _Bool _clearMemoryOnMemoryWarning;
    _Bool _clearMemoryWhenEnteringBackground;
    _Bool _trimDiskWhenEnteringBackground;
    unsigned long long _memoryCountLimit;
    unsigned long long _memorySizeLimit;
    unsigned long long _memoryAgeLimit;
    unsigned long long _diskCountLimit;
    unsigned long long _diskSizeLimit;
    unsigned long long _diskAgeLimit;
}

@property(nonatomic) unsigned long long diskAgeLimit; // @synthesize diskAgeLimit=_diskAgeLimit;
@property(nonatomic) unsigned long long diskSizeLimit; // @synthesize diskSizeLimit=_diskSizeLimit;
@property(nonatomic) unsigned long long diskCountLimit; // @synthesize diskCountLimit=_diskCountLimit;
@property(nonatomic) _Bool trimDiskWhenEnteringBackground; // @synthesize trimDiskWhenEnteringBackground=_trimDiskWhenEnteringBackground;
@property(nonatomic) unsigned long long memoryAgeLimit; // @synthesize memoryAgeLimit=_memoryAgeLimit;
@property(nonatomic) unsigned long long memorySizeLimit; // @synthesize memorySizeLimit=_memorySizeLimit;
@property(nonatomic) unsigned long long memoryCountLimit; // @synthesize memoryCountLimit=_memoryCountLimit;
@property(nonatomic) _Bool clearMemoryWhenEnteringBackground; // @synthesize clearMemoryWhenEnteringBackground=_clearMemoryWhenEnteringBackground;
@property(nonatomic) _Bool clearMemoryOnMemoryWarning; // @synthesize clearMemoryOnMemoryWarning=_clearMemoryOnMemoryWarning;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

