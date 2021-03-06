//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEIMEmoticonInfoModelProtocol-Protocol.h"

@class NSNumber, NSString, NSURL;

@interface AWEIMEmoticonInfoModel : NSObject <AWEIMEmoticonInfoModelProtocol>
{
    long long _themeStyle;
    NSNumber *_identifier;
    NSNumber *_version;
    NSString *_displayName;
    NSURL *_displayIconURL;
    NSString *_remoteURL;
}

@property(copy, nonatomic) NSString *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(copy, nonatomic) NSURL *displayIconURL; // @synthesize displayIconURL=_displayIconURL;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long themeStyle; // @synthesize themeStyle=_themeStyle;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

