//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView, UILabel;

@interface AWEOrangeStoryReadCountView : UIView
{
    UIImageView *_eyeView;
    NSArray *_imageViewArray;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *imageViewArray; // @synthesize imageViewArray=_imageViewArray;
@property(retain, nonatomic) UIImageView *eyeView; // @synthesize eyeView=_eyeView;
- (void).cxx_destruct;
- (void)refreshWithUserArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
