//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IESCategoryModel, IESEffectModel, NSArray, NSDictionary, NSString, UIButton, UICollectionView;
@protocol AWETabControlledCollectionWrapperViewDelegate;

@interface AWETabControlledCollectionWrapperView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _enableSliderMaskImage;
    _Bool _showFilterBoxButton;
    _Bool _shouldShowClearFilterButton;
    _Bool _tabIsFixed;
    NSArray *_filtersArray;
    id <AWETabControlledCollectionWrapperViewDelegate> _delegate;
    IESEffectModel *_selectedFilter;
    UICollectionView *_tabCollectionView;
    UICollectionView *_filterCollectionView;
    UIButton *_clearFilterApplyButton;
    NSDictionary *_filterIndexPathMap;
    NSDictionary *_filterTabNameMap;
    NSDictionary *_categoryMap;
    IESCategoryModel *_selectedTabCategory;
}

@property(nonatomic) _Bool tabIsFixed; // @synthesize tabIsFixed=_tabIsFixed;
@property(retain, nonatomic) IESCategoryModel *selectedTabCategory; // @synthesize selectedTabCategory=_selectedTabCategory;
@property(retain, nonatomic) NSDictionary *categoryMap; // @synthesize categoryMap=_categoryMap;
@property(copy, nonatomic) NSDictionary *filterTabNameMap; // @synthesize filterTabNameMap=_filterTabNameMap;
@property(copy, nonatomic) NSDictionary *filterIndexPathMap; // @synthesize filterIndexPathMap=_filterIndexPathMap;
@property(retain, nonatomic) UIButton *clearFilterApplyButton; // @synthesize clearFilterApplyButton=_clearFilterApplyButton;
@property(retain, nonatomic) UICollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
@property(retain, nonatomic) UICollectionView *tabCollectionView; // @synthesize tabCollectionView=_tabCollectionView;
@property(nonatomic) _Bool shouldShowClearFilterButton; // @synthesize shouldShowClearFilterButton=_shouldShowClearFilterButton;
@property(nonatomic) _Bool showFilterBoxButton; // @synthesize showFilterBoxButton=_showFilterBoxButton;
@property(nonatomic) _Bool enableSliderMaskImage; // @synthesize enableSliderMaskImage=_enableSliderMaskImage;
@property(retain, nonatomic) IESEffectModel *selectedFilter; // @synthesize selectedFilter=_selectedFilter;
@property(nonatomic) __weak id <AWETabControlledCollectionWrapperViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *filtersArray; // @synthesize filtersArray=_filtersArray;
- (void).cxx_destruct;
- (void)p_clearButtonClicked:(id)arg1;
- (_Bool)existLongTabName;
- (void)configCell:(id)arg1 withCategory:(id)arg2 effects:(id)arg3;
- (void)configCell:(id)arg1 withEffect:(id)arg2;
- (void)setupUI;
- (void)p_onFilterBoxSettingButton:(id)arg1;
- (id)p_findIndexPathWithFilter:(id)arg1;
- (void)deselectAllTabs;
- (void)selectTabAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)updateTabSelection:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)selectClearButton;
- (void)updateEffect:(id)arg1;
- (void)updateTabNameCache:(id)arg1;
- (id)tabNameForFilter:(id)arg1;
- (void)selectFilterByCode:(id)arg1 scrolling:(_Bool)arg2;
- (void)scrollToEffect:(id)arg1;
- (void)reloadDataAndScrollingToSelected:(_Bool)arg1;
- (void)reloadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 shouldShowClearFilterButton:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

