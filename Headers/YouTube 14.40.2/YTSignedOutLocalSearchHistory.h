//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTLocalSearchHistoryProtocol.h"
#import "YTLogoutObserverDelegate.h"

@class GIMMe, NSMutableArray, NSString, YTLogoutObserver;

@interface YTSignedOutLocalSearchHistory : NSObject <YTLogoutObserverDelegate, YTLocalSearchHistoryProtocol>
{
    NSMutableArray *_queries;
    YTLogoutObserver *_logoutObserver;
    id <YTIdentityProvider> _identityProvider;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)clearLocalSearchHistory;
- (void)onLogout;
- (void)userDidSearch:(id)arg1;
- (void)clear;
- (id)queries;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
