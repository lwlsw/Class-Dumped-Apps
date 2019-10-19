//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

#import "AWEIrregularWordProtocol-Protocol.h"

@class AWEDiscoverCategoryRecordModel, NSString;

@interface AWESearchMoreCardModel : AWEBaseApiModel <AWEIrregularWordProtocol>
{
    NSString *_searchWord;
    AWEDiscoverCategoryRecordModel *_wordRecord;
}

+ (id)wordRecordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEDiscoverCategoryRecordModel *wordRecord; // @synthesize wordRecord=_wordRecord;
@property(copy, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
- (void).cxx_destruct;
- (id)getSearchWord;
- (id)getDisplayWord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
