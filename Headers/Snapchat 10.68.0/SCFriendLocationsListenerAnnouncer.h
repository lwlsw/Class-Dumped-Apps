//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFriendLocationsListener-Protocol.h"

@class NSString;

@interface SCFriendLocationsListenerAnnouncer : NSObject <SCFriendLocationsListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCFriendLocationsListener>, std::__1::allocator<__weak id<SCFriendLocationsListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)friendLocationsDataStore:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)friendLocationsDataStoreDidLoad:(id)arg1;
- (void)friendLocationsDataStoreDidUpdateCurrentUserFriendLocation:(id)arg1;
- (void)friendLocationsDidChange:(id)arg1 affectedUserIds:(id)arg2;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
