//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class IESMMRWLock, NSMutableArray;

@interface VEUnitObject : IESMMObject
{
    IESMMRWLock *_rwLock;
    NSMutableArray *_downStreams;
}

@property(retain, nonatomic) NSMutableArray *downStreams; // @synthesize downStreams=_downStreams;
@property(retain, nonatomic) IESMMRWLock *rwLock; // @synthesize rwLock=_rwLock;
- (void).cxx_destruct;
- (id)downStreamsCopy;
- (void)removeAllDwonStreams;
- (void)removeDownStreamAtIndexs:(id)arg1;
- (void)removeDownStream:(id)arg1;
- (void)addDownStream:(id)arg1;
- (id)init;

@end

