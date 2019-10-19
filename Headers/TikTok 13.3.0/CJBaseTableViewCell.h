//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CJBaseTableViewCellModel, UIView;

@interface CJBaseTableViewCell : UITableViewCell
{
    UIView *_topLineView;
    UIView *_bottomLineView;
    CJBaseTableViewCellModel *_cellModel;
}

+ (double)cj_cellHeight:(id)arg1;
+ (id)cj_cellIdentifier;
@property(retain, nonatomic) CJBaseTableViewCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
- (void).cxx_destruct;
- (void)updateData:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
