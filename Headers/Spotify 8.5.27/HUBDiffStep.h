//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUBDiffStep : NSObject
{
    CDStruct_f261e59c _from;
    CDStruct_f261e59c _to;
}

@property(readonly, nonatomic) CDStruct_f261e59c to; // @synthesize to=_to;
@property(readonly, nonatomic) CDStruct_f261e59c from; // @synthesize from=_from;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithFromPoint:(CDStruct_f261e59c)arg1 toPoint:(CDStruct_f261e59c)arg2;

@end
