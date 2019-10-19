//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSNumber, NSString;

@interface AWECommentResponseModel : AWEBaseApiModel
{
    _Bool _hasMore;
    NSArray *_commentArray;
    NSNumber *_cursor;
    NSNumber *_total;
    long long _replyStyle;
    NSString *_insertedIDs;
}

+ (id)replyStyleJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)commentArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *insertedIDs; // @synthesize insertedIDs=_insertedIDs;
@property(nonatomic) long long replyStyle; // @synthesize replyStyle=_replyStyle;
@property(retain, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSArray *commentArray; // @synthesize commentArray=_commentArray;
- (void).cxx_destruct;

@end
