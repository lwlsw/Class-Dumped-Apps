//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface SPTReaderWriterMutableDictionary : NSMutableDictionary
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dictionary;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (id)init;
- (void)commonInit;

@end

