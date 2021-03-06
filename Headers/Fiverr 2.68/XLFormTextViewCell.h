//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XLFormBaseCell.h"

#import "UITextViewDelegate-Protocol.h"

@class NSMutableArray, NSNumber, NSString, UILabel, XLFormTextView;

@interface XLFormTextViewCell : XLFormBaseCell <UITextViewDelegate>
{
    NSMutableArray *_dynamicCustomConstraints;
    UILabel *_textLabel;
    XLFormTextView *_textView;
    NSNumber *_textViewLengthPercentage;
    NSNumber *_textViewMaxNumberOfCharacters;
}

+ (double)formDescriptorCellHeightForRowDescriptor:(id)arg1;
@property(retain, nonatomic) NSNumber *textViewMaxNumberOfCharacters; // @synthesize textViewMaxNumberOfCharacters=_textViewMaxNumberOfCharacters;
@property(retain, nonatomic) NSNumber *textViewLengthPercentage; // @synthesize textViewLengthPercentage=_textViewLengthPercentage;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)updateConstraints;
- (void)unhighlight;
- (void)highlight;
- (_Bool)formDescriptorCellBecomeFirstResponder;
- (_Bool)formDescriptorCellCanBecomeFirstResponder;
- (void)update;
- (void)configure;
@property(readonly, nonatomic) XLFormTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) UILabel *label;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

