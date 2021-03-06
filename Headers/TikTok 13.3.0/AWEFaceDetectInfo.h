//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GYModelObject.h"

@class NSString;

@interface AWEFaceDetectInfo : GYModelObject
{
    NSString *_assetLocalIdentifier;
    NSString *_faceDetectCacheKey;
    long long _faceCount;
}

+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)tableName;
+ (id)dbName;
@property(nonatomic) long long faceCount; // @synthesize faceCount=_faceCount;
@property(copy, nonatomic) NSString *faceDetectCacheKey; // @synthesize faceDetectCacheKey=_faceDetectCacheKey;
@property(copy, nonatomic) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
- (void).cxx_destruct;

@end

