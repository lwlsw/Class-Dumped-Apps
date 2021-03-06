//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAHSMMetadata : NSObject
{
    NSString *_ns;
    NSString *_elementName;
    NSString *_language;
    NSString *_locale;
}

+ (id)retrieveMetadataForKey:(id)arg1;
+ (void)storeMetadata:(id)arg1 forKey:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, copy, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
@property(readonly, copy, nonatomic) NSString *ns; // @synthesize ns=_ns;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *languageLocale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNamespace:(id)arg1 elementName:(id)arg2 language:(id)arg3 locale:(id)arg4;

@end

