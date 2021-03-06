//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CALayer, NSString, UIImage, UIImageView, YTLabel;

@interface YTPrivacySelectButton : UIButton
{
    YTLabel *_titleLabel;
    UIImageView *_imageView;
    YTLabel *_textLabel;
    CALayer *_borderBottomLayer;
    UIImage *_image;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

