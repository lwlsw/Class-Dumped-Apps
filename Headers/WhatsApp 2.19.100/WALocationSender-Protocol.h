//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDate, NSNumber, NSString, WAChatJID, WAUserJID;
@protocol WAServerDate;

@protocol WALocationSender <NSObject>
@property(readonly, copy, nonatomic) NSNumber *sequenceNumber;
@property(readonly, copy, nonatomic) NSString *messageUniqueKey;
@property(readonly, copy, nonatomic) NSData *locationMessage;
@property(readonly, copy, nonatomic) NSDate<WAServerDate> *timestamp;
@property(readonly, nonatomic) WAChatJID *chatJID;
@property(readonly, nonatomic) WAUserJID *senderJID;
@property(readonly, copy, nonatomic) NSDate<WAServerDate> *endDate;
@end

