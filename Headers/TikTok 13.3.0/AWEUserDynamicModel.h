//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEAwemeModel, NSArray, NSNumber;

@interface AWEUserDynamicModel : AWEBaseApiModel
{
    AWEAwemeModel *_aweme;
    NSArray *_commentList;
    NSArray *_likeList;
    NSArray *_itemIDList;
    unsigned long long _userDynamicCellType;
    NSNumber *_likeCount;
    NSNumber *_dynamicTime;
}

+ (id)userDynamicCellTypeJSONTransformer;
+ (id)likeListJSONTransformer;
+ (id)commentListJSONTransformer;
+ (id)awemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *dynamicTime; // @synthesize dynamicTime=_dynamicTime;
@property(retain, nonatomic) NSNumber *likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) unsigned long long userDynamicCellType; // @synthesize userDynamicCellType=_userDynamicCellType;
@property(copy, nonatomic) NSArray *itemIDList; // @synthesize itemIDList=_itemIDList;
@property(copy, nonatomic) NSArray *likeList; // @synthesize likeList=_likeList;
@property(copy, nonatomic) NSArray *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) AWEAwemeModel *aweme; // @synthesize aweme=_aweme;
- (void).cxx_destruct;

@end
