//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentManager.h"

@class WAPaymentIDFactory, _TtC14MainAppLibrary28WAPaymentIDConsumerRequester;

@interface WAPaymentIDManager : WAPaymentManager
{
    WAPaymentIDFactory *_idFactory;
}

- (void).cxx_destruct;
- (id)walletProviderMatchingProviderId:(id)arg1;
- (void)updateWalletProviders:(id)arg1;
- (id)walletProviderKVSKeyWithProviderId:(id)arg1;
- (id)idAccountWithCredentialId:(id)arg1;
- (id)idAccounts;
- (id)defaultIDPaymentAccount;
- (id)factory;
- (void)handleBalanceNotificationWithIdentifier:(id)arg1 balanceStanza:(id)arg2;
- (void)processIncomingPayNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasPaymentAccount;
- (id)createPaymentRequester;
@property(readonly, nonatomic) _TtC14MainAppLibrary28WAPaymentIDConsumerRequester *idRequester;

@end

