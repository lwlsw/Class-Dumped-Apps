//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPBMessage, NSArray;

@interface YTMQueueModificationNotificationData : NSObject
{
    int _queueInsertPosition;
    long long _notificationType;
    NSArray *_items;
    GPBMessage *_responseForLogging;
}

+ (id)addToQueueNotificationWithQueueItems:(id)arg1 atInsertPosition:(int)arg2 responseForLogging:(id)arg3;
@property(readonly, nonatomic) GPBMessage *responseForLogging; // @synthesize responseForLogging=_responseForLogging;
@property(readonly, nonatomic) int queueInsertPosition; // @synthesize queueInsertPosition=_queueInsertPosition;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) long long notificationType; // @synthesize notificationType=_notificationType;
- (void).cxx_destruct;
- (void)send;

@end

