//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CHRApplicationStateTracker : NSObject
{
    int _applicationState;
}

@property(nonatomic) int applicationState; // @synthesize applicationState=_applicationState;
- (void)applicationWasBackgrounded;
- (void)applicationWasForegrounded;
- (void)beingObservingApplicationStateChanges;
- (void)updateBestGuessApplicationState;
- (void)dealloc;
- (id)init;

@end

