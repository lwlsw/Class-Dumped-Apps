//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WADraggablePopUpViewController.h"

#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, UICollectionView, UISearchBar, UIView, WAGIFAsset, WAGIFAssetCollection, WAGIFSearch, WALoopingVideoPlayerView;
@protocol WAGIFSearchViewControllerDelegate;

@interface WAGIFSearchViewController : WADraggablePopUpViewController <UICollectionViewDelegate, UISearchBarDelegate, UIScrollViewDelegate, WANavigationControllerPopToAnimating>
{
    WAGIFSearch *_search;
    WAGIFAssetCollection *_gifCollection;
    WAGIFAssetCollection *_presetGIFs;
    double _keyboardHeight;
    _Bool _firstGIFPresented;
    double _lastKnownCollectionViewWidth;
    _Bool _activateSearchBarInViewDidAppear;
    UIView *_loadingView;
    UIView *_noConnectionView;
    UIView *_noResultsView;
    WALoopingVideoPlayerView *_noResultsGIFView;
    NSMutableArray *_placeholderViewBottomMargins;
    _Bool _loadingMoreGIFs;
    id <WAGIFSearchViewControllerDelegate> _delegate;
    UISearchBar *_searchBar;
    UICollectionView *_collectionView;
    NSIndexPath *_indexPathForSelectedItem;
    WAGIFAsset *_selectedGIF;
}

@property(retain, nonatomic) WAGIFAsset *selectedGIF; // @synthesize selectedGIF=_selectedGIF;
@property(retain, nonatomic) NSIndexPath *indexPathForSelectedItem; // @synthesize indexPathForSelectedItem=_indexPathForSelectedItem;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <WAGIFSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)finishTransitionWithContext:(id)arg1;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)tryAgainAction:(id)arg1;
- (void)searchQueryWithText:(id)arg1;
- (void)loadNextBatchForText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCollectionViewLongPress:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)invalidateCollectionViewLayout;
- (void)presentGIFs:(id)arg1;
- (void)closeGIFPicker:(id)arg1;
- (void)showSearchErrorScreen;
- (void)showNoResultsScreen:(_Bool)arg1;
- (void)showLoadingScreen;
- (void)resignAllFirstResponders;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

