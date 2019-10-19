//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNode-Protocol.h"

@class FImmutableSortedDictionary, NSString;
@protocol FNode;

@interface FChildrenNode : NSObject <FNode>
{
    FImmutableSortedDictionary *_children;
    id <FNode> _priorityNode;
    NSString *_lazyHash;
}

@property(retain, nonatomic) NSString *lazyHash; // @synthesize lazyHash=_lazyHash;
@property(retain, nonatomic) id <FNode> priorityNode; // @synthesize priorityNode=_priorityNode;
@property(retain, nonatomic) FImmutableSortedDictionary *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (id)lastChild;
- (id)firstChild;
- (id)childrenGetter:(id)arg1;
- (id)predecessorChildKey:(id)arg1;
- (id)childEnumerator;
- (void)enumerateChildrenReverse:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChildrenAndPriorityUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)dataHash;
- (id)valForExport:(_Bool)arg1;
- (id)val;
- (int)numChildren;
- (_Bool)isEmpty;
- (id)updateChild:(id)arg1 withNewChild:(id)arg2;
- (id)updateImmediateChild:(id)arg1 withNewChild:(id)arg2;
- (_Bool)hasChild:(id)arg1;
- (id)getChild:(id)arg1;
- (id)getImmediateChild:(id)arg1;
- (id)updatePriority:(id)arg1;
- (id)getPriority;
- (_Bool)isLeafNode;
@property(readonly, copy) NSString *description;
- (id)initWithPriority:(id)arg1 children:(id)arg2;
- (id)initWithChildren:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
