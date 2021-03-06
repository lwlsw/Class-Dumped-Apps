//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensPreferences-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, SCFideliusTempDeviceUserInfo, SOJULoginResponse, UIImage;

@interface SCPreferences : NSObject <SCLensPreferences, SCUserSessionScoped>
{
}

- (id)observe:(id)arg1 callbackQueue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (void)synchronize;
- (void)performChanges:(CDUnknownBlockType)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeysInNamespace:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)invalidate;
- (id)initWithFilePath:(id)arg1;
- (id)_init;
@property(retain, nonatomic) SOJULoginResponse *registrationResponse;
- (void)setFinishedRegistrationFriendFind:(_Bool)arg1;
- (_Bool)finishedRegistrationFriendFind;
- (void)setShouldEnforceContactSync:(_Bool)arg1;
- (_Bool)shouldEnforceContactSync;
- (void)setShouldEnforcePhoneVerify:(_Bool)arg1;
- (_Bool)shouldEnforcePhoneVerify;
@property(nonatomic) _Bool isRegistrationUnvalidated;
@property(nonatomic) _Bool shouldResumePhoneVerify;
@property(nonatomic) _Bool hasPressedEnableBitmojiKeyboard;
@property(retain, nonatomic) NSNumber *votingCardEnabled;
- (void)clearRecentSearchedFriends;
- (void)addSearchedFriend:(id)arg1;
@property(copy, nonatomic) NSArray *recentSearchedFriends;
@property(copy, nonatomic) NSString *lastFullyWatchedSearchStoryId;
@property(copy, nonatomic) NSString *birthdayCardTimeStamp;
@property(nonatomic) unsigned long long birthdayCardSeenTimes;
@property(copy, nonatomic) NSString *searchVersionNumber;
@property(nonatomic) _Bool hasShownAnonymousLoggingDialog;
@property(copy, nonatomic) NSString *giphyApiKey;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (unsigned long long)unsignedIntegerForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
@property(nonatomic) _Bool oneTapLoginUseLogInAs;
@property(nonatomic) _Bool enableOneTapLogin;
@property(retain, nonatomic) NSNumber *authStudySeed67;
@property(retain, nonatomic) NSNumber *authFlowExperimentGroup;
@property(nonatomic) long long oneTapLoginTokenExpiry;
@property(retain, nonatomic) NSString *oneTapLoginBitmojiSelfieId;
@property(retain, nonatomic) NSString *oneTapLoginBitmojiAvatarId;
@property(retain, nonatomic) NSString *oneTapLoginUsername;
@property(retain, nonatomic) NSString *oneTapLoginUserId;
@property(retain, nonatomic) UIImage *oneTapLoginBitmojiAvatar;
@property(retain, nonatomic) NSString *badgingType;
@property(retain, nonatomic) NSNumber *badgingEndIndex;
@property(retain, nonatomic) NSNumber *badgingStartIndex;
@property(retain, nonatomic) NSDate *lastDisplayUsernameChangeTime;
@property(retain, nonatomic) NSString *displayUsername;
@property(copy, nonatomic) NSSet *viewedSuggestionsSnapchatterIds;
@property(nonatomic) unsigned long long friendRequestTipsTriggeredTimes;
@property(nonatomic) unsigned long long friendSuggestionTipsTriggeredTimes;
@property(retain, nonatomic) NSDate *lastFriendSuggestionTipsOnCameraTriggerDate;
@property(retain, nonatomic) NSDate *lastFriendRequestTipsOnCameraTriggerDate;
@property(copy, nonatomic) NSDate *lastResurrectedFriendsTakeoverDisplayDate;
@property(copy, nonatomic) NSSet *friensTakeoverSeenSnapchatterIds;
@property(copy, nonatomic) NSDate *lastFriendsTakeoverEnterFriendsFeedDate;
@property(copy, nonatomic) NSDate *lastFriendsTakeoverStartDate;
@property(copy, nonatomic) NSString *userEmail;
@property(copy, nonatomic) NSString *lagunaId;
@property(copy, nonatomic) NSString *username;
@property(copy, nonatomic) NSString *userId;
- (id)_newAuthFlowStatusKeyWithAppVersion:(id)arg1;
- (void)setNewAuthFlowActive:(_Bool)arg1 withAppVersion:(id)arg2;
- (_Bool)isNewAuthFlowActiveWithAppVersion:(id)arg1;
@property _Bool isShowingLoadingInterstitial;
@property(retain, nonatomic) NSString *lastLoginUsername;
@property(retain, nonatomic) SCFideliusTempDeviceUserInfo *fideliusTempIdentity;
@property(retain, nonatomic) SOJULoginResponse *unverifiedLogInResponse;
@property(nonatomic) _Bool isUpdatingTermsOfUseV8;
@property(nonatomic) _Bool hasAcceptedTermsOfUseV8;
@property(nonatomic) _Bool isUpdatingTermsOfUseV7;
@property(nonatomic) _Bool hasAcceptedTermsOfUseV7;
@property(copy, nonatomic) NSString *abuseWarningMessage;
@property(copy, nonatomic) NSString *abuseWarningMessageId;
- (id)_persistentStoreEntryWithValue:(id)arg1;
- (id)_lensPersistentStoreKeyWithEffectId:(id)arg1;
- (void)clearLensPersistentStoreWithPolicy:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveLensPersistentStoreWithEffectId:(id)arg1 serializedStoreData:(id)arg2;
- (id)loadLensPersistentStoreWithEffectId:(id)arg1;
- (void)setContentArchiveSize:(long long)arg1 forLensId:(id)arg2;
- (long long)contentArchiveSizeForLensId:(id)arg1;
@property(retain, nonatomic) NSDictionary *usedLensIds;
@property(copy, nonatomic) NSDictionary *lensSubPickerActiveOptionIds;
@property(retain, nonatomic) NSNumber *feedHeaderPromptLegacyStatesMigrated;
@property(copy, nonatomic) NSSet *userSegments;
@property(copy, nonatomic) NSSet *banneredConversationIds;
@property(copy, nonatomic) NSString *userPixelToken;
@property(copy, nonatomic) NSString *adSessionId;
@property(copy, nonatomic) NSString *userSecId;
@property(copy, nonatomic) NSDictionary *userStoriesInsertionRules;
@property(readonly, nonatomic) double lastAdvertiserIdPersistedTimestamp;
@property(copy, nonatomic) NSString *advertiserId;
@property(nonatomic) double lastForegroundTime;
@property(nonatomic) double lastBackgroundTime;
- (id)tooltipDisplayTimeCounterForFeatureType:(long long)arg1;
- (_Bool)shouldShowLineItemDraftReminder;
- (_Bool)hasValidApprovedODGItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

