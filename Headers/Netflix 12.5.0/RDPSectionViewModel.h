//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RDPSectionViewModel : NSObject
{
    NSArray *_items;
    unsigned long long _index;
}

@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long numberOfItems;
- (unsigned long long)indexOfItem:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)initWithFalcorData:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

