//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockableTrackInfo-Protocol.h"

@class NSNumber, NSString;

@interface SOJUUnlockableTrackInfo : NSObject <SOJUUnlockableTrackInfo>
{
    NSString *_adServeRequestId;
    NSString *_rawAdData;
    NSNumber *_skipTrack;
    NSString *_encryptedSponsoredUnlockableTargetingInfoData;
    NSString *_adTrackUrl;
    NSString *_rankingId;
    NSString *_rankingData;
    NSString *_encryptedUserTrackData;
    NSString *_jsonTrackUrl;
    NSString *_protoTrackUrl;
    NSString *_batchTrackUrl;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *batchTrackUrl; // @synthesize batchTrackUrl=_batchTrackUrl;
@property(readonly, copy, nonatomic) NSString *protoTrackUrl; // @synthesize protoTrackUrl=_protoTrackUrl;
@property(readonly, copy, nonatomic) NSString *jsonTrackUrl; // @synthesize jsonTrackUrl=_jsonTrackUrl;
@property(readonly, copy, nonatomic) NSString *encryptedUserTrackData; // @synthesize encryptedUserTrackData=_encryptedUserTrackData;
@property(readonly, copy, nonatomic) NSString *rankingData; // @synthesize rankingData=_rankingData;
@property(readonly, copy, nonatomic) NSString *rankingId; // @synthesize rankingId=_rankingId;
@property(readonly, copy, nonatomic) NSString *adTrackUrl; // @synthesize adTrackUrl=_adTrackUrl;
@property(readonly, copy, nonatomic) NSString *encryptedSponsoredUnlockableTargetingInfoData; // @synthesize encryptedSponsoredUnlockableTargetingInfoData=_encryptedSponsoredUnlockableTargetingInfoData;
@property(readonly, copy, nonatomic) NSNumber *skipTrack; // @synthesize skipTrack=_skipTrack;
@property(readonly, copy, nonatomic) NSString *rawAdData; // @synthesize rawAdData=_rawAdData;
@property(readonly, copy, nonatomic) NSString *adServeRequestId; // @synthesize adServeRequestId=_adServeRequestId;
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
- (id)initWithAdServeRequestId:(id)arg1 rawAdData:(id)arg2 skipTrack:(id)arg3 encryptedSponsoredUnlockableTargetingInfoData:(id)arg4 adTrackUrl:(id)arg5 rankingId:(id)arg6 rankingData:(id)arg7 encryptedUserTrackData:(id)arg8 jsonTrackUrl:(id)arg9 protoTrackUrl:(id)arg10 batchTrackUrl:(id)arg11;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)skipTrackValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

