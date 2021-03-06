//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, SCCacheSizePolicy, SCPreferences, SCQueuePerformer, UIView, UIViewController;
@protocol SCCache, SCImageDownloading, SCLensChallengesScheduleProtocol, SCLensExplorerBitmojiImageFetcherProtocol, SCLensExplorerLensUnlockerProtocol, SCLensExplorerLoggerProtocol, SCLensExplorerOperaPresenterFactoryProtocol, SCLensExplorerPerformanceLogging, SCLensExplorerProfilePresenterProtocol, SCLensExplorerSearchViewControllerProtocol, SCLensExplorerStoryItemCreatorProtocol, SCLensExplorerStudySettingsProviderProtocol, SCLensExplorerUnlockActionProviderProtocol, SCLensLiveLensPreviewCameraPresenterProtocol, SCLensUnlockerProtocol, SCLensUserProvider, SCRequestManager, SCUnlockableLensDataStoreFilterProtocol;

@protocol SCLensExplorerDependencyProviderProtocol <NSObject>
@property(readonly, nonatomic) id <SCLensChallengesScheduleProtocol> lensChallengesSchedule;
@property(readonly, nonatomic) id <SCLensExplorerOperaPresenterFactoryProtocol> operaPresenterFactory;
@property(readonly, nonatomic) id <SCLensExplorerStoryItemCreatorProtocol> storyItemCreator;
@property(readonly, nonatomic) id <SCLensExplorerStudySettingsProviderProtocol> studySettingsProvider;
@property(readonly, nonatomic) id <SCCache> stickerCache;
@property(readonly, nonatomic) id <SCCache> impressionCache;
@property(readonly, nonatomic) id <SCCache> animationCache;
@property(readonly, nonatomic) id <SCRequestManager> requestManager;
@property(readonly, nonatomic) id <SCImageDownloading> imageDownloader;
- (id <SCLensExplorerUnlockActionProviderProtocol>)unlockActionProvider;
- (id <SCLensExplorerProfilePresenterProtocol>)profilePresenter;
- (id <SCCache>)encryptedCacheWithName:(NSString *)arg1 cacheSizePolicy:(SCCacheSizePolicy *)arg2;
- (UIViewController *)createDebugViewControllerForStoryId:(NSString *)arg1 debugHtml:(NSString *)arg2 lastStreamToken:(NSData *)arg3;
- (SCPreferences *)userPreferences;
- (id <SCLensUserProvider>)lensUserProvider;
- (id <SCUnlockableLensDataStoreFilterProtocol>)blacklistFilter;
- (id <SCLensExplorerBitmojiImageFetcherProtocol>)bitmojiImageFetcher;
- (id <SCLensLiveLensPreviewCameraPresenterProtocol>)liveLensPreviewCameraPresenter;
- (id <SCLensLiveLensPreviewCameraPresenterProtocol>)lensChallengesCameraPresenter;
- (UIViewController<SCLensExplorerSearchViewControllerProtocol> *)createSearchViewControllerWithLensExplorerUnlocker:(id <SCLensExplorerLensUnlockerProtocol>)arg1 parentView:(UIView *)arg2 performanceLogger:(id <SCLensExplorerPerformanceLogging>)arg3;
- (id <SCLensUnlockerProtocol>)lensUnlocker;
- (id <SCLensExplorerLoggerProtocol>)createLensExplorerRankingLoggerWithQueuePerformer:(SCQueuePerformer *)arg1;
@end

