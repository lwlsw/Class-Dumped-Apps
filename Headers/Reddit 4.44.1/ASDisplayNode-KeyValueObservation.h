//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class NSArray;

@interface ASDisplayNode (KeyValueObservation)
- (void)observeModel:(id)arg1 forKeyPaths:(id)arg2 options:(unsigned long long)arg3 action:(CDUnknownBlockType)arg4;
- (void)observeModel:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 action:(CDUnknownBlockType)arg4;
- (void)observeModel:(id)arg1 forKeyPaths:(id)arg2 action:(CDUnknownBlockType)arg3;
- (void)observeModel:(id)arg1 forKeyPath:(id)arg2 action:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSArray *keyValueObservations;
@end
