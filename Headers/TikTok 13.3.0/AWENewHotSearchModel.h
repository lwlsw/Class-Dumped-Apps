//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

#import "AWEIrregularWordProtocol-Protocol.h"
#import "AWERegularWordProtocol-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class AWEHotSearchAdDataModel, AWEURLModel, NSNumber, NSString;

@interface AWENewHotSearchModel : AWEBaseApiModel <AWEIrregularWordProtocol, AWERegularWordProtocol, IGListDiffable>
{
    _Bool _hasTracked;
    NSString *_word;
    unsigned long long _labelType;
    NSString *_updateTime;
    NSNumber *_hotCount;
    NSString *_searchWord;
    NSString *_challengeID;
    NSString *_groupID;
    AWEURLModel *_imageURL;
    AWEHotSearchAdDataModel *_adData;
    long long _rankPosition;
    long long _index;
    NSNumber *_videoCount;
}

+ (id)adDataJSONTransformer;
+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *videoCount; // @synthesize videoCount=_videoCount;
@property(nonatomic) _Bool hasTracked; // @synthesize hasTracked=_hasTracked;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long rankPosition; // @synthesize rankPosition=_rankPosition;
@property(retain, nonatomic) AWEHotSearchAdDataModel *adData; // @synthesize adData=_adData;
@property(retain, nonatomic) AWEURLModel *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
@property(copy, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(retain, nonatomic) NSNumber *hotCount; // @synthesize hotCount=_hotCount;
@property(copy, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned long long labelType; // @synthesize labelType=_labelType;
@property(copy, nonatomic) NSString *word; // @synthesize word=_word;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (double)getTagPadding;
- (long long)getRankPosition;
- (id)getSearchWord;
- (long long)defaultStyle;
- (id)getContentString;
- (id)getDisplayWord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

