//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseDataObject.h"

@class FVRCustomOfferItem, NSDate, NSMutableArray, NSNumber, NSString, NSURL;

@interface FVRConversationItem : FVRBaseDataObject
{
    _Bool _isSpammer;
    _Bool _isContactOnline;
    _Bool _allowToContact;
    int _totalMessagesCount;
    NSURL *_myProfileImageUrl;
    NSURL *_contactImageUrl;
    NSString *_myName;
    NSString *_contactName;
    NSNumber *_contactId;
    NSMutableArray *_messages;
    NSString *_sellerCountry;
    NSDate *_sellerLastActive;
    NSNumber *_sellerLevel;
    NSNumber *_sellerUtcOffset;
    FVRCustomOfferItem *_lastCustomOffer;
}

+ (id)sellerLastActiveStringWithSellerLastActivDate:(id)arg1 isSellerOnline:(_Bool)arg2;
+ (id)sellerLocalTimeStringFromSellerUTCOffset:(id)arg1 dateFormat:(id)arg2;
@property(retain, nonatomic) FVRCustomOfferItem *lastCustomOffer; // @synthesize lastCustomOffer=_lastCustomOffer;
@property(retain, nonatomic) NSNumber *sellerUtcOffset; // @synthesize sellerUtcOffset=_sellerUtcOffset;
@property(retain, nonatomic) NSNumber *sellerLevel; // @synthesize sellerLevel=_sellerLevel;
@property(retain, nonatomic) NSDate *sellerLastActive; // @synthesize sellerLastActive=_sellerLastActive;
@property(retain, nonatomic) NSString *sellerCountry; // @synthesize sellerCountry=_sellerCountry;
@property(nonatomic) _Bool allowToContact; // @synthesize allowToContact=_allowToContact;
@property(nonatomic) _Bool isContactOnline; // @synthesize isContactOnline=_isContactOnline;
@property(nonatomic) _Bool isSpammer; // @synthesize isSpammer=_isSpammer;
@property(nonatomic) int totalMessagesCount; // @synthesize totalMessagesCount=_totalMessagesCount;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSNumber *contactId; // @synthesize contactId=_contactId;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) NSString *myName; // @synthesize myName=_myName;
@property(retain, nonatomic) NSURL *contactImageUrl; // @synthesize contactImageUrl=_contactImageUrl;
@property(retain, nonatomic) NSURL *myProfileImageUrl; // @synthesize myProfileImageUrl=_myProfileImageUrl;
- (void).cxx_destruct;
- (_Bool)isLastCustomOfferActive;
- (id)selerLevelImage;
- (id)initWithElement:(id)arg1;

@end
