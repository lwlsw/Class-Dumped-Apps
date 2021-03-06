//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEStudioMarkView, UIButton, UILabel, UITextView;
@protocol AWETextInputControllerProtocol;

@interface AWENormalPublishContentView : UIView
{
    UIButton *_titleButton;
    UITextView *_titleTextView;
    UIButton *_privateButton;
    AWEStudioMarkView *_markView;
    UILabel *_privateLabel;
    UIView *_sepView;
    id <AWETextInputControllerProtocol> _textViewController;
}

@property(retain, nonatomic) id <AWETextInputControllerProtocol> textViewController; // @synthesize textViewController=_textViewController;
@property(retain, nonatomic) UIView *sepView; // @synthesize sepView=_sepView;
@property(retain, nonatomic) UILabel *privateLabel; // @synthesize privateLabel=_privateLabel;
@property(retain, nonatomic) AWEStudioMarkView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) UIButton *privateButton; // @synthesize privateButton=_privateButton;
@property(retain, nonatomic) UITextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
- (void).cxx_destruct;
- (void)updateUIWithText:(id)arg1 extraInfo:(id)arg2 poiName:(id)arg3 goodsTitle:(id)arg4;
- (void)updateUIWithPrivateTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

