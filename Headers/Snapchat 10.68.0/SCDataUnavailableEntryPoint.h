//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCDataUnavailableScope, SCDataUnavailableWorkflow, SCSystemScope, UIViewController;

@interface SCDataUnavailableEntryPoint : SCEntryPoint
{
    SCDataUnavailableWorkflow *_dataUnavailableWorkflow;
    UIViewController *_dataUnavailableViewController;
    SCSystemScope *_systemScope;
    SCDataUnavailableScope *_dataUnavailableScope;
}

@property(nonatomic) __weak SCDataUnavailableScope *dataUnavailableScope; // @synthesize dataUnavailableScope=_dataUnavailableScope;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)begin;

@end
