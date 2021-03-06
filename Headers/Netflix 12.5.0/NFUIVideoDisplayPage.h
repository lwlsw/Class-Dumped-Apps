//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "LinkedViewGestureDelegateProtocol-Protocol.h"
#import "NFUIDisplayPageCollectionViewDefaultStateDelegateProtocol-Protocol.h"
#import "NFUIDisplayPageCollectionViewProtocol-Protocol.h"
#import "NFUIDisplayPageHeaderViewProtocol-Protocol.h"
#import "NFUIDisplayPageProtocol-Protocol.h"
#import "NFUIDisplayPageSelectionManagerDelegateProtocol-Protocol.h"
#import "NFUIDisplayPageViewDispatcherDelegateProtocol-Protocol.h"
#import "NFUIDisplayPageViewModelDelegateProtocol-Protocol.h"
#import "NFUISectionDividerDelegateProtocol-Protocol.h"
#import "SeasonPickerViewControllerDelegateProtocol-Protocol.h"
#import "TransitioningOptionsProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class DisplayPageHeaderView, DisplayPageRequest, IconButton, NFLXFinalClassEnforcer, NFUICellNotifier, NFUICollectionViewItemDispatcher, NFUIDisplayPageCollectionViewDefaultState, NFUIDisplayPageItemDispatcher, NFUIDisplayPageItemWidthDispatcher, NFUIDisplayPagePullToCloseAction, NFUIDisplayPageSeasonSelectorDelegate, NFUIDisplayPageSelectionManager, NFUIDisplayPageViewModelResolver, NFUIRatingService, NFUIReusableViewManager, NFUIScrollPointNotifier, NFUIVideoDisplayPageDataMap, NFUIVideoDisplayPageViewModel, NSDictionary, NSNumber, NSString, PlaybackSourceModel, UIActivityIndicatorView, UICollectionView, UIView, VideoDisplayPageHeaderViewController;
@protocol NFUIDisplayPageNavigationProtocol;

@interface NFUIVideoDisplayPage : UIViewController <LinkedViewGestureDelegateProtocol, NFUIDisplayPageProtocol, NFUIDisplayPageViewDispatcherDelegateProtocol, NFUIDisplayPageCollectionViewProtocol, NFUIDisplayPageCollectionViewDefaultStateDelegateProtocol, NFUIDisplayPageViewModelDelegateProtocol, TransitioningOptionsProtocol, SeasonPickerViewControllerDelegateProtocol, NFUISectionDividerDelegateProtocol, NFUIDisplayPageSelectionManagerDelegateProtocol, NFUIDisplayPageHeaderViewProtocol, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _isKids;
    _Bool _shouldAutoScroll;
    id <NFUIDisplayPageNavigationProtocol> _dpNav;
    DisplayPageRequest *_dpRequest;
    NSDictionary *_transitionOptions;
    NFUIVideoDisplayPageViewModel *_viewModel;
    NFUIReusableViewManager *_reusableViewManager;
    NFUICollectionViewItemDispatcher *_itemDispatcher;
    NFUIDisplayPageViewModelResolver *_displayPageViewModelResolver;
    NFUIDisplayPageCollectionViewDefaultState *_displayPageDefaultState;
    NFUIDisplayPageSelectionManager *_displayPageSelectionManager;
    UIViewController *_modalShim;
    DisplayPageHeaderView *_headerView;
    VideoDisplayPageHeaderViewController *_headerViewController;
    UICollectionView *_collectionView;
    IconButton *_seasonButton;
    NFLXFinalClassEnforcer *_finalClassEnforcer;
    NFUIScrollPointNotifier *_scrollPointNotifier;
    NFUIVideoDisplayPageDataMap *_videoDisplayPageDataMap;
    NFUIDisplayPageItemDispatcher *_displayPageItemDispatcher;
    NFUIDisplayPageItemWidthDispatcher *_displayPageItemWidthDispatcher;
    NFUIDisplayPageSeasonSelectorDelegate *_displayPageSeasonSelectorDelegate;
    NFUIDisplayPagePullToCloseAction *_displayPagePullToCloseAction;
    NFUICellNotifier *_cellEventNotifier;
    UIView *_headerContainer;
    UIActivityIndicatorView *_loadingView;
    NFUIRatingService *_ratingService;
    unsigned long long _ratingDialogStatus;
    NSNumber *_logMetricId;
}

