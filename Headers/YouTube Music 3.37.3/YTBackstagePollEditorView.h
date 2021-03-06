//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTBackstagePollEditorChoiceViewDelegate-Protocol.h"

@class FLXLayout, NSMutableArray, NSString, YTIPollEditorInfo, YTPollEditorChoiceStackView, YTQTMButton;
@protocol YTBackstagePollEditorViewDelegate;

@interface YTBackstagePollEditorView : UIView <YTBackstagePollEditorChoiceViewDelegate>
{
    double _preferredMaxLayoutWidth;
    id <YTBackstagePollEditorViewDelegate> _delegate;
    UIView *_hairline;
    YTPollEditorChoiceStackView *_pollChoicesView;
    YTQTMButton *_addPollChoiceButton;
    FLXLayout *_layout;
    YTIPollEditorInfo *_renderer;
}

@property(retain, nonatomic) YTIPollEditorInfo *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) FLXLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) YTQTMButton *addPollChoiceButton; // @synthesize addPollChoiceButton=_addPollChoiceButton;
@property(retain, nonatomic) YTPollEditorChoiceStackView *pollChoicesView; // @synthesize pollChoicesView=_pollChoicesView;
@property(retain, nonatomic) UIView *hairline; // @synthesize hairline=_hairline;
@property(nonatomic) __weak id <YTBackstagePollEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
- (void).cxx_destruct;
- (id)pollEditorChoiceView;
- (void)didTapAddPollChoiceButton;
- (void)textFieldDidChange;
- (void)didTapRemoveButton:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)root;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) NSMutableArray *optionsArray;
@property(readonly, nonatomic) _Bool isContentValid;
- (void)setPollEditorInfo:(id)arg1 withOptions:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

