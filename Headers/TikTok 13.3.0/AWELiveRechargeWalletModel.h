//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWELiveRechargeMyWalletModel, NSArray, NSString;

@interface AWELiveRechargeWalletModel : AWEBaseApiModel
{
    AWELiveRechargeMyWalletModel *_wallet;
    NSArray *_diamondList;
    NSString *_payRecordURL;
    NSString *_honerLevelURL;
    NSString *_agreementURL;
}

+ (id)diamondListJSONTransformer;
+ (id)walletJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *agreementURL; // @synthesize agreementURL=_agreementURL;
@property(copy, nonatomic) NSString *honerLevelURL; // @synthesize honerLevelURL=_honerLevelURL;
@property(copy, nonatomic) NSString *payRecordURL; // @synthesize payRecordURL=_payRecordURL;
@property(retain, nonatomic) NSArray *diamondList; // @synthesize diamondList=_diamondList;
@property(retain, nonatomic) AWELiveRechargeMyWalletModel *wallet; // @synthesize wallet=_wallet;
- (void).cxx_destruct;

@end

