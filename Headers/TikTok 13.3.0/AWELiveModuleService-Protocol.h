//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWELiveRoomLogModel, AWEStorage, AWEUserModel, IESMMRecoder, NSArray, NSNumber, NSObject, NSString, UICollectionViewCell, UINavigationController, UITableView, UITableViewCell, UIView, UIViewController;
@protocol AWEAwemeLiveTableViewCellProtocol, AWEFeedLiveMarkViewProtocol, AWEFeedTableViewCellViewControllerProtocol, AWELiveAnchorStartLiveControllerProtocol, AWELiveBrowserCollectionViewCellProtocol, AWELiveCamera, AWELiveCollectionProtocol, AWELiveEntranceBaseViewProtocol, AWELiveEntranceTopToolViewProtocol, AWELiveEntranceViewControllerProtocol, AWELiveEntranceViewProtocol, AWELiveFansRuleManagerProtocol, AWELiveHotBrowserCollectionViewCellProtocol, AWELiveHotManagerProtocol, AWELivePresentControlManagerProtocol, AWELivePriorityEffectManagerProtocol, AWELiveRoomFactoryProtocol, AWELiveSettingProtocol, AWELiveSkylightViewControllerProtocol, AWELiveStoryBrowserTagViewProtocol, AWELiveTrackEventProtocol, AWELiveVerifyAnchorViewControllerProtocol, AWEStoryBrowserViewControllerProtocol;

