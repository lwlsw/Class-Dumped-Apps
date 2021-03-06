//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRLeanCustomOfferItem.h"

@class FVRSearchUserItem, NSDate, NSNumber, NSString;

@interface FVRCustomOfferItem : FVRLeanCustomOfferItem
{
    _Bool _isFromSocket;
    NSString *_parentOrderId;
    NSString *_durationUnit;
    NSString *_relatedGigCategoryId;
    NSString *_relatedGigCategoryName;
    NSString *_relatedGigSubcategoryId;
    NSString *_relatedGigSubcategoryName;
    FVRSearchUserItem *_seller;
    NSDate *_createdAt;
    NSNumber *_gigRating;
    NSString *_orderId;
}

@property(nonatomic) _Bool isFromSocket; // @synthesize isFromSocket=_isFromSocket;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(readonly, nonatomic) NSNumber *gigRating; // @synthesize gigRating=_gigRating;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) FVRSearchUserItem *seller; // @synthesize seller=_seller;
@property(copy, nonatomic) NSString *relatedGigSubcategoryName; // @synthesize relatedGigSubcategoryName=_relatedGigSubcategoryName;
@property(copy, nonatomic) NSString *relatedGigSubcategoryId; // @synthesize relatedGigSubcategoryId=_relatedGigSubcategoryId;
@property(copy, nonatomic) NSString *relatedGigCategoryName; // @synthesize relatedGigCategoryName=_relatedGigCategoryName;
@property(copy, nonatomic) NSString *relatedGigCategoryId; // @synthesize relatedGigCategoryId=_relatedGigCategoryId;
@property(copy, nonatomic) NSString *durationUnit; // @synthesize durationUnit=_durationUnit;
@property(copy, nonatomic) NSString *parentOrderId; // @synthesize parentOrderId=_parentOrderId;
- (void).cxx_destruct;
- (id)initWithElement:(id)arg1;

@end

