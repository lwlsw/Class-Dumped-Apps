//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSString;

@protocol PDLPersonFieldMetadata <NSCopying, NSCoding, NSObject>
@property(readonly, nonatomic) NSString *encodedProfileId;
@property(readonly, nonatomic) _Bool hasDeviceData;
@property(readonly, nonatomic) _Bool hasCloudData;
@property(readonly, nonatomic) _Bool primary;
@property(readonly, nonatomic) long long category;
@property(readonly, nonatomic) long long containerType;
@property(readonly, nonatomic) NSArray *matchingInfoArray;
@end

