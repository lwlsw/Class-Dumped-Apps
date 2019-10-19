//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensMetadataStoreListener-Protocol.h"
#import "SCLensMetadataStoreProtocol-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSString, SCLensMetadataStoreListenerAnnouncer;

@interface SCCompositeLensMetadataStore : NSObject <SCLensMetadataStoreListener, SCTraceEnabled, SCLensMetadataStoreProtocol>
{
    SCLensMetadataStoreListenerAnnouncer *_announcer;
    NSArray *_metadataStores;
}

- (void).cxx_destruct;
- (void)synchronize;
- (void)applyMetadataProviderSettings:(id)arg1;
- (void)stopUpdating;
- (void)startUpdating;
@property(readonly, nonatomic) NSArray *lensesToPrefetch;
@property(readonly, nonatomic) NSArray *lenses;
- (void)warmUp;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)lensMetadataStore:(id)arg1 didUpdateLensesToPrefetch:(id)arg2;
- (void)lensMetadataStore:(id)arg1 didUpdateLenses:(id)arg2;
- (id)initWithMetaDataStores:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
