//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class AWEURLModel, NSString;

@interface AWEIMSharePoiCouponMessage : AWEIMMessage
{
    NSString *_poiId;
    NSString *_poiName;
    long long _activityId;
    long long _couponId;
    NSString *_couponDescription;
    AWEURLModel *_merchantIconUrl;
}

@property(retain, nonatomic) AWEURLModel *merchantIconUrl; // @synthesize merchantIconUrl=_merchantIconUrl;
@property(retain, nonatomic) NSString *couponDescription; // @synthesize couponDescription=_couponDescription;
@property(nonatomic) long long couponId; // @synthesize couponId=_couponId;
@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(retain, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getContentDict;
- (id)initWithContentDict:(id)arg1;

@end
