//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyFriendScoreProvider-Protocol.h"

@class SCLazy, SCSessionRequestManager;

@interface SCLegacyFriendScoreProviderAdaptor : NSObject <SCLegacyFriendScoreProvider>
{
    SCLazy *_friends;
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (void)fetchScoreForFriend:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithFriends:(id)arg1 sessionRequestManager:(id)arg2;

@end

