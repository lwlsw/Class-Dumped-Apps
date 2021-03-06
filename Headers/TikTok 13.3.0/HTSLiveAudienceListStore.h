//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSEventContext, HTSLiveAudienceListApi, IESLiveComponentContext, LiveRoomModel, NSArray, NSDate, RACDisposable;
@protocol HTSLiveAudienceListReactions, IESActionDispatcher, IESLiveEnvironment, IESLiveMonitor, IESLiveSettings, IESLiveTracker, IESLiveURLSchemaHandler, IESLiveUserService;

@interface HTSLiveAudienceListStore : NSObject
{
    id <HTSLiveAudienceListReactions> _reactions;
    LiveRoomModel *_roomModel;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
    NSArray *_listViewModels;
    unsigned long long _selectedIndex;
    HTSLiveAudienceListApi *_audienceListApi;
    id <IESLiveTracker> _tracker;
    id <IESLiveUserService> _userService;
    id <IESActionDispatcher> _dispatcher;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveMonitor> _monitor;
    RACDisposable *_disposable;
    unsigned long long _showTime;
    id <IESLiveSettings> _settings;
    NSDate *_stopTime;
    unsigned long long _stopDuration;
    id <IESLiveURLSchemaHandler> _urlSchemaHandler;
}

@property(retain, nonatomic) id <IESLiveURLSchemaHandler> urlSchemaHandler; // @synthesize urlSchemaHandler=_urlSchemaHandler;
@property(nonatomic) unsigned long long stopDuration; // @synthesize stopDuration=_stopDuration;
@property(retain, nonatomic) NSDate *stopTime; // @synthesize stopTime=_stopTime;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) unsigned long long showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) HTSLiveAudienceListApi *audienceListApi; // @synthesize audienceListApi=_audienceListApi;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *listViewModels; // @synthesize listViewModels=_listViewModels;
@property(retain, nonatomic) IESLiveComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(nonatomic) __weak id <HTSLiveAudienceListReactions> reactions; // @synthesize reactions=_reactions;
- (void).cxx_destruct;
- (void)monitorNetWorkWithService:(id)arg1 errorService:(id)arg2 status:(long long)arg3 extra:(id)arg4;
- (_Bool)isGameStyle;
- (id)createDouyinOnlineRankListModel;
- (id)createNobleRankListModel;
- (id)createXiguaRoomRankListModel;
- (id)createTotalRankListModel;
- (id)createWeekRankListModel;
- (id)createRoomRankListModel;
- (id)createChildViewModels;
- (void)filterDataWithModel:(id)arg1;
- (id)tabNameFromRankType:(long long)arg1;
- (id)tabTypeString;
- (void)didUnfollowUser:(id)arg1 status:(long long)arg2;
- (void)didFollowUser:(id)arg1 status:(long long)arg2;
- (void)didUpdateRoom:(id)arg1;
- (void)switchSelectedIndex:(unsigned long long)arg1;
- (unsigned long long)tabIndexFromRankType:(long long)arg1;
- (void)followOrUnfollowUserFollow:(_Bool)arg1 user:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)followUser:(id)arg1;
- (void)clickNoble;
- (void)sendGift;
- (void)getAudienceListModel;
- (void)trackAudienceListClose;
- (void)trackAudienceListShow;
- (void)setup;
- (void)becomeActiveNotification;
- (void)resignActiveNotification;
- (id)initWithRoom:(id)arg1;
- (id)initWithRoom:(id)arg1 componentContext:(id)arg2;
- (void)dealloc;

@end

