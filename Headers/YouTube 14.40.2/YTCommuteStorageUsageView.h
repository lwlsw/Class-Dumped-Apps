//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GA11YMixinEmbedder.h"
#import "YTPageStyling.h"

@class NSString, YTCommuteStorageBar, YTLabel;

@interface YTCommuteStorageUsageView : UIView <YTPageStyling, GA11YMixinEmbedder>
{
    YTCommuteStorageBar *_storageBar;
    UIView *_usedStorageDot;
    UIView *_freeStorageDot;
    YTLabel *_usedStorageLabel;
    YTLabel *_freeStorageLabel;
    YTLabel *_availableStorageLabel;
    _Bool _hasShownStorageUsingThreeLines;
    id <GA11YMixinImpl> _accessibilityMixin;
    unsigned long long _usedStorageBytes;
    unsigned long long _freeStorageBytes;
}

+ (id)storageLabel;
@property(nonatomic) unsigned long long freeStorageBytes; // @synthesize freeStorageBytes=_freeStorageBytes;
@property(nonatomic) unsigned long long usedStorageBytes; // @synthesize usedStorageBytes=_usedStorageBytes;
- (void).cxx_destruct;
- (id)bytesToGBString:(unsigned long long)arg1;
- (id)storageFreeSizeString;
- (id)storageUsedSizeString;
- (void)layoutThreeLineStorageText;
- (void)layoutTwoLineStorageText;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

