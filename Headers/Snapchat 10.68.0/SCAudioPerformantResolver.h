//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAudioResolver-Protocol.h"

@class NSMutableOrderedSet, NSString, SCAudioConfiguration;
@protocol SCProximityStatus;

@interface SCAudioPerformantResolver : NSObject <SCAudioResolver>
{
    SCAudioConfiguration *_activeConfiguration;
    NSMutableOrderedSet *_setOfConfigurations;
    SCAudioConfiguration *_defaultAmbientConfiguration;
    id <SCProximityStatus> _proximityStatus;
}

@property(retain, nonatomic) id <SCProximityStatus> proximityStatus; // @synthesize proximityStatus=_proximityStatus;
- (void).cxx_destruct;
- (id)configurationDebugInfo;
- (id)relinquishConfiguration:(id)arg1;
- (id)_buildConfiguration:(id)arg1 withProximityState:(_Bool)arg2;
- (id)getCurrentResolvedConfiguration;
- (id)_chooseActiveConfiguration;
- (id)resolveConfiguration:(id)arg1;
- (id)initWithProximityStatus:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

