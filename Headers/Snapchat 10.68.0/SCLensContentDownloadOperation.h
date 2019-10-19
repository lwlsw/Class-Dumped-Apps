//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensDownloadOperation.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLensContentDataFetcher, SCLensDownloadTracker, SCLensSecurity;
@protocol SCLensDownloadLogger, SCLensPreferences;

@interface SCLensContentDownloadOperation : SCLensDownloadOperation <SCTraceEnabled>
{
    double _downloadStartTimestamp;
    _Bool _userInitiated;
    SCLensContentDataFetcher *_contentDataFetcher;
    SCLensSecurity *_signatureValidator;
    id <SCLensPreferences> _lensPreferences;
    SCLensDownloadTracker *_downloadTracker;
    id <SCLensDownloadLogger> _lensDownloadLogger;
}

@property(nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(retain, nonatomic) id <SCLensDownloadLogger> lensDownloadLogger; // @synthesize lensDownloadLogger=_lensDownloadLogger;
@property(retain, nonatomic) SCLensDownloadTracker *downloadTracker; // @synthesize downloadTracker=_downloadTracker;
@property(retain, nonatomic) id <SCLensPreferences> lensPreferences; // @synthesize lensPreferences=_lensPreferences;
@property(retain, nonatomic) SCLensSecurity *signatureValidator; // @synthesize signatureValidator=_signatureValidator;
@property(retain, nonatomic) SCLensContentDataFetcher *contentDataFetcher; // @synthesize contentDataFetcher=_contentDataFetcher;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)verifyContentForResource:(id)arg1 contentPath:(id)arg2 resourceType:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processResourceTypeVerificationForCurrentResource:(id)arg1;
- (void)processContentVerificationError:(id)arg1 resource:(id)arg2;
- (void)verifySignatureForContentResource:(id)arg1 contentPath:(id)arg2 resourceType:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processDataFetcherResponseForResource:(id)arg1 contentPath:(id)arg2 resourceType:(long long)arg3 cached:(_Bool)arg4 downloadSize:(unsigned long long)arg5 inputSettings:(id)arg6 error:(id)arg7;
- (void)_cleanObsoleteResources;
- (void)finishWithResult:(id)arg1;
- (void)boostWithSettings:(id)arg1;
- (void)executeWithSettings:(id)arg1;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2 contentDataFetcher:(id)arg3 signatureValidator:(id)arg4 lensPreferences:(id)arg5 downloadTracker:(id)arg6 lensDownloadLogger:(id)arg7 userInitiated:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
