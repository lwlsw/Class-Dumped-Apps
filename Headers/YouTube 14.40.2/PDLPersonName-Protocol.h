//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDLPersonField.h"

@class NSString;

@protocol PDLPersonName <PDLPersonField>
@property(readonly, nonatomic) id <PDLPersonStructuredName> structuredYomiName;
@property(readonly, nonatomic) _Bool hasStructuredYomiName;
@property(readonly, nonatomic) id <PDLPersonStructuredName> structuredDisplayName;
@property(readonly, nonatomic) _Bool hasStructuredDisplayName;
@property(readonly, nonatomic) NSString *displayName;
@end
