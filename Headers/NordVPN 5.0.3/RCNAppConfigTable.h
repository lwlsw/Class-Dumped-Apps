//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class NSMutableArray, NSString;

@interface RCNAppConfigTable : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) NSMutableArray *enabledFeatureKeysArray; // @dynamic enabledFeatureKeysArray;
@property(readonly, nonatomic) unsigned long long enabledFeatureKeysArray_Count; // @dynamic enabledFeatureKeysArray_Count;
@property(retain, nonatomic) NSMutableArray *experimentPayloadArray; // @dynamic experimentPayloadArray;
@property(readonly, nonatomic) unsigned long long experimentPayloadArray_Count; // @dynamic experimentPayloadArray_Count;
@property(nonatomic) _Bool hasAppName; // @dynamic hasAppName;
@property(retain, nonatomic) NSMutableArray *namespaceConfigArray; // @dynamic namespaceConfigArray;
@property(readonly, nonatomic) unsigned long long namespaceConfigArray_Count; // @dynamic namespaceConfigArray_Count;

@end
