//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GSCSSOServiceContainer.h"
#import "GSCSSOServiceProvider.h"

@class NSString;

@interface GSCSSOServiceProviderImpl : NSObject <GSCSSOServiceProvider, GSCSSOServiceContainer>
{
    id <SSOService> _ssoService;
}

- (void).cxx_destruct;
- (void)setSSOService:(id)arg1;
@property(readonly, nonatomic) id <SSOService> ssoService;
- (id)initWithOptions:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

