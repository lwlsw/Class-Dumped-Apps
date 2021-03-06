//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet, SCDisposableObserverLifecycle, SCLazy, SCScriptIndexer;

@interface SIGSectionFastIndexer : NSObject
{
    NSOrderedSet *_indexScript;
    NSOrderedSet *_predefinedSections;
    CDUnknownBlockType _indexKeyToSectionMapper;
    SCScriptIndexer *_scriptIndexer;
    SCLazy *_lazyScriptIndexer;
    SCDisposableObserverLifecycle *_subscription;
}

- (void).cxx_destruct;
- (id)rowBasedIndexPathForKey:(id)arg1;
- (id)sectionBasedIndexPathForKey:(id)arg1;
- (id)initWithIndexEntityObservableRepository:(id)arg1 indexScript:(id)arg2 predefinedSections:(id)arg3 indexKeyToSectionMapper:(CDUnknownBlockType)arg4;

@end

