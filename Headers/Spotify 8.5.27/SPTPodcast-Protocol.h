//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTShow-Protocol.h"

@class NSArray;

@protocol SPTPodcast <NSObject, SPTShow>
@property(readonly, nonatomic) NSArray *episodes;
@property(readonly, nonatomic) unsigned long long unrangedLength;
@property(readonly, nonatomic) long long consumptionOrder;
@property(readonly, nonatomic) long long numberOfFollowers;
@end

