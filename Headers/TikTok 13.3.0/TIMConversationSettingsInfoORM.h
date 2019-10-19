//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TIMBaseORM.h"

#import "TIMConversationSettingsInfoModelProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface TIMConversationSettingsInfoORM : TIMBaseORM <TIMConversationSettingsInfoModelProtocol>
{
    _Bool _shouldStickOnTop;
    _Bool _muted;
    _Bool _isFavorited;
    NSString *_belongingConversationIdentifier;
    long long _infoVersion;
    NSString *_ext;
}

+ (const struct WCTProperty *)ext;
+ (const struct WCTProperty *)muted;
+ (const struct WCTProperty *)isFavorited;
+ (const struct WCTProperty *)shouldStickOnTop;
+ (const struct WCTProperty *)infoVersion;
+ (const struct WCTProperty *)belongingConversationIdentifier;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(nonatomic) _Bool isFavorited; // @synthesize isFavorited=_isFavorited;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool shouldStickOnTop; // @synthesize shouldStickOnTop=_shouldStickOnTop;
@property(nonatomic) long long infoVersion; // @synthesize infoVersion=_infoVersion;
@property(retain, nonatomic) NSString *belongingConversationIdentifier; // @synthesize belongingConversationIdentifier=_belongingConversationIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
