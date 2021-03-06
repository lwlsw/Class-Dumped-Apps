//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUCommerceCustomBitmojiInfo-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SOJUCommerceCustomBitmojiInfo : NSObject <SOJUCommerceCustomBitmojiInfo>
{
    NSArray *_bitmojiImageInfoList;
    NSNumber *_isTintable;
    NSDictionary *_colors;
    NSString *_defaultSolomojiComicId;
    NSString *_defaultAvatarId;
    NSString *_defaultFriendmojiComicId;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *defaultFriendmojiComicId; // @synthesize defaultFriendmojiComicId=_defaultFriendmojiComicId;
@property(readonly, copy, nonatomic) NSString *defaultAvatarId; // @synthesize defaultAvatarId=_defaultAvatarId;
@property(readonly, copy, nonatomic) NSString *defaultSolomojiComicId; // @synthesize defaultSolomojiComicId=_defaultSolomojiComicId;
@property(readonly, copy, nonatomic) NSDictionary *colors; // @synthesize colors=_colors;
@property(readonly, copy, nonatomic) NSNumber *isTintable; // @synthesize isTintable=_isTintable;
@property(readonly, copy, nonatomic) NSArray *bitmojiImageInfoList; // @synthesize bitmojiImageInfoList=_bitmojiImageInfoList;
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
- (id)initWithBitmojiImageInfoList:(id)arg1 isTintable:(id)arg2 colors:(id)arg3 defaultSolomojiComicId:(id)arg4 defaultAvatarId:(id)arg5 defaultFriendmojiComicId:(id)arg6;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isTintableValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

