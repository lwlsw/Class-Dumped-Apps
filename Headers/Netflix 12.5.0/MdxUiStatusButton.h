//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "MdxUiMenuViewControllerDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIColor, UIImage;
@protocol MdxUiStatusButtonDelegate;

@interface MdxUiStatusButton : UIControl <MdxUiMenuViewControllerDelegate>
{
    _Bool _delegateRespondsToAvailabilityChanged;
    _Bool _delegateRespondsToMenuDelegate;
    _Bool _available;
    id <MdxUiStatusButtonDelegate> _delegate;
    double _padding;
    unsigned long long _status;
    UIButton *_button;
    UIImage *_castOff;
    UIImage *_castOn;
    NSArray *_castConnecting;
    UIColor *_buttonTintColor;
}

+ (id)barButtonItem:(struct CGRect)arg1;
+ (id)buttonWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIColor *buttonTintColor; // @synthesize buttonTintColor=_buttonTintColor;
@property(retain, nonatomic) NSArray *castConnecting; // @synthesize castConnecting=_castConnecting;
@property(retain, nonatomic) UIImage *castOn; // @synthesize castOn=_castOn;
@property(retain, nonatomic) UIImage *castOff; // @synthesize castOff=_castOff;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) __weak id <MdxUiStatusButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool available; // @synthesize available=_available;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forMdxButtonEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forMdxButtonEvents:(unsigned long long)arg3;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)dealloc;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (void)setupButtonTintColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mdxUiStatusNotification:(id)arg1;
- (void)handleMdxButtonAction:(id)arg1;
- (id)themedImageNamed:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