@protocol AWELiveModuleService <HTSService>
- (void)openLiveScheme:(NSString *)arg1;
- (_Bool)canOpenLiveScheme:(NSString *)arg1;
- (AWEStorage *)liveStorage;
- (id <AWELiveTrackEventProtocol>)liveTracker;
- (id <AWELiveSettingProtocol>)liveSetting;
- (UIView *)liveSkylightCatchViewWithTouchBlock:(void (^)(void))arg1;
- (UIViewController<AWELiveSkylightViewControllerProtocol> *)liveBayWindowViewController;
- (UIViewController<AWELiveSkylightViewControllerProtocol> *)liveSkylightViewController;
- (void)trackLiveShow:(NSNumber *)arg1 anchorId:(NSString *)arg2 roomId:(NSString *)arg3 groupId:(NSString *)arg4 requestId:(NSString *)arg5 enterFrom:(NSString *)arg6 enterMethod:(NSString *)arg7 order:(NSNumber *)arg8 roomType:(NSNumber *)arg9;
- (void)fetchRoomInfoWithUid:(NSNumber *)arg1 completion:(void (^)(AWEAwemeModel *, NSString *, NSError *))arg2;
- (NSArray *)gurdLivePatterns;
- (NSArray *)gurdLiveChannels;
- (void)trackEnterLiveMode;
- (id <AWELiveCamera>)liveCameraWithRecorder:(IESMMRecoder *)arg1;
- (UIViewController<AWELiveEntranceViewControllerProtocol> *)getLiveEntranceViewControllerWithHolderController:(UIViewController *)arg1 containerView:(UIView *)arg2;
- (void)buyProductWithIapID:(NSString *)arg1 productID:(NSNumber *)arg2 orderID:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)checkFeedLiveStatus:(NSNumber *)arg1 userID:(NSString *)arg2;
- (void)storeLoadLiveModelOfFeedList:(NSArray *)arg1;
- (void)storeFetchLiveModelOfFeedList:(NSArray *)arg1;
- (void)enterLiveOwners:(NSArray *)arg1 defaultOwner:(AWEUserModel *)arg2 delegate:(id <AWELiveCollectionProtocol>)arg3 roomLog:(AWELiveRoomLogModel *)arg4 enterFrom:(NSString *)arg5 completion:(void (^)(_Bool))arg6;
- (void)enterLiveRoomWithOwner:(AWEUserModel *)arg1 roomLog:(AWELiveRoomLogModel *)arg2 enterFrom:(NSString *)arg3 completion:(void (^)(_Bool))arg4;
- (void)enterLiveRoomWithOwner:(AWEUserModel *)arg1 roomLog:(AWELiveRoomLogModel *)arg2 enterFrom:(NSString *)arg3;
- (void)directEnterLiveFrom:(NSString *)arg1 roomLog:(AWELiveRoomLogModel *)arg2 completion:(void (^)(_Bool))arg3;
- (_Bool)canDirectEnterLiveRoom;
- (void)prepareLivePushDispatcher;
- (_Bool)clickShootToLive;
- (void)setClickShootToLive:(_Bool)arg1;
- (void)checkLivePermission:(void (^)(_Bool, NSError *))arg1;
- (UIView *)addLiveFeedGuideViewToView:(UIView *)arg1;
- (void)setStorageCrashTimestamp;
- (void)alertForRestartLive;
- (void)registerCatchExceptionHandler;
- (void)clearLiveCache;
- (void)transitionToWalletPageFrom:(_Bool)arg1;
- (void)setupSelectRouteManager;
- (UIViewController<AWEFeedTableViewCellViewControllerProtocol> *)getFeedLiveStreamViewControllerWithAvatarClick:(void (^)(void))arg1;
- (UINavigationController *)getLiveHotTransitionNavForStoryFromPage:(NSString *)arg1;
- (NSObject<AWELiveHotManagerProtocol> *)getLiveHotManager;
- (void)setTableView:(UITableView *)arg1 edgeInsets:(struct UIEdgeInsets)arg2;
- (UITableViewCell<AWEAwemeLiveTableViewCellProtocol> *)getLiveDetailTableViewCellWithReuseIdentifier:(NSString *)arg1 bottomOffset:(double)arg2;
- (UICollectionViewCell<AWELiveHotBrowserCollectionViewCellProtocol> *)getCommerceLiveBrowserCollectionViewCell;
- (UICollectionViewCell<AWELiveHotBrowserCollectionViewCellProtocol> *)getLiveHotBrowserCollectionViewCell;
- (UICollectionViewCell<AWELiveBrowserCollectionViewCellProtocol> *)getLiveBrowserCollectionViewCell;
- (UIView<AWELiveStoryBrowserTagViewProtocol> *)getLiveStoryBrowserTageViewWithFrame:(struct CGRect)arg1 fontSize:(double)arg2 labelPadding:(struct CGPoint)arg3;
- (UIViewController<AWEStoryBrowserViewControllerProtocol> *)getStoryBrowserViewControllerWithStyle:(unsigned long long)arg1;
- (UIViewController<AWELiveVerifyAnchorViewControllerProtocol> *)getLiveVerifyAnchorVCWithType:(long long)arg1;
- (NSObject<AWELivePresentControlManagerProtocol> *)getLivePresentControlManager;
- (UIView<AWEFeedLiveMarkViewProtocol> *)getFeedLiveMarkViewWithFrame:(struct CGRect)arg1;
- (UIView<AWELiveEntranceBaseViewProtocol> *)getLiveEntranceBaseViewWithFrame:(struct CGRect)arg1;
- (UIView<AWELiveEntranceTopToolViewProtocol> *)getLiveEntranceTopToolViewWithFrame:(struct CGRect)arg1;
- (NSObject<AWELivePriorityEffectManagerProtocol> *)getLivePriorityEffectManager;
- (NSObject<AWELiveFansRuleManagerProtocol> *)getLiveFansRuleManager;
- (NSObject<AWELiveRoomFactoryProtocol> *)getLiveRoomFactory;
- (void)clearCacheRoomForUid:(NSString *)arg1;
- (void)fetchRoomInfosWithRoomIds:(NSArray *)arg1 uids:(NSArray *)arg2 clearOldCache:(_Bool)arg3;
- (void)fetchRoomInfoWithRoomId:(NSNumber *)arg1 uid:(NSString *)arg2;
- (UIView<AWELiveEntranceViewProtocol> *)getLiveEntranceViewWithFrame:(struct CGRect)arg1;
- (void)setCameraDefaultDirection:(_Bool)arg1;
- (NSObject<AWELiveAnchorStartLiveControllerProtocol> *)getLiveAnchorStartLiveController;
- (NSString *)liveTitle;
- (void)setLiveTitle:(NSString *)arg1;
- (NSNumber *)videoResolutionH;
- (NSNumber *)videoResolutionW;
- (NSNumber *)videoFPS;
- (void)setPreLiveRoomOwnerName:(NSString *)arg1;
- (NSString *)preLiveRoomId;
- (void)setPreLiveRoomId:(NSString *)arg1;
- (void)setHasPreLiveRoom:(_Bool)arg1;
- (NSString *)currentLiveRoomOwnerName;
- (NSString *)currentLiveRoomId;
- (_Bool)hasEnteredLiveRoom;
- (_Bool)hasCreatedLiveRoom;
- (_Bool)hasUsedLiveFunctionRecently;
- (_Bool)canBeLivePodcast;
- (_Bool)enableUseLive;
- (_Bool)canEnterLiveRoom:(NSNumber *)arg1;
@end
