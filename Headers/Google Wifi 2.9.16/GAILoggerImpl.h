//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAILogger-Protocol.h"

@class NSString;

@interface GAILoggerImpl : NSObject <GAILogger>
{
}

- (unsigned long long)gaLogLevelFromGtmLogLevel:(int)arg1;
@property(nonatomic) unsigned long long logLevel;
- (void)error:(id)arg1;
- (void)warning:(id)arg1;
- (void)verbose:(id)arg1;
- (void)info:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
