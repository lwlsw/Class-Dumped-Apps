//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTLRAccesspoints_UserPreferences, GTMSessionFetcherService, JETContactsClient, JETFactoryResettingGroup, JETNetworkStatusManager, JETNotificationsClient, JETPersistentStorageManager, JETUsageWindow, JETUserUpdateGroupOperationQueue, NSArray, NSDictionary, NSMutableDictionary, NSString, SSOIdentity, SSOService;
@protocol JETConsentLoggingService, JETHalfcourtClient;

@interface JETUserState : NSObject
{
    _Bool _showMACAddressInNetworkDetails;
    _Bool _signInCompleted;
    _Bool _usingCachedGroupList;
    int _maxAllowedDevices;
    NSArray *_availableGroups;
    id <JETConsentLoggingService> _consentLoggingService;
    JETContactsClient *_contactsClient;
    JETFactoryResettingGroup *_factoryResettingGroup;
    long long _groupListRefreshState;
    long long _GUNSRegistrationState;
    id <JETHalfcourtClient> _halfcourtClient;
    GTMSessionFetcherService *_helpKitFetcherService;
    SSOIdentity *_identity;
    NSDictionary *_latestMeshTestResults;
    JETNotificationsClient *_notificationsClient;
    NSString *_selectedAccessPointGroupID;
    JETUserUpdateGroupOperationQueue *_updateOperationQueue;
    JETUsageWindow *_usageWindow;
    GTLRAccesspoints_UserPreferences *_userPreferences;
    double _lastGroupListUpdateTime;
    NSMutableDictionary *_insightsDataCaches;
    NSMutableDictionary *_groupStatusCaches;
    JETNetworkStatusManager *_networkStatusManager;
    JETPersistentStorageManager *_persistentStorageManager;
    JETUserUpdateGroupOperationQueue *_updateGroupOperationQueue;
    SSOService *_ssoService;
}

@property(nonatomic) int maxAllowedDevices; // @synthesize maxAllowedDevices=_maxAllowedDevices;
@property(readonly, nonatomic) SSOService *ssoService; // @synthesize ssoService=_ssoService;
@property(retain, nonatomic) JETUserUpdateGroupOperationQueue *updateGroupOperationQueue; // @synthesize updateGroupOperationQueue=_updateGroupOperationQueue;
@property(retain, nonatomic) JETPersistentStorageManager *persistentStorageManager; // @synthesize persistentStorageManager=_persistentStorageManager;
@property(retain, nonatomic) JETNetworkStatusManager *networkStatusManager; // @synthesize networkStatusManager=_networkStatusManager;
@property(retain, nonatomic) NSMutableDictionary *groupStatusCaches; // @synthesize groupStatusCaches=_groupStatusCaches;
@property(retain, nonatomic) NSMutableDictionary *insightsDataCaches; // @synthesize insightsDataCaches=_insightsDataCaches;
@property(nonatomic) double lastGroupListUpdateTime; // @synthesize lastGroupListUpdateTime=_lastGroupListUpdateTime;
@property(nonatomic) _Bool usingCachedGroupList; // @synthesize usingCachedGroupList=_usingCachedGroupList;
@property(retain, nonatomic) GTLRAccesspoints_UserPreferences *userPreferences; // @synthesize userPreferences=_userPreferences;
@property(retain, nonatomic) JETUsageWindow *usageWindow; // @synthesize usageWindow=_usageWindow;
@property(nonatomic) _Bool signInCompleted; // @synthesize signInCompleted=_signInCompleted;
@property(retain, nonatomic) NSString *selectedAccessPointGroupID; // @synthesize selectedAccessPointGroupID=_selectedAccessPointGroupID;
@property(retain, nonatomic) JETNotificationsClient *notificationsClient; // @synthesize notificationsClient=_notificationsClient;
@property(retain, nonatomic) NSDictionary *latestMeshTestResults; // @synthesize latestMeshTestResults=_latestMeshTestResults;
@property(retain, nonatomic) SSOIdentity *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) GTMSessionFetcherService *helpKitFetcherService; // @synthesize helpKitFetcherService=_helpKitFetcherService;
@property(retain, nonatomic) id <JETHalfcourtClient> halfcourtClient; // @synthesize halfcourtClient=_halfcourtClient;
@property(nonatomic) long long GUNSRegistrationState; // @synthesize GUNSRegistrationState=_GUNSRegistrationState;
@property(nonatomic) long long groupListRefreshState; // @synthesize groupListRefreshState=_groupListRefreshState;
@property(retain, nonatomic) JETFactoryResettingGroup *factoryResettingGroup; // @synthesize factoryResettingGroup=_factoryResettingGroup;
@property(retain, nonatomic) JETContactsClient *contactsClient; // @synthesize contactsClient=_contactsClient;
@property(readonly, nonatomic) id <JETConsentLoggingService> consentLoggingService; // @synthesize consentLoggingService=_consentLoggingService;
@property(retain, nonatomic) NSArray *availableGroups; // @synthesize availableGroups=_availableGroups;
- (void).cxx_destruct;
@property(nonatomic) _Bool showMACAddressInNetworkDetails; // @synthesize showMACAddressInNetworkDetails=_showMACAddressInNetworkDetails;
- (_Bool)isSingleOptInForEmails;
- (_Bool)isDoubleOptInForEmails;
- (long long)offersEmailNotificationOptInStatus;
- (long long)updatesEmailNotificationOptInStatus;
- (void)internetAvailabilityDidChange:(id)arg1;
- (void)refreshUserPreferencesWithCompletion:(CDUnknownBlockType)arg1;
- (id)findGroupWithIdentifier:(id)arg1;
- (id)findGroupContainingAccessPointWithIdentifier:(id)arg1;
- (id)findGroupForAPIGroup:(id)arg1;
- (void)selectAccessPointGroupWithID:(id)arg1;
- (void)refreshGroup:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)loadCachedGroupListFromStorageManager:(id)arg1;
- (void)maintainCurrentGroupAcrossUpgrade;
- (void)clearCachesForGroupsNotInSet:(id)arg1;
- (void)updateGroupListWithGroups:(id)arg1 andRefreshGroup:(id)arg2;
- (void)forceRefreshGroupListForGroup:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)forceRefreshGroupListWithCallback:(CDUnknownBlockType)arg1;
- (void)refreshGroupListWithCallback:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) JETUserUpdateGroupOperationQueue *updateOperationQueue; // @synthesize updateOperationQueue=_updateOperationQueue;
- (id)groupStatusCacheForGroup:(id)arg1;
- (id)insightsDataCacheForGroup:(id)arg1;
- (void)invalidateHalfcourtState;
- (id)authorizerForScopes:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithIdentity:(id)arg1 ssoService:(id)arg2 networkStatusManager:(id)arg3 persistentStorageManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

