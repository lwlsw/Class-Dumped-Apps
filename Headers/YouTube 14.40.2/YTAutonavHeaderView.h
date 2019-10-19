//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "YTCollectionViewCellProtocol.h"

@class NSString, YTFormSwitchField, YTFormattedStringLabel, YTIAutoNavToggleRenderer;

@interface YTAutonavHeaderView : UICollectionViewCell <YTCollectionViewCellProtocol>
{
    YTFormattedStringLabel *_titleLabel;
    YTIAutoNavToggleRenderer *_autoNavToggleRenderer;
    id <YTResponder> parentResponder;
    YTFormSwitchField *_autoplayToggleView;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3 safeAreaInsets:(struct UIEdgeInsets)arg4;
+ (double)preferredHeightForTitle:(id)arg1 width:(double)arg2;
@property(readonly, nonatomic) YTFormSwitchField *autoplayToggleView; // @synthesize autoplayToggleView=_autoplayToggleView;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 toggleEnabled:(_Bool)arg2;
- (id)initWithToggleEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
