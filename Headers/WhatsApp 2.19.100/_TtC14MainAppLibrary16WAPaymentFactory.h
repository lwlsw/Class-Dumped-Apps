//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAPaymentHelper;

@interface _TtC14MainAppLibrary16WAPaymentFactory : NSObject
{
    // Error parsing type: , name: paymentManager
    // Error parsing type: , name: chatStorage
    // Error parsing type: , name: helper
    // Error parsing type: , name: paymentSettingsData.storage
}

- (void).cxx_destruct;
- (id)init;
- (id)newAccountSetupHandlerWithRootViewController:(id)arg1 delegate:(id)arg2 isPaymentsContext:(_Bool)arg3;
- (id)newTransactionHandlerWithDelegate:(id)arg1 rootViewController:(id)arg2 paymentConfiguration:(id)arg3;
@property(nonatomic, readonly) _Bool supportsHandler;
- (id)newPaymentViewController;
- (id)newCoordinatorWithViewController:(id)arg1 delegate:(id)arg2;
- (id)newQRConfigurationWithAmount_1000:(long long)arg1;
- (id)newConfigurationForCollectRequestTransaction:(id)arg1;
- (id)newConfigurationWithAmount_1000:(long long)arg1 chatSession:(id)arg2 note:(id)arg3 quotedItem:(id)arg4 receiverJID:(id)arg5;
- (id)newConfiguration;
- (id)initWithPaymentManager:(id)arg1 chatStorage:(id)arg2;
@property(nonatomic, readonly) WAPaymentHelper *helper; // @synthesize helper;

@end

