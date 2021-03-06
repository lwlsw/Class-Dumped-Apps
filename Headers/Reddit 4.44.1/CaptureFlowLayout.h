//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray, NSMutableDictionary;

@interface CaptureFlowLayout : UICollectionViewFlowLayout
{
    unsigned long long _animationDirection;
    NSMutableArray *_insertedSections;
    NSMutableArray *_removedSections;
    NSMutableDictionary *_currentCellAttributes;
    NSMutableDictionary *_currentSupplementaryAttributesByKind;
    NSMutableDictionary *_cachedCellAttributes;
    NSMutableDictionary *_cachedSupplementaryAttributesByKind;
}

@property(retain, nonatomic) NSMutableDictionary *cachedSupplementaryAttributesByKind; // @synthesize cachedSupplementaryAttributesByKind=_cachedSupplementaryAttributesByKind;
@property(retain, nonatomic) NSMutableDictionary *cachedCellAttributes; // @synthesize cachedCellAttributes=_cachedCellAttributes;
@property(retain, nonatomic) NSMutableDictionary *currentSupplementaryAttributesByKind; // @synthesize currentSupplementaryAttributesByKind=_currentSupplementaryAttributesByKind;
@property(retain, nonatomic) NSMutableDictionary *currentCellAttributes; // @synthesize currentCellAttributes=_currentCellAttributes;
@property(retain, nonatomic) NSMutableArray *removedSections; // @synthesize removedSections=_removedSections;
@property(retain, nonatomic) NSMutableArray *insertedSections; // @synthesize insertedSections=_insertedSections;
@property(nonatomic) unsigned long long animationDirection; // @synthesize animationDirection=_animationDirection;
- (void).cxx_destruct;
- (struct CATransform3D)disappearTransform;
- (struct CATransform3D)appearTransform;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;

@end

