//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YTIFormattedString;

@protocol YTUpdatedMetadataServiceObserver <NSObject>
- (void)didUpdateDonationProgress:(float)arg1 donatedAmount:(YTIFormattedString *)arg2 forVideoID:(NSString *)arg3;
- (void)didUpdateExtraShortVideoViewCount:(YTIFormattedString *)arg1 forVideoID:(NSString *)arg2;
@end

