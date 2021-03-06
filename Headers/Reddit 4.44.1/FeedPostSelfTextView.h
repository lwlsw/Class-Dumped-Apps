//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "AttributedLabelDelegate-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"

@class AttributedLabel, NSString, Post;
@protocol FeedPostSelfTextViewDelegate;

@interface FeedPostSelfTextView : BaseView <AttributedLabelDelegate, ObjectObserverProtocol>
{
    _Bool _shouldApplyStyling;
    Post *_post;
    id <FeedPostSelfTextViewDelegate> _delegate;
    AttributedLabel *_textViewLabel;
}

+ (double)bottomTextPadding;
+ (double)topTextPadding;
+ (id)preferredFont;
+ (double)preferredTextWidth;
+ (struct CGSize)calculatedSizeWithData:(id)arg1;
+ (struct CGSize)textViewSizeWithData:(id)arg1;
+ (id)textOfDisplayedContentForPost:(id)arg1;
+ (id)textForLayoutSizeCalculationForPost:(id)arg1;
@property(nonatomic) _Bool shouldApplyStyling; // @synthesize shouldApplyStyling=_shouldApplyStyling;
@property(retain, nonatomic) AttributedLabel *textViewLabel; // @synthesize textViewLabel=_textViewLabel;
@property(nonatomic) __weak id <FeedPostSelfTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (void)theatreViewDidClose;
- (void)postAttributedStringChanged:(id)arg1;
- (void)attributedLabel:(id)arg1 didTapMedia:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)layoutSubviews;
- (void)configureWithData:(id)arg1 andDelegate:(id)arg2 shouldApplyStyling:(_Bool)arg3;
- (void)updateTextViewLabelLinkAttributes;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

