//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdStorySnapImpressionTrack-Protocol.h"

@class NSNumber, NSString, SOJUAdAdToLensImpressionTrack, SOJUAdAppInstallImpressionTrack, SOJUAdDeepLinkImpressionTrack, SOJUAdLocalWebpageImpressionTrack, SOJUAdLongformVideoImpressionTrack, SOJUAdRemoteWebpageImpressionTrack, SOJUAdSubscribeImpressionTrack, SOJUAdThreeVImpressionTrack;

@interface SOJUAdStorySnapImpressionTrack : NSObject <SOJUAdStorySnapImpressionTrack>
{
    NSNumber *_snapIndex;
    NSNumber *_swipeUpCount;
    NSString *_skipEvent;
    NSString *_adType;
    SOJUAdThreeVImpressionTrack *_threeV;
    SOJUAdAppInstallImpressionTrack *_appInstall;
    SOJUAdLongformVideoImpressionTrack *_longformVideo;
    SOJUAdRemoteWebpageImpressionTrack *_remoteWebpage;
    SOJUAdLocalWebpageImpressionTrack *_localWebpage;
    SOJUAdDeepLinkImpressionTrack *_deepLink;
    SOJUAdSubscribeImpressionTrack *_subscribe;
    SOJUAdAdToLensImpressionTrack *_adToLens;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUAdAdToLensImpressionTrack *adToLens; // @synthesize adToLens=_adToLens;
@property(readonly, copy, nonatomic) SOJUAdSubscribeImpressionTrack *subscribe; // @synthesize subscribe=_subscribe;
@property(readonly, copy, nonatomic) SOJUAdDeepLinkImpressionTrack *deepLink; // @synthesize deepLink=_deepLink;
@property(readonly, copy, nonatomic) SOJUAdLocalWebpageImpressionTrack *localWebpage; // @synthesize localWebpage=_localWebpage;
@property(readonly, copy, nonatomic) SOJUAdRemoteWebpageImpressionTrack *remoteWebpage; // @synthesize remoteWebpage=_remoteWebpage;
@property(readonly, copy, nonatomic) SOJUAdLongformVideoImpressionTrack *longformVideo; // @synthesize longformVideo=_longformVideo;
@property(readonly, copy, nonatomic) SOJUAdAppInstallImpressionTrack *appInstall; // @synthesize appInstall=_appInstall;
@property(readonly, copy, nonatomic) SOJUAdThreeVImpressionTrack *threeV; // @synthesize threeV=_threeV;
@property(readonly, copy, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(readonly, copy, nonatomic) NSString *skipEvent; // @synthesize skipEvent=_skipEvent;
@property(readonly, copy, nonatomic) NSNumber *swipeUpCount; // @synthesize swipeUpCount=_swipeUpCount;
@property(readonly, copy, nonatomic) NSNumber *snapIndex; // @synthesize snapIndex=_snapIndex;
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
- (id)initWithSnapIndex:(id)arg1 swipeUpCount:(id)arg2 skipEvent:(id)arg3 adType:(id)arg4 threeV:(id)arg5 appInstall:(id)arg6 longformVideo:(id)arg7 remoteWebpage:(id)arg8 localWebpage:(id)arg9 deepLink:(id)arg10 subscribe:(id)arg11 adToLens:(id)arg12;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)adTypeEnum;
- (int)swipeUpCountValue;
- (int)snapIndexValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

