//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWAMPMessage-Protocol.h"

@class NSArray, NSString;

@interface SPTAppProtocolWAMPMessage : NSObject <SPTWAMPMessage>
{
}

+ (id)messageFromRawMessage:(id)arg1 error:(id *)arg2;
+ (_Bool)rawMessageFormatIsValid:(id)arg1;
- (_Bool)populateWithRawMessage:(id)arg1 error:(id *)arg2;
- (id)initWithRawMessage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *rawMessage;
@property(readonly, copy, nonatomic) NSString *jsonRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long messageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

