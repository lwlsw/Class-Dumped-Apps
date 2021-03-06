//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, YTEditPlayerAsset;

@protocol YTEditPlayerAssetExportObserver <NSObject>
- (void)playerAsset:(YTEditPlayerAsset *)arg1 didExportToPhotoLibraryWithIdentifier:(NSString *)arg2;

@optional
- (void)playerAssetExportFailedWithError:(NSError *)arg1;
- (void)playerAsset:(YTEditPlayerAsset *)arg1 exportDidProgress:(double)arg2;
@end

