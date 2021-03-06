//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWELiveRoomFactoryProtocol-Protocol.h"

@class HTSLiveFeedDataApi, NSString, UIViewController;
@protocol IESLiveSettings;

@interface AWELiveRoomFactory : NSObject <AWELiveRoomFactoryProtocol>
{
    _Bool _isEnteringLive;
    id <IESLiveSettings> _liveSettings;
    HTSLiveFeedDataApi *_feedApi;
}

+ (id)sharedInstance;
@property(retain, nonatomic) HTSLiveFeedDataApi *feedApi; // @synthesize feedApi=_feedApi;
@property(nonatomic) _Bool isEnteringLive; // @synthesize isEnteringLive=_isEnteringLive;
@property(retain, nonatomic) id <IESLiveSettings> liveSettings; // @synthesize liveSettings=_liveSettings;
- (void).cxx_destruct;
- (id)_getFollowInnerFeedURL;
- (id)_drawLiveRequestFromString:(id)arg1 enterMethod:(id)arg2;
- (id)_getInnerFeedURL;
- (_Bool)_enableDrawLive:(id)arg1 enterMethod:(id)arg2;
- (void)_configLiveSettings:(id)arg1;
- (void)directEnterLiveFrom:(id)arg1 roomLog:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enterLiveOwners:(id)arg1 defaultOwner:(id)arg2 delegate:(id)arg3 roomLog:(id)arg4 enterFrom:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)enterLiveForFollow:(id)arg1 roomLog:(id)arg2 enterFrom:(id)arg3;
- (_Bool)transferToLiveRoom:(id)arg1;
- (void)pauseCurrentLive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak UIViewController *sourceVC;
@property(readonly) Class superclass;

@end

