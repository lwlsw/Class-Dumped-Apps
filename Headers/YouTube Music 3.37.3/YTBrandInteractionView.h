//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface YTBrandInteractionView : UIView
{
    UIButton *_likeButton;
    UIButton *_dislikeButton;
}

@property(readonly, nonatomic) UIButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
@property(readonly, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)optionSelected:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRenderer:(id)arg1;

@end

