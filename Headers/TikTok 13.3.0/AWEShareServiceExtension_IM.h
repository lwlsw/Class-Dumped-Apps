//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEShareMessage-Protocol.h"
#import "AWEShareViewControllerMessage-Protocol.h"

@class NSString;

@interface AWEShareServiceExtension_IM : NSObject <AWEShareMessage, AWEShareViewControllerMessage>
{
}

- (void)willConfigureShareView:(id)arg1 withContext:(id)arg2;
- (void)didCreateViewController:(id)arg1;
- (void)p_showShareList:(unsigned long long)arg1;
- (void)shareWithType:(long long)arg1 context:(id)arg2 targetType:(unsigned long long)arg3 targetID:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
