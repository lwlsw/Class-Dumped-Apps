//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSOInterfaceControllerDelegate-Protocol.h"

@class GAZSSOServiceExtension, JETNetworkStatusManager, JETPersistentStorageManager, NSData, NSMutableDictionary, NSString, SSOIdentity, SSOProfileInterfaceDataSource, SSOService;
@protocol JETUserStateManagerDelegate, JETUserStateProtocol;

@interface JETUserStateManager : NSObject <SSOInterfaceControllerDelegate>
{
    _Bool _notificationsEnabled;
    NSObject<JETUserStateProtocol> *_currentActiveUserState;
    long long _APNSState;
    NSData *_APNSDeviceToken;
    long long _appState;
    SSOProfileInterfaceDataSource *_profileDataSource;
    GAZSSOServiceExtension *_authzenSSOExtension;
    NSMutableDictionary *_userStates;
    NSMutableDictionary *_userStateErrors;
    id <JETUserStateManagerDelegate> _delegate;
    JETPersistentStorageManager *_persistentStorageManager;
    SSOService *_ssoService;
    JETNetworkStatusManager *_networkStatusManager;
}

@property(retain, nonatomic) JETNetworkStatusManager *networkStatusManager; // @synthesize networkStatusManager=_networkStatusManager;
@property(retain, nonatomic) SSOService *ssoService; // @synthesize ssoService=_ssoService;
@property(retain, nonatomic) JETPersistentStorageManager *persistentStorageManager; // @synthesize persistentStorageManager=_persistentStorageManager;
@property(nonatomic) __weak id <JETUserStateManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *userStateErrors; // @synthesize userStateErrors=_userStateErrors;
@property(retain, nonatomic) NSMutableDictionary *userStates; // @synthesize userStates=_userStates;
@property(readonly, nonatomic) GAZSSOServiceExtension *authzenSSOExtension; // @synthesize authzenSSOExtension=_authzenSSOExtension;
@property(readonly, nonatomic) SSOProfileInterfaceDataSource *profileDataSource; // @synthesize profileDataSource=_profileDataSource;
@property(readonly, nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(nonatomic) long long appState; // @synthesize appState=_appState;
@property(retain, nonatomic) NSData *APNSDeviceToken; // @synthesize APNSDeviceToken=_APNSDeviceToken;
@property(nonatomic) long long APNSState; // @synthesize APNSState=_APNSState;
@property(retain, nonatomic) NSObject<JETUserStateProtocol> *currentActiveUserState; // @synthesize currentActiveUserState=_currentActiveUserState;
- (void).cxx_destruct;
- (void)switchToIdentity:(id)arg1;
- (void)accessTokenRefreshFailed:(id)arg1;
- (void)userListDidChange:(id)arg1;
- (_Bool)interfaceControllerShouldRequireSignIn:(id)arg1;
- (_Bool)interfaceControllerShouldDisplayCancelButton:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)markIdentityAsSelected:(id)arg1;
@property(readonly, nonatomic) SSOIdentity *lastSeenIdentity;
- (void)startSwitchAccountWithCallback:(CDUnknownBlockType)arg1;
- (void)startSignInWithCallback:(CDUnknownBlockType)arg1;
- (id)allUserStates;
- (_Bool)isGUNSRegistrationCompleted;
- (_Bool)isSignInCompleteForAllUsers;
- (_Bool)isSignInCompleteForUser:(id)arg1;
- (_Bool)isOperationCompleted:(long long)arg1;
- (void)didFailToRegisterForAPNSWithError:(id)arg1;
- (void)updateWithAPNSDeviceToken:(id)arg1;
- (void)registerUserForGUNS:(id)arg1;
- (void)refreshAccessPointGroupList:(id)arg1;
- (void)startSignIn;
- (void)performStateTransitionsForIdentity:(id)arg1;
- (id)signInErrorToastWithUserID:(id)arg1;
- (id)GUNSErrorToastWithUserID:(id)arg1;
- (void)performStateTransitionsForAllUsers;
- (void)registerApplicationForRemoteNotifications;
- (void)startUserStateManagement;
- (id)manageUser:(id)arg1;
- (id)userStateForIdentity:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 notificationsEnabled:(_Bool)arg2 persistentStorageManager:(id)arg3 networkStatusManager:(id)arg4 leafNodeFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
