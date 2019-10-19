//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdUnlockableDeepLink-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdUnlockableDeepLink : NSObject <SOJUAdUnlockableDeepLink>
{
    NSNumber *_openTimestampMs;
    NSNumber *_redirectToStore;
    NSNumber *_redirectToWebview;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *redirectToWebview; // @synthesize redirectToWebview=_redirectToWebview;
@property(readonly, copy, nonatomic) NSNumber *redirectToStore; // @synthesize redirectToStore=_redirectToStore;
@property(readonly, copy, nonatomic) NSNumber *openTimestampMs; // @synthesize openTimestampMs=_openTimestampMs;
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
- (id)initWithOpenTimestampMs:(id)arg1 redirectToStore:(id)arg2 redirectToWebview:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)redirectToWebviewValue;
- (_Bool)redirectToStoreValue;
- (long long)openTimestampMsValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
