//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseEventItem.h"

@class NSString;

@interface FVROrderReviewItem : FVRBaseEventItem
{
    _Bool _isSeller;
    _Bool _isReviewedBySeller;
    _Bool _isReviewedByBuyer;
    int _vote;
    NSString *_orderId;
    NSString *_comment;
}

@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) int vote; // @synthesize vote=_vote;
@property(nonatomic) _Bool isReviewedByBuyer; // @synthesize isReviewedByBuyer=_isReviewedByBuyer;
@property(nonatomic) _Bool isReviewedBySeller; // @synthesize isReviewedBySeller=_isReviewedBySeller;
@property(nonatomic) _Bool isSeller; // @synthesize isSeller=_isSeller;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;

@end

