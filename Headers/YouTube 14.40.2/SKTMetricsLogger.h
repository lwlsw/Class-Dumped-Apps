//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKTClientConfig;

@interface SKTMetricsLogger : NSObject
{
    SKTClientConfig *_clientConfig;
    id <SKTSendKitCoreDataOptions> _options;
    id <GSCAddressBookService> _addressBookService;
    id <PDLClientInfoProvider> _clientInfoProvider;
    id <CCTClearcutLogger> _clearcutLogger;
}

+ (int)loggingDataSourceFromContactSource:(long long)arg1;
+ (int)loggingUserInterfaceTypeForUIType:(long long)arg1;
@property(readonly, nonatomic) id <CCTClearcutLogger> clearcutLogger; // @synthesize clearcutLogger=_clearcutLogger;
@property(readonly, nonatomic) id <PDLClientInfoProvider> clientInfoProvider; // @synthesize clientInfoProvider=_clientInfoProvider;
@property(readonly, nonatomic) id <GSCAddressBookService> addressBookService; // @synthesize addressBookService=_addressBookService;
@property(readonly, nonatomic) id <SKTSendKitCoreDataOptions> options; // @synthesize options=_options;
@property(readonly, nonatomic) SKTClientConfig *clientConfig; // @synthesize clientConfig=_clientConfig;
- (void).cxx_destruct;
- (id)sendKitExtensionWithEntryType:(int)arg1 UIType:(long long)arg2 dataSourceType:(int)arg3 resultIndex:(unsigned long long)arg4;
- (void)logSendKitExtensionWithBlock:(CDUnknownBlockType)arg1;
- (void)logError:(int)arg1 withCause:(int)arg2 UIType:(long long)arg3 dataSourceType:(int)arg4;
- (void)logCountWithLabel:(int)arg1 UIType:(long long)arg2 dataSourceType:(int)arg3 resultIndex:(unsigned long long)arg4 value:(unsigned long long)arg5;
- (void)logLatencyWithTimer:(id)arg1 latencyLabel:(int)arg2 resultIndex:(unsigned long long)arg3;
- (void)logDataDisplayWithTimer:(id)arg1 resultIndex:(unsigned long long)arg2 queryLength:(unsigned long long)arg3 resultCount:(unsigned long long)arg4 inAppResultCount:(unsigned long long)arg5 showDeviceContactsShown:(_Bool)arg6;
- (id)initWithClientConfig:(id)arg1 options:(id)arg2 clearcutLoggerProvider:(id)arg3 clientInfoProvider:(id)arg4 addressBookService:(id)arg5;

@end