+ (_Bool)shouldDisplay:(id)arg1;
+ (id)newDisplayPageCollectionViewController;
+ (void)load;
@property(retain, nonatomic) NSNumber *logMetricId; // @synthesize logMetricId=_logMetricId;
@property(nonatomic) unsigned long long ratingDialogStatus; // @synthesize ratingDialogStatus=_ratingDialogStatus;
@property(retain, nonatomic) NFUIRatingService *ratingService; // @synthesize ratingService=_ratingService;
@property(nonatomic) __weak UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak UIView *headerContainer; // @synthesize headerContainer=_headerContainer;
@property(retain, nonatomic) NFUICellNotifier *cellEventNotifier; // @synthesize cellEventNotifier=_cellEventNotifier;
@property(retain, nonatomic) NFUIDisplayPagePullToCloseAction *displayPagePullToCloseAction; // @synthesize displayPagePullToCloseAction=_displayPagePullToCloseAction;
@property(retain, nonatomic) NFUIDisplayPageSeasonSelectorDelegate *displayPageSeasonSelectorDelegate; // @synthesize displayPageSeasonSelectorDelegate=_displayPageSeasonSelectorDelegate;
@property(retain, nonatomic) NFUIDisplayPageItemWidthDispatcher *displayPageItemWidthDispatcher; // @synthesize displayPageItemWidthDispatcher=_displayPageItemWidthDispatcher;
@property(retain, nonatomic) NFUIDisplayPageItemDispatcher *displayPageItemDispatcher; // @synthesize displayPageItemDispatcher=_displayPageItemDispatcher;
@property(retain, nonatomic) NFUIVideoDisplayPageDataMap *videoDisplayPageDataMap; // @synthesize videoDisplayPageDataMap=_videoDisplayPageDataMap;
@property(retain, nonatomic) NFUIScrollPointNotifier *scrollPointNotifier; // @synthesize scrollPointNotifier=_scrollPointNotifier;
@property(copy, nonatomic) NFLXFinalClassEnforcer *finalClassEnforcer; // @synthesize finalClassEnforcer=_finalClassEnforcer;
@property(nonatomic) __weak IconButton *seasonButton; // @synthesize seasonButton=_seasonButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool shouldAutoScroll; // @synthesize shouldAutoScroll=_shouldAutoScroll;
@property(retain, nonatomic) VideoDisplayPageHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) __weak DisplayPageHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIViewController *modalShim; // @synthesize modalShim=_modalShim;
@property(retain, nonatomic) NFUIDisplayPageSelectionManager *displayPageSelectionManager; // @synthesize displayPageSelectionManager=_displayPageSelectionManager;
@property(retain, nonatomic) NFUIDisplayPageCollectionViewDefaultState *displayPageDefaultState; // @synthesize displayPageDefaultState=_displayPageDefaultState;
@property(retain, nonatomic) NFUIDisplayPageViewModelResolver *displayPageViewModelResolver; // @synthesize displayPageViewModelResolver=_displayPageViewModelResolver;
@property(retain, nonatomic) NFUICollectionViewItemDispatcher *itemDispatcher; // @synthesize itemDispatcher=_itemDispatcher;
@property(retain, nonatomic) NFUIReusableViewManager *reusableViewManager; // @synthesize reusableViewManager=_reusableViewManager;
@property(nonatomic) _Bool isKids; // @synthesize isKids=_isKids;
@property(retain, nonatomic) NFUIVideoDisplayPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSDictionary *transitionOptions; // @synthesize transitionOptions=_transitionOptions;
@property(retain, nonatomic) DisplayPageRequest *dpRequest; // @synthesize dpRequest=_dpRequest;
@property(nonatomic) __weak id <NFUIDisplayPageNavigationProtocol> dpNav; // @synthesize dpNav=_dpNav;
- (void).cxx_destruct;
- (void)viewSafeAreaInsetsDidChange;
- (void)dealloc;
- (void)showHeaderForTitle:(_Bool)arg1 withAlphaFade:(_Bool)arg2;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)handleLinkTapped:(id)arg1 withData:(id)arg2;
- (id)cellForSize:(id)arg1 withWidth:(double)arg2 withIdentifier:(id)arg3 withViewModel:(id)arg4;
- (id)uniqueIdForIdentifier:(id)arg1 withIndexPath:(id)arg2;
- (double)cellWidthForIdentifier:(id)arg1;
- (struct CGSize)filterSize:(double)arg1 withCell:(id)arg2 withIdentifier:(id)arg3 withIndexPath:(id)arg4;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)transitionSourceSnapshot;
- (struct UIEdgeInsets)transitionSourceInsets;
- (struct CGRect)transitionSourceRect;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)defaultNavigationLevel;
- (void)unregisterNotifcationPointFromCell:(CDUnknownBlockType)arg1;
- (void)registerNotifcationPointFromCell:(id)arg1 withElementOffset:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)populateDefaultScrollPoints;
@property(copy, nonatomic) PlaybackSourceModel *playbackSourceModel;
@property(copy, nonatomic) NSNumber *videoId;
- (void)setVideoId:(id)arg1 withData:(id)arg2;
- (id)currentSeason;
- (id)seasonSelectorVideoId;
- (void)updateSeasonButtonAccessibilityId;
- (void)seasonChanged:(unsigned long long)arg1 episodeIndex:(unsigned long long)arg2;
- (void)seasonChanged:(unsigned long long)arg1;
- (void)updateSeasonTitles;
- (void)seasonButtonPressed:(id)arg1;
- (void)dividerSectionChanged:(long long)arg1;
- (void)refreshContentSection:(_Bool)arg1 index:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)reloadVolatileViewData;
- (void)prefetchHeadersForViewable;
- (void)logListButtonPresentation;
- (id)clPresentationObject;
- (void)refreshView;
- (void)playbackEnded:(id)arg1;
- (void)showFirstRateWithThumbRating:(long long)arg1;
- (void)notifyRatingDidChange:(long long)arg1;
- (void)thumbRatingAnimationDidComplete;
- (void)thumbRatingDidChange:(long long)arg1;
- (void)download:(id)arg1 withId:(id)arg2 title:(id)arg3;
- (void)play:(id)arg1;
- (void)playWithId:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

