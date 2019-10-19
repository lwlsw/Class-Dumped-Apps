//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface AWEVisionSearchCropView : UIView
{
    UIImageView *_leftTopImageView;
    UIImageView *_leftBottomImageView;
    UIImageView *_rightTopImageView;
    UIImageView *_rightBottomImageView;
}

@property(retain, nonatomic) UIImageView *rightBottomImageView; // @synthesize rightBottomImageView=_rightBottomImageView;
@property(retain, nonatomic) UIImageView *rightTopImageView; // @synthesize rightTopImageView=_rightTopImageView;
@property(retain, nonatomic) UIImageView *leftBottomImageView; // @synthesize leftBottomImageView=_leftBottomImageView;
@property(retain, nonatomic) UIImageView *leftTopImageView; // @synthesize leftTopImageView=_leftTopImageView;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)configureRectFrame;
- (void)configureUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
