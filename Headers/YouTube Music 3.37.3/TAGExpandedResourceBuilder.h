//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TAGExpandedResourceBuilder : NSObject
{
    int _resourceFormatVersion;
    NSString *_version;
    NSMutableArray *_rules;
    NSMutableDictionary *_macros;
}

@property(retain, nonatomic) NSMutableDictionary *macros; // @synthesize macros=_macros;
@property(retain, nonatomic) NSMutableArray *rules; // @synthesize rules=_rules;
@property(nonatomic) int resourceFormatVersion; // @synthesize resourceFormatVersion=_resourceFormatVersion;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)build;
- (void)addMacro:(id)arg1;
- (void)addRule:(id)arg1;
- (id)init;

@end

