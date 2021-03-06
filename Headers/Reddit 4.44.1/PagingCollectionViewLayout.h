//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath, NSMutableSet;
@protocol PagingCollectionViewLayoutDelegate;

@interface PagingCollectionViewLayout : UICollectionViewFlowLayout
{
    _Bool _isObservingContentOffset;
    id <PagingCollectionViewLayoutDelegate> _delegate;
    NSMutableSet *_displayedIndexPaths;
    NSMutableSet *_willBeVisibleIndexPaths;
    NSMutableSet *_willNotBeVisibleIndexPaths;
}

@property(nonatomic) _Bool isObservingContentOffset; // @synthesize isObservingContentOffset=_isObservingContentOffset;
@property(retain, nonatomic) NSMutableSet *willNotBeVisibleIndexPaths; // @synthesize willNotBeVisibleIndexPaths=_willNotBeVisibleIndexPaths;
@property(retain, nonatomic) NSMutableSet *willBeVisibleIndexPaths; // @synthesize willBeVisibleIndexPaths=_willBeVisibleIndexPaths;
@property(retain, nonatomic) NSMutableSet *displayedIndexPaths; // @synthesize displayedIndexPaths=_displayedIndexPaths;
@property(nonatomic) __weak id <PagingCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)collectionViewDidEndDecelerating:(id)arg1;
- (_Bool)isScrolling;
- (void)updateCurrentPage;
- (void)updateVisibleIndexPaths;
- (double)flickVelocity;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (double)pageWidth;
- (void)removeContentOffsetObserver:(id)arg1;
- (void)addContentOffsetObserver:(id)arg1;
- (void)prepareLayout;
@property(readonly, nonatomic) NSIndexPath *currentPage;
- (void)dealloc;

@end

