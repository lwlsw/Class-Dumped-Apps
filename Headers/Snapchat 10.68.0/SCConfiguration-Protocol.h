//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, SCNConfigConfigurationKey;

@protocol SCConfiguration <NSObject>
- (NSString *)stringValueForKey:(SCNConfigConfigurationKey *)arg1;
- (NSNumber *)floatValueForKey:(SCNConfigConfigurationKey *)arg1;
- (NSNumber *)intValueForKey:(SCNConfigConfigurationKey *)arg1;
- (NSNumber *)boolValueForKey:(SCNConfigConfigurationKey *)arg1;
- (long long)systemType;
@end

