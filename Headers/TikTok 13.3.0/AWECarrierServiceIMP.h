//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWECarrierService-Protocol.h"

@class NSString;

@interface AWECarrierServiceIMP : HTSService <AWECarrierService>
{
}

+ (void)load;
- (void)requestTokenWithCarrier:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSecurityPhoneNumber:(long long)arg1 enterMethod:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)availabeCarrierService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
