//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface AWEPOIEntryCollectionViewCell : UICollectionViewCell
{
    UILabel *_POIEntryLabel;
    UIImageView *_POIEntryIcon;
}

@property(retain, nonatomic) UIImageView *POIEntryIcon; // @synthesize POIEntryIcon=_POIEntryIcon;
@property(retain, nonatomic) UILabel *POIEntryLabel; // @synthesize POIEntryLabel=_POIEntryLabel;
- (void).cxx_destruct;
- (void)setUpUI;
- (void)setHighlighted:(_Bool)arg1;
- (void)updatePOIEntryCellWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
