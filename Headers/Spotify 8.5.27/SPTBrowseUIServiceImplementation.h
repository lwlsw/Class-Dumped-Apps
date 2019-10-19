//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBrowseUIService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTBrowseUIComponentFactory, SPTBrowseUITestManager, SPTFeatureFlaggingService, SPTGLUEService, SPTHubFrameworkService, SPTSettingsFeature;

@interface SPTBrowseUIServiceImplementation : NSObject <SPTBrowseUIService>
{
    id <SPTBrowseUITestManager> _testManager;
    id <SPTGLUEService> _glueService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTSettingsFeature> _settingsFeature;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTBrowseUITestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) CDUnknownBlockType cardsTransformer;
- (id)provideBrowseMockHubData;
@property(readonly, nonatomic) id <SPTBrowseUIComponentFactory> componentFactory;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
