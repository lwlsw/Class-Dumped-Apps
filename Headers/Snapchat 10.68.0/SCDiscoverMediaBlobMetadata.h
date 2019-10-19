//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverMediaBlobMetadata-Protocol.h"

@class NSString, UIColor;

@interface SCDiscoverMediaBlobMetadata : NSObject <SCDiscoverMediaBlobMetadata>
{
    _Bool _linkToLongform;
    NSString *_publisherName;
    NSString *_publisherDisplayName;
    NSString *_publisherUniqueName;
    NSString *_dSnapId;
    NSString *_adSnapId;
    long long _blobMediaType;
    NSString *_editionId;
    long long _caption;
    long long _drawing;
    NSString *_filterInfo;
    NSString *_filterVisual;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    NSString *_remoteUrl;
    struct CGRect _viewport;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) NSString *remoteUrl; // @synthesize remoteUrl=_remoteUrl;
@property(readonly, copy, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(readonly, copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, copy, nonatomic) NSString *filterVisual; // @synthesize filterVisual=_filterVisual;
@property(readonly, copy, nonatomic) NSString *filterInfo; // @synthesize filterInfo=_filterInfo;
@property(readonly, nonatomic) long long drawing; // @synthesize drawing=_drawing;
@property(readonly, nonatomic) long long caption; // @synthesize caption=_caption;
@property(readonly, nonatomic) _Bool linkToLongform; // @synthesize linkToLongform=_linkToLongform;
@property(readonly, nonatomic) struct CGRect viewport; // @synthesize viewport=_viewport;
@property(readonly, copy, nonatomic) NSString *editionId; // @synthesize editionId=_editionId;
@property(readonly, nonatomic) long long blobMediaType; // @synthesize blobMediaType=_blobMediaType;
@property(readonly, copy, nonatomic) NSString *adSnapId; // @synthesize adSnapId=_adSnapId;
@property(readonly, copy, nonatomic) NSString *dSnapId; // @synthesize dSnapId=_dSnapId;
@property(readonly, copy, nonatomic) NSString *publisherUniqueName; // @synthesize publisherUniqueName=_publisherUniqueName;
@property(readonly, copy, nonatomic) NSString *publisherDisplayName; // @synthesize publisherDisplayName=_publisherDisplayName;
@property(readonly, copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setRect:(struct CGRect)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPublisherName:(id)arg1 publisherDisplayName:(id)arg2 publisherUniqueName:(id)arg3 dSnapId:(id)arg4 adSnapId:(id)arg5 blobMediaType:(long long)arg6 editionId:(id)arg7 viewport:(struct CGRect)arg8 linkToLongform:(_Bool)arg9 caption:(long long)arg10 drawing:(long long)arg11 filterInfo:(id)arg12 filterVisual:(id)arg13 primaryColor:(id)arg14 secondaryColor:(id)arg15 remoteUrl:(id)arg16;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
