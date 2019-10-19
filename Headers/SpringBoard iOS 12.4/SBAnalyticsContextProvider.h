//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAnalyticsBackendEventContextProviding.h"

@class NSString, SBAnalyticsBackend, SBSAnalyticsState;

@interface SBAnalyticsContextProvider : NSObject <SBAnalyticsBackendEventContextProviding>
{
    SBSAnalyticsState *_eventPayload;
    SBAnalyticsBackend *_backend;
}

- (void).cxx_destruct;
- (void)stateForQueryName:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SBSAnalyticsState *eventPayload;
- (id)initWithEventPayload:(id)arg1 backend:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
