//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCircumstanceEngineServices, SCLazy, SCServicesExposer, SCUserSessionScope;

@interface SCDiscoverFeedNetworkingEntryPoint : SCEntryPoint
{
    SCLazy *_lazyDiscoverFeedEndpointManaging;
    SCUserSessionScope *_userSessionScope;
    SCCircumstanceEngineServices *_circumstanceEngineServices;
    SCServicesExposer *_discoverFeedNetworkingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *discoverFeedNetworkingServicesExposer; // @synthesize discoverFeedNetworkingServicesExposer=_discoverFeedNetworkingServicesExposer;
@property(nonatomic) __weak SCCircumstanceEngineServices *circumstanceEngineServices; // @synthesize circumstanceEngineServices=_circumstanceEngineServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

