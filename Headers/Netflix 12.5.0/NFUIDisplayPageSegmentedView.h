//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NFUISegmentedControllerSelectableViewProtocol-Protocol.h"

@class NFUILabel, NSLayoutConstraint, NSString;

@interface NFUIDisplayPageSegmentedView : UIView <NFUISegmentedControllerSelectableViewProtocol>
{
    _Bool _selected;
    NSLayoutConstraint *_underlineWidthLabelConstraint;
    NSLayoutConstraint *_underlineWidthConstraint;
    NSString *_title;
    NFUILabel *_label;
    UIView *_underline;
}

@property(retain, nonatomic) UIView *underline; // @synthesize underline=_underline;
@property(retain, nonatomic) NFUILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSLayoutConstraint *underlineWidthConstraint; // @synthesize underlineWidthConstraint=_underlineWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *underlineWidthLabelConstraint; // @synthesize underlineWidthLabelConstraint=_underlineWidthLabelConstraint;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)commonInit;
- (id)init;
- (id)initWithTitle:(id)arg1;

@end

