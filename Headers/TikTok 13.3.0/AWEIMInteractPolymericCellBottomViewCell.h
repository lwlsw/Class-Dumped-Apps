//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEUserModel, UIImageView;

@interface AWEIMInteractPolymericCellBottomViewCell : UICollectionViewCell
{
    UIImageView *_avatarImage;
    AWEUserModel *_userModel;
}

+ (id)_defaultImage;
+ (id)identifier;
@property(retain, nonatomic) AWEUserModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) UIImageView *avatarImage; // @synthesize avatarImage=_avatarImage;
- (void).cxx_destruct;
- (void)_setupUI;
- (void)startAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)configWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

