//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureLensDataProviderFactory-Protocol.h"

@protocol SCLensCameraScreenDataProviderProtocol, SCLensUserSessionLifeCycleNotifier;

@interface SCFeatureLensDataProviderFactoryImpl : SCFeature <SCFeatureLensDataProviderFactory>
{
    id <SCLensCameraScreenDataProviderProtocol> _lensCameraScreenDataProvider;
    id <SCLensUserSessionLifeCycleNotifier> _lensUserSessionLifeCycleNotifier;
}

- (void).cxx_destruct;
- (id)_commonLensDataProviderWithDevicePosition:(long long)arg1 categoryIds:(id)arg2;
- (id)lensDataProviderForSnap3DLensInFilterCarousel;
- (id)initWithLensCameraScreenDataProvider:(id)arg1 lensUserSessionLifeCycleNotifier:(id)arg2;

@end

