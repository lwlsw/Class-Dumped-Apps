//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

#import "YTSubscriptionServiceObserver-Protocol.h"

@class NSString, YTSubscribeSwitchController;

@interface YTBackstageSubscribeBarCellController : YTInnerTubeCellController <YTSubscriptionServiceObserver>
{
    YTSubscribeSwitchController *_subscribeSwitchController;
}

- (void).cxx_destruct;
- (_Bool)shouldShowSubscribeButton;
- (void)subscriptionRemovedWithChannelID:(id)arg1 response:(id)arg2;
- (void)subscriptionAddedWithChannelID:(id)arg1 response:(id)arg2;
- (void)cellWillBecomeVisibleWithVisibilityEventType:(int)arg1;
- (void)setCell:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

