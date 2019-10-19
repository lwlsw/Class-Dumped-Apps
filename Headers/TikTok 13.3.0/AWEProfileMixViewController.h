//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEProfileMixDataManager, NSMutableArray, NSString, UICollectionView;

@interface AWEProfileMixViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    AWEProfileMixDataManager *_dataManager;
    NSString *_referString;
    NSString *_userID;
    UICollectionView *_collectionView;
    double _currentOffset;
    NSMutableArray *_loggedArray;
}

@property(retain, nonatomic) NSMutableArray *loggedArray; // @synthesize loggedArray=_loggedArray;
@property(nonatomic) double currentOffset; // @synthesize currentOffset=_currentOffset;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(retain, nonatomic) AWEProfileMixDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
