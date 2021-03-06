//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensFilteredMetadataStore-Protocol.h"

@class NSArray, NSString, SCLens, SCLensMetadataStoreListenerAnnouncer;

@interface SCLensDemoMetadataStore : NSObject <SCLensFilteredMetadataStore>
{
    SCLens *_lens;
    SCLensMetadataStoreListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (_Bool)supportsFilteringForAttribute:(unsigned long long)arg1;
- (void)applyMetadataProviderSettings:(id)arg1;
- (void)synchronize;
- (void)stopUpdating;
- (void)startUpdating;
- (void)warmUp;
@property(readonly, nonatomic) NSArray *lensesToPrefetch;
@property(readonly, nonatomic) NSArray *lenses;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)removeLens;
- (void)setLens:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

