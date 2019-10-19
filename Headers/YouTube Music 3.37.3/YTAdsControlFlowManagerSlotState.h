//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSMutableArray, NSMutableDictionary;
@protocol YTAdLayout, YTAdSlot, YTFulfillmentAdapter, YTLayoutRenderingAdapter, YTSlotAdapter;

@interface YTAdsControlFlowManagerSlotState : NSObject
{
    _Bool _triggerReceptionBlocked;
    _Bool _markedForUnscheduleAfterOutboundAdapterRequests;
    GIMMe *_gimme;
    id <YTAdSlot> _slot;
    id <YTAdLayout> _layout;
    NSMutableDictionary *_registeredSlotEntryTriggerAdapters;
    NSMutableDictionary *_registeredFulfillmentTriggerAdapters;
    NSMutableDictionary *_registeredLayoutExitTriggerAdapters;
    NSMutableDictionary *_registeredExpirationTriggerAdapters;
    NSMutableArray *_deferredTriggers;
    id <YTFulfillmentAdapter> _registeredFulfillmentAdapter;
    id <YTSlotAdapter> _registeredSlotAdapter;
    id <YTLayoutRenderingAdapter> _registeredLayoutRenderingAdapter;
    unsigned long long _slotLifecycleStatus;
    unsigned long long _fulfillmentLifecycleStatus;
}

@property(nonatomic) unsigned long long fulfillmentLifecycleStatus; // @synthesize fulfillmentLifecycleStatus=_fulfillmentLifecycleStatus;
@property(nonatomic) unsigned long long slotLifecycleStatus; // @synthesize slotLifecycleStatus=_slotLifecycleStatus;
@property(nonatomic) _Bool markedForUnscheduleAfterOutboundAdapterRequests; // @synthesize markedForUnscheduleAfterOutboundAdapterRequests=_markedForUnscheduleAfterOutboundAdapterRequests;
@property(nonatomic) _Bool triggerReceptionBlocked; // @synthesize triggerReceptionBlocked=_triggerReceptionBlocked;
@property(retain, nonatomic) id <YTLayoutRenderingAdapter> registeredLayoutRenderingAdapter; // @synthesize registeredLayoutRenderingAdapter=_registeredLayoutRenderingAdapter;
@property(retain, nonatomic) id <YTSlotAdapter> registeredSlotAdapter; // @synthesize registeredSlotAdapter=_registeredSlotAdapter;
@property(retain, nonatomic) id <YTFulfillmentAdapter> registeredFulfillmentAdapter; // @synthesize registeredFulfillmentAdapter=_registeredFulfillmentAdapter;
@property(readonly, nonatomic) NSMutableArray *deferredTriggers; // @synthesize deferredTriggers=_deferredTriggers;
@property(readonly, nonatomic) NSMutableDictionary *registeredExpirationTriggerAdapters; // @synthesize registeredExpirationTriggerAdapters=_registeredExpirationTriggerAdapters;
@property(readonly, nonatomic) NSMutableDictionary *registeredLayoutExitTriggerAdapters; // @synthesize registeredLayoutExitTriggerAdapters=_registeredLayoutExitTriggerAdapters;
@property(readonly, nonatomic) NSMutableDictionary *registeredFulfillmentTriggerAdapters; // @synthesize registeredFulfillmentTriggerAdapters=_registeredFulfillmentTriggerAdapters;
@property(readonly, nonatomic) NSMutableDictionary *registeredSlotEntryTriggerAdapters; // @synthesize registeredSlotEntryTriggerAdapters=_registeredSlotEntryTriggerAdapters;
@property(retain, nonatomic) id <YTAdLayout> layout; // @synthesize layout=_layout;
@property(retain, nonatomic) id <YTAdSlot> slot; // @synthesize slot=_slot;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (_Bool)isLayoutExitRequested;
- (_Bool)isSlotExitRequested;
- (_Bool)isOccupyingSlotType;
- (_Bool)isScheduledForActivation;
- (_Bool)isRendering;
- (_Bool)isActive;
- (_Bool)isFillRequested;
- (id)initWithSlot:(id)arg1;

@end
