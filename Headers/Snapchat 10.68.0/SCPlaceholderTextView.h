//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor, UIFont, UILabel;
@protocol SCPlaceholderTextViewPasteMediaDelegate, SCPlaceholderTextViewVisibilityDelegate;

@interface SCPlaceholderTextView : UITextView
{
    _Bool _menuInitialized;
    _Bool _didAttemptToResignFirstResponderWhileInBackground;
    _Bool _allowsVerticalScrolling;
    _Bool _isRTL;
    NSString *_placeholder;
    UIColor *_placeholderColor;
    UIFont *_placeholderFont;
    UILabel *_placeholderLabel;
    id <SCPlaceholderTextViewPasteMediaDelegate> _pasteMediaDelegate;
    id <SCPlaceholderTextViewVisibilityDelegate> _visibilityDelegate;
    UIFont *_fontBeforeToggle;
    double _additionalPlaceholderLeadingHorizontalInset;
}

+ (id)grayPlaceholderTextColor;
@property(nonatomic) double additionalPlaceholderLeadingHorizontalInset; // @synthesize additionalPlaceholderLeadingHorizontalInset=_additionalPlaceholderLeadingHorizontalInset;
@property(retain, nonatomic) UIFont *fontBeforeToggle; // @synthesize fontBeforeToggle=_fontBeforeToggle;
@property(nonatomic) __weak id <SCPlaceholderTextViewVisibilityDelegate> visibilityDelegate; // @synthesize visibilityDelegate=_visibilityDelegate;
@property(nonatomic) __weak id <SCPlaceholderTextViewPasteMediaDelegate> pasteMediaDelegate; // @synthesize pasteMediaDelegate=_pasteMediaDelegate;
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UIFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool allowsVerticalScrolling; // @synthesize allowsVerticalScrolling=_allowsVerticalScrolling;
- (void).cxx_destruct;
- (id)fontAfterToggleBoldfaceForFont:(id)arg1;
- (id)fontAfterToggleItalicsForFont:(id)arg1;
- (void)toggleUnderlineForRange:(struct _NSRange)arg1;
- (void)toggleBoldfaceForRange:(struct _NSRange)arg1;
- (void)toggleItalicsForRange:(struct _NSRange)arg1;
- (void)showMenuItemsAfterToggle;
- (void)hideMenuItemsBeforeToggle;
- (void)toggleUnderline:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (id)_imageFromPasteboard:(id)arg1;
- (void)paste:(id)arg1;
- (_Bool)canPasteText;
- (_Bool)canPasteImage;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)resignFirstResponder;
- (void)resignFirstResponderIfNecessary;
- (_Bool)becomeFirstResponder;
- (void)setAttributedText:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (_Bool)shouldShowPlaceholderLabel;
- (void)setPlaceholderNumberOfLines:(long long)arg1;
- (void)resetTypingAttributes;
- (void)setFont:(id)arg1;
- (void)initPlaceholderLabel;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2 pasteMediaDelegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

