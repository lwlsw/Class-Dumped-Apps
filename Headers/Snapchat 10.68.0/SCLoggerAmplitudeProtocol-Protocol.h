//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, SCAUserNotTrackedEvent, SCAUserTrackedEvent;
@protocol SCLoggerAmplitudePrefetchListener;

@protocol SCLoggerAmplitudeProtocol <NSObject>
- (NSString *)sessionId;
- (void)appDidReceivePrefetchTriggerByAppleWithState:(long long)arg1;
- (void)appDidReceivePushNotificationWithSource:(long long)arg1 appState:(long long)arg2;
- (void)removeListener:(id <SCLoggerAmplitudePrefetchListener>)arg1;
- (void)assignListener:(id <SCLoggerAmplitudePrefetchListener>)arg1;
- (void)startBlizzardPrefetch;
- (void)resumeSessionIfPossible:(long long)arg1;
- (void)logUserNotTrackedEvent:(SCAUserNotTrackedEvent *)arg1;
- (void)logUserTrackedEvent:(SCAUserTrackedEvent *)arg1;

@optional
- (void)logSerializedEvent:(NSDictionary *)arg1;
@end

