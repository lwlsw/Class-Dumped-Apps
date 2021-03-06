//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUConnectedCallMessage-Protocol.h"

@class NSDictionary, NSNumber, NSString, SOJUHeader;

@interface SOJUConnectedCallMessage : NSObject <SOJUConnectedCallMessage>
{
    SOJUHeader *_header;
    NSNumber *_retried;
    NSDictionary *_knownChatSequenceNumbers;
    NSNumber *_mischiefVersion;
    NSNumber *_seqNum;
    NSNumber *_timestamp;
    NSString *_type;
    NSString *_idValue;
    NSString *_appEngineTarget;
    NSString *_callType;
    NSNumber *_connectedTimestamp;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *connectedTimestamp; // @synthesize connectedTimestamp=_connectedTimestamp;
@property(readonly, copy, nonatomic) NSString *callType; // @synthesize callType=_callType;
@property(readonly, copy, nonatomic) NSString *appEngineTarget; // @synthesize appEngineTarget=_appEngineTarget;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSNumber *seqNum; // @synthesize seqNum=_seqNum;
@property(readonly, copy, nonatomic) NSNumber *mischiefVersion; // @synthesize mischiefVersion=_mischiefVersion;
@property(readonly, copy, nonatomic) NSDictionary *knownChatSequenceNumbers; // @synthesize knownChatSequenceNumbers=_knownChatSequenceNumbers;
@property(readonly, copy, nonatomic) NSNumber *retried; // @synthesize retried=_retried;
@property(readonly, copy, nonatomic) SOJUHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeader:(id)arg1 retried:(id)arg2 knownChatSequenceNumbers:(id)arg3 mischiefVersion:(id)arg4 seqNum:(id)arg5 timestamp:(id)arg6 type:(id)arg7 idValue:(id)arg8 appEngineTarget:(id)arg9 callType:(id)arg10 connectedTimestamp:(id)arg11;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)connectedTimestampValue;
- (long long)callTypeEnum;
- (long long)typeEnum;
- (long long)timestampValue;
- (long long)seqNumValue;
- (long long)mischiefVersionValue;
- (_Bool)retriedValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

