//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;

@protocol ModUserListable <NSObject>
+ (id)createWithData:(NSDictionary *)arg1;
@property(readonly, nonatomic) NSURL *iconURL;
@property(readonly, copy, nonatomic) NSString *detailsText;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *username;
@end

