//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCloudDeleteEntriesSnapshot-Protocol.h"

@class NSArray, NSString, SCCloudSyncTriggerUserContext;
@protocol SCGalleryProfile;

@interface SCCloudDeleteEntriesSnapshot : NSObject <SCCloudDeleteEntriesSnapshot>
{
    _Bool _needRunImmediately;
    _Bool _deleteSharedSnapForAll;
    id <SCGalleryProfile> _profile;
    NSArray *_entryIds;
    SCCloudSyncTriggerUserContext *_userContext;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) SCCloudSyncTriggerUserContext *userContext; // @synthesize userContext=_userContext;
@property(readonly, nonatomic) _Bool deleteSharedSnapForAll; // @synthesize deleteSharedSnapForAll=_deleteSharedSnapForAll;
@property(readonly, nonatomic) _Bool needRunImmediately; // @synthesize needRunImmediately=_needRunImmediately;
@property(readonly, copy, nonatomic) NSArray *entryIds; // @synthesize entryIds=_entryIds;
@property(readonly, copy, nonatomic) id <SCGalleryProfile> profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProfile:(id)arg1 entryIds:(id)arg2 needRunImmediately:(_Bool)arg3 deleteSharedSnapForAll:(_Bool)arg4 userContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

