//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class AWEPOIDetailResponse, AWEPOIMerchantEntryModel, UIImageView, UILabel, UIView;

@interface AWEPOIMerchantDetailEntryView : UIControl
{
    AWEPOIDetailResponse *_detailResponse;
    UIImageView *_iconView;
    UILabel *_textLabel;
    UIView *_separator;
    AWEPOIMerchantEntryModel *_model;
}

@property(retain, nonatomic) AWEPOIMerchantEntryModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) AWEPOIDetailResponse *detailResponse; // @synthesize detailResponse=_detailResponse;
- (void).cxx_destruct;
- (void)updateSperatorHidden:(_Bool)arg1;
- (void)handleEvent;
- (void)updateWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;

@end

