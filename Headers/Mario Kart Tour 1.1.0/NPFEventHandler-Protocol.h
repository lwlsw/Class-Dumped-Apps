//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPFBaaSUser, NPFError, NSDictionary;

@protocol NPFEventHandler <NSObject>
- (void)onVirtualCurrencyHasPendingPurchase;
- (void)onVirtualCurrencyPurchaseProcessError:(NPFError *)arg1;
- (void)onVirtualCurrencyPurchaseProcessSuccess:(NSDictionary *)arg1;
- (void)onNintendoAccountAuthError:(NPFError *)arg1;
- (void)onBaaSAuthError:(NPFError *)arg1;
- (void)onBaaSAuthUpdate:(NPFBaaSUser *)arg1;
- (void)onBaaSAuthStart;
@end

