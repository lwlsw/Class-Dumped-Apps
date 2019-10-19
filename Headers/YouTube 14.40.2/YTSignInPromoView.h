//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UITapGestureRecognizer, YTFormattedStringLabel, YTImageView;

@interface YTSignInPromoView : UIView
{
    YTImageView *_promoImage;
    YTImageView *_avatarImage;
    UITapGestureRecognizer *_tapRecognizer;
    YTFormattedStringLabel *_signInLabel;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_byLineLabel;
    id <YTSignInPromoViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YTSignInPromoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapSignIn;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setPromoSubtitle:(id)arg1;
- (void)setPromoHeadline:(id)arg1;
- (void)dealloc;
- (id)init;

@end
