//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSNumber;

@interface AWEStudioFriendsModel : AWEBaseApiModel
{
    _Bool _hasMore;
    NSNumber *_cursor;
    NSArray *_userList;
    NSArray *_shieldUserList;
}

+ (id)hasMoreJSONTransformer;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSArray *shieldUserList; // @synthesize shieldUserList=_shieldUserList;
@property(copy, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;

@end
