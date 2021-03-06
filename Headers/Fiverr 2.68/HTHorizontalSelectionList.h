//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableDictionary, NSString, UICollectionView, UIColor, UIScrollView;
@protocol HTHorizontalSelectionListDataSource, HTHorizontalSelectionListDelegate;

@interface HTHorizontalSelectionList : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _centerButtons;
    _Bool _evenlySpaceButtons;
    _Bool _centerOnSelection;
    _Bool _snapToCenter;
    _Bool _autoselectCentralItem;
    _Bool _scrollingDirectly;
    long long _selectedButtonIndex;
    id <HTHorizontalSelectionListDataSource> _dataSource;
    id <HTHorizontalSelectionListDelegate> _delegate;
    double _horizontalMargin;
    double _selectionIndicatorHeight;
    double _selectionIndicatorHorizontalPadding;
    long long _selectionIndicatorAnimationMode;
    long long _selectionIndicatorStyle;
    UICollectionView *_collectionView;
    UIScrollView *_contentView;
    UIView *_selectionIndicatorBar;
    UIView *_bottomTrim;
    NSMutableDictionary *_titleColorsByState;
    NSMutableDictionary *_titleColorsByStateAndIndexPaths;
    NSMutableDictionary *_titleFontsByState;
    UIView *_edgeFadeGradientView;
    struct UIEdgeInsets _buttonInsets;
}

@property(nonatomic) _Bool scrollingDirectly; // @synthesize scrollingDirectly=_scrollingDirectly;
@property(retain, nonatomic) UIView *edgeFadeGradientView; // @synthesize edgeFadeGradientView=_edgeFadeGradientView;
@property(retain, nonatomic) NSMutableDictionary *titleFontsByState; // @synthesize titleFontsByState=_titleFontsByState;
@property(retain, nonatomic) NSMutableDictionary *titleColorsByStateAndIndexPaths; // @synthesize titleColorsByStateAndIndexPaths=_titleColorsByStateAndIndexPaths;
@property(retain, nonatomic) NSMutableDictionary *titleColorsByState; // @synthesize titleColorsByState=_titleColorsByState;
@property(retain, nonatomic) UIView *bottomTrim; // @synthesize bottomTrim=_bottomTrim;
@property(retain, nonatomic) UIView *selectionIndicatorBar; // @synthesize selectionIndicatorBar=_selectionIndicatorBar;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long selectionIndicatorStyle; // @synthesize selectionIndicatorStyle=_selectionIndicatorStyle;
@property(nonatomic) struct UIEdgeInsets buttonInsets; // @synthesize buttonInsets=_buttonInsets;
@property(nonatomic) long long selectionIndicatorAnimationMode; // @synthesize selectionIndicatorAnimationMode=_selectionIndicatorAnimationMode;
@property(nonatomic) _Bool autoselectCentralItem; // @synthesize autoselectCentralItem=_autoselectCentralItem;
@property(nonatomic) _Bool snapToCenter; // @synthesize snapToCenter=_snapToCenter;
@property(nonatomic) _Bool centerOnSelection; // @synthesize centerOnSelection=_centerOnSelection;
@property(nonatomic) _Bool evenlySpaceButtons; // @synthesize evenlySpaceButtons=_evenlySpaceButtons;
@property(nonatomic) _Bool centerButtons; // @synthesize centerButtons=_centerButtons;
@property(nonatomic) double selectionIndicatorHorizontalPadding; // @synthesize selectionIndicatorHorizontalPadding=_selectionIndicatorHorizontalPadding;
@property(nonatomic) double selectionIndicatorHeight; // @synthesize selectionIndicatorHeight=_selectionIndicatorHeight;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) __weak id <HTHorizontalSelectionListDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <HTHorizontalSelectionListDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long selectedButtonIndex; // @synthesize selectedButtonIndex=_selectedButtonIndex;
- (void).cxx_destruct;
- (double)selectionIndicatorBarSpringDamping;
- (void)alignSelectionIndicatorWithCellAtIndexPath:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)correctSelection:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setSelectedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (void)setTitleFont:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2 forButtonIndexes:(id)arg3;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setUserInteractionEnabled:(_Bool)arg1;
@property(nonatomic) _Bool showsEdgeFadeEffect;
@property(nonatomic) _Bool bottomTrimHidden;
@property(retain, nonatomic) UIColor *bottomTrimColor;
@property(retain, nonatomic) UIColor *selectionIndicatorColor;
- (void)setSelectionIndicatorColor:(id)arg1 forIndexes:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

