//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTFetcherConfig-Protocol.h"
#import "YTSSOConfig-Protocol.h"

@protocol YTIdentityConfig <YTFetcherConfig, YTSSOConfig>

@optional
@property(readonly, nonatomic) _Bool requiredSignInEnabled;
@property(nonatomic) int safeSearch;
- (_Bool)removeManageAccounts;
- (_Bool)disableSignOut;
- (_Bool)removeAddAccount;
@end

