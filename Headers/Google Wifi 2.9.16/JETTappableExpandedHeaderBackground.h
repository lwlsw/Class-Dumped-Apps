//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOONavigationCustomHeaderBackground-Protocol.h"

@class NSString, QTMButton, UILabel;

@interface JETTappableExpandedHeaderBackground : UIView <GOONavigationCustomHeaderBackground>
{
    UILabel *_headerLabel;
    QTMButton *_titleButton;
}

@property(retain, nonatomic) QTMButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitleButtonText:(id)arg1;
- (void)setTitleButtonAccessibilityIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 headerText:(id)arg3 target:(id)arg4 action:(SEL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
