//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEGuideSearchWordModel : AWEBaseApiModel
{
    _Bool _hasShown;
    NSString *_type;
    NSString *_word;
    NSString *_itemID;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool hasShown; // @synthesize hasShown=_hasShown;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSString *word; // @synthesize word=_word;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
