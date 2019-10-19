//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveRoomCollectionDelegate-Protocol.h"
#import "IESLiveRoomScrollContainerService-Protocol.h"

@class NSMutableArray, NSNumber, NSString;
@protocol HTSLiveRoomCollectionDataObserver, IESLiveHTTPClient;

@interface IESLiveRoomScrollContainerStore : NSObject <HTSLiveRoomCollectionDelegate, IESLiveRoomScrollContainerService>
{
    _Bool _hasMoreRoom;
    _Bool _didShowGuide;
    _Bool _didDrawLive;
    id <HTSLiveRoomCollectionDataObserver> dataObserver;
    id <IESLiveHTTPClient> _client;
    NSMutableArray *_roomList;
    NSNumber *_maxTime;
    NSString *_requestFrom;
    NSString *_innerFeedURL;
    long long _currentIndex;
    long long _loadMoreFirstIndex;
    NSString *_frontUnreadExtra;
    NSString *_lastUnreadExtra;
}

@property(retain, nonatomic) NSString *lastUnreadExtra; // @synthesize lastUnreadExtra=_lastUnreadExtra;
@property(retain, nonatomic) NSString *frontUnreadExtra; // @synthesize frontUnreadExtra=_frontUnreadExtra;
@property(nonatomic) long long loadMoreFirstIndex; // @synthesize loadMoreFirstIndex=_loadMoreFirstIndex;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool didDrawLive; // @synthesize didDrawLive=_didDrawLive;
@property(nonatomic) _Bool didShowGuide; // @synthesize didShowGuide=_didShowGuide;
@property(retain, nonatomic) NSString *innerFeedURL; // @synthesize innerFeedURL=_innerFeedURL;
@property(retain, nonatomic) NSString *requestFrom; // @synthesize requestFrom=_requestFrom;
@property(retain, nonatomic) NSNumber *maxTime; // @synthesize maxTime=_maxTime;
@property(retain, nonatomic) NSMutableArray *roomList; // @synthesize roomList=_roomList;
@property(retain, nonatomic) id <IESLiveHTTPClient> client; // @synthesize client=_client;
@property(nonatomic) _Bool hasMoreRoom; // @synthesize hasMoreRoom=_hasMoreRoom;
@property(nonatomic) __weak id <HTSLiveRoomCollectionDataObserver> dataObserver; // @synthesize dataObserver;
- (void).cxx_destruct;
- (void)_clearData;
- (void)_postUnreadRoomList;
- (id)_addRoomList:(id)arg1;
- (id)_getParams;
- (void)_setLiveInnerFeedURL;
- (void)_loadMore:(CDUnknownBlockType)arg1;
- (void)triggerAlreadySwipeRoom;
- (_Bool)needShowDrawGuide;
- (void)changeToIndex:(unsigned long long)arg1;
- (void)didCloseRoom:(id)arg1;
- (void)loadMore;
- (_Bool)hasMore;
- (_Bool)canLoadMore;
- (void)setOriginRoom:(id)arg1 enterFrom:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
