//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMButton.h"

@class UIImageView, YTFormattedStringLabel, YTICompactLinkRenderer;
@protocol YTResponder;

@interface YTMCompactLinkView : QTMButton
{
    UIImageView *_iconView;
    YTFormattedStringLabel *_titleLabel;
    id <YTResponder> _parentResponder;
    YTICompactLinkRenderer *_entry;
}

@property(retain, nonatomic) YTICompactLinkRenderer *entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (void)didTap;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithParentResponder:(id)arg1;

@end

