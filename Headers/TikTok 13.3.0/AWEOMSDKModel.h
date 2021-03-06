//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface AWEOMSDKModel : MTLModel <MTLJSONSerializing>
{
    NSString *_vastURL;
    long long _vastWrapperCount;
    unsigned long long _adType;
    NSString *_vastContent;
    NSArray *_adVerifications;
}

+ (id)adTypeJSONTransformer;
+ (id)adVerificationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *adVerifications; // @synthesize adVerifications=_adVerifications;
@property(copy, nonatomic) NSString *vastContent; // @synthesize vastContent=_vastContent;
@property(nonatomic) unsigned long long adType; // @synthesize adType=_adType;
@property(nonatomic) long long vastWrapperCount; // @synthesize vastWrapperCount=_vastWrapperCount;
@property(copy, nonatomic) NSString *vastURL; // @synthesize vastURL=_vastURL;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

