//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC14MainAppLibrary16WAPaymentFactory.h"

@interface WAPaymentBRFactory : _TtC14MainAppLibrary16WAPaymentFactory
{
}

- (id)newPaymentViewController;
- (id)newAccountSetupHandlerWithRootViewController:(id)arg1 delegate:(id)arg2 isPaymentsContext:(_Bool)arg3;
- (id)newTransactionHandlerWithDelegate:(id)arg1 rootViewController:(id)arg2 paymentConfiguration:(id)arg3;
@property(nonatomic, readonly) _Bool supportsHandler;
- (id)newQRConfigurationWithAmount_1000:(long long)arg1;
- (id)newConfigurationForCollectRequestTransaction:(id)arg1;
- (id)newConfigurationWithAmount_1000:(long long)arg1 chatSession:(id)arg2 note:(id)arg3 quotedItem:(id)arg4 receiverJID:(id)arg5;
- (id)newConfiguration;

@end

