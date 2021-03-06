//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBrowsePlatformService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTBrowseRedirectButtonProvider, SPTNavigationFeature, SPTURIDispatchService;

@interface SPTBrowsePlatformServiceImplementation : NSObject <SPTBrowsePlatformService>
{
    id <SPTBrowseRedirectButtonProvider> _redirectButtonProvider;
    id <SPTNavigationFeature> _navigationService;
    id <SPTURIDispatchService> _URIDispatchService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTBrowseRedirectButtonProvider> redirectButtonProvider; // @synthesize redirectButtonProvider=_redirectButtonProvider;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

