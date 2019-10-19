//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCAdMediaImage;

@interface SCAdSnapAppInstall : NSObject <NSCopying, NSCoding>
{
    NSString *_appId;
    NSString *_appTitle;
    SCAdMediaImage *_icon;
}

@property(readonly, copy, nonatomic) SCAdMediaImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *appTitle; // @synthesize appTitle=_appTitle;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAppId:(id)arg1 appTitle:(id)arg2 icon:(id)arg3;

@end
