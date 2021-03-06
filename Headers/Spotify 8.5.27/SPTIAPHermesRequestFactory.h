//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTIAPRequestFactory.h"

@class SPTHermesController;

@interface SPTIAPHermesRequestFactory : SPTIAPRequestFactory
{
    SPTHermesController *_hermesController;
}

@property(retain, nonatomic) SPTHermesController *hermesController; // @synthesize hermesController=_hermesController;
- (void).cxx_destruct;
- (id)createProductActivationRequestWithReceiptData:(id)arg1;
- (id)createTransactionRequestForPayment:(id)arg1;
- (id)createItunesProductRequestForProductIdentifiers:(id)arg1;
- (id)createSpotifyProductRequest;
- (id)initWithHermesController:(id)arg1 paymentQueue:(id)arg2 applicationVersionString:(id)arg3;

@end

