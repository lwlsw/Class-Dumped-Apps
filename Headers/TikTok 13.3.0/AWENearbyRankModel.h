//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "AWENearbyInsertCardProtocol-Protocol.h"
#import "MTLJSONSerializing-Protocol.h"

@class AWEURLModel, NSString;

@interface AWENearbyRankModel : MTLModel <MTLJSONSerializing, AWENearbyInsertCardProtocol>
{
    NSString *_desc;
    NSString *_title;
    NSString *_schema;
    NSString *_classCode;
    NSString *_cityCode;
    NSString *_subClassName;
    long long _indexToInsert;
    AWEURLModel *_coverUrl;
}

+ (id)coverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEURLModel *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) long long indexToInsert; // @synthesize indexToInsert=_indexToInsert;
@property(copy, nonatomic) NSString *subClassName; // @synthesize subClassName=_subClassName;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *classCode; // @synthesize classCode=_classCode;
@property(copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

