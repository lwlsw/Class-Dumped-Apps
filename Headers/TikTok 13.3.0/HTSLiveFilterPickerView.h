//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLiveFilterCollectionViewCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView;
@protocol HTSLiveFilterActions, HTSLiveViewHierarchyProvider, IESLiveEnvironment, IESLiveSettings, IESLiveTracker;

@interface HTSLiveFilterPickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, HTSLiveFilterCollectionViewCellDelegate>
{
    _Bool _showRedDot;
    _Bool _userClickSameItem;
    _Bool _isLive;
    _Bool _isCombine;
    _Bool _newStyle;
    _Bool _landscape;
    unsigned long long _filterIndex;
    NSArray *_filters;
    id <HTSLiveFilterActions> _actionCreator;
    id <IESLiveTracker> _tracker;
    UICollectionView *_collectionView;
    id <IESLiveSettings> _settings;
    UIView *_containerView;
    id <IESLiveEnvironment> _appTarget;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
}

@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool landscape; // @synthesize landscape=_landscape;
@property(nonatomic) _Bool newStyle; // @synthesize newStyle=_newStyle;
@property(nonatomic) _Bool isCombine; // @synthesize isCombine=_isCombine;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSLiveFilterActions> actionCreator; // @synthesize actionCreator=_actionCreator;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(nonatomic) _Bool userClickSameItem; // @synthesize userClickSameItem=_userClickSameItem;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(nonatomic) unsigned long long filterIndex; // @synthesize filterIndex=_filterIndex;
- (void).cxx_destruct;
- (void)redDotDidClear;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateWithFilters:(id)arg1;
- (void)addPickerView;
- (void)addTitleLabel;
- (void)addContailerView;
- (id)initWithFrame:(struct CGRect)arg1 isLive:(_Bool)arg2 isCombine:(_Bool)arg3 isLandscape:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

