//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWADependencyGraphComponent-Protocol.h"

@class NSArray, OrchTriggerValueReference;

@protocol GWATriggerComponent <GWADependencyGraphComponent>
- (_Bool)checkTrigger:(OrchTriggerValueReference *)arg1;
- (void)addTriggers:(NSArray *)arg1;

@optional
- (void)removeTriggers:(NSArray *)arg1;
@end

