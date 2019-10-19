//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEProfileBubbleProtocol-Protocol.h"

@class AWEPriorityQueue, AWEUIButton, NSString, TTTAttributedLabel, UIImageView, UITapGestureRecognizer;

@interface AWEUINotificationBarView : UIView <AWEProfileBubbleProtocol>
{
    _Bool _shouldForceBreakLinkWhenTotalExceedOneLine;
    _Bool _disableEnterURL;
    _Bool _disableLocalization;
    NSString *_iconImageName;
    NSString *_linkString;
    NSString *_linkURLString;
    CDUnknownBlockType _gesHandler;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _enterURLBlock;
    UIImageView *_iconImageView;
    TTTAttributedLabel *_contentLabel;
    TTTAttributedLabel *_supplimentaryLinkLabel;
    AWEUIButton *_actionButton;
    NSString *_title;
    NSString *_originalTitle;
    NSString *_originalLinkString;
    UITapGestureRecognizer *_tapGestureRecognizer;
    long long _type;
    UITapGestureRecognizer *_tapGes;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGes; // @synthesize tapGes=_tapGes;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(copy, nonatomic) NSString *originalLinkString; // @synthesize originalLinkString=_originalLinkString;
@property(copy, nonatomic) NSString *originalTitle; // @synthesize originalTitle=_originalTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) AWEUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) TTTAttributedLabel *supplimentaryLinkLabel; // @synthesize supplimentaryLinkLabel=_supplimentaryLinkLabel;
@property(retain, nonatomic) TTTAttributedLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool disableLocalization; // @synthesize disableLocalization=_disableLocalization;
@property(nonatomic) _Bool disableEnterURL; // @synthesize disableEnterURL=_disableEnterURL;
@property(copy, nonatomic) CDUnknownBlockType enterURLBlock; // @synthesize enterURLBlock=_enterURLBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType gesHandler; // @synthesize gesHandler=_gesHandler;
@property(nonatomic) _Bool shouldForceBreakLinkWhenTotalExceedOneLine; // @synthesize shouldForceBreakLinkWhenTotalExceedOneLine=_shouldForceBreakLinkWhenTotalExceedOneLine;
@property(copy, nonatomic) NSString *linkURLString; // @synthesize linkURLString=_linkURLString;
@property(copy, nonatomic) NSString *linkString; // @synthesize linkString=_linkString;
@property(copy, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
- (void).cxx_destruct;
- (void)handleTapGes:(id)arg1;
- (_Bool)checkIfTotalStringExceedsFourLines;
- (_Bool)checkIfTotalStringExceedsOneLine;
- (_Bool)checkIfLinkExceedsSingleLine;
- (_Bool)checkIfTitleExceedsThreeLines;
- (_Bool)checkIfString:(id)arg1 exceedsNumberOfLines:(long long)arg2;
- (id)nonLineBreakedStr:(id)arg1;
- (void)enterURL:(id)arg1;
- (void)didReceiveLanguageChange:(id)arg1;
- (void)commonInit;
- (void)setActionButtonImage:(id)arg1;
- (void)dismiss;
- (void)showOnView:(id)arg1 bottomOffset:(double)arg2;
- (void)addBlurEffectWithStyle:(_Bool)arg1;
- (void)update;
- (void)updateTitle:(id)arg1;
- (void)configIconImage:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 isMusically:(_Bool)arg2 actionType:(long long)arg3;
- (id)initWithTitle:(id)arg1 isMusically:(_Bool)arg2;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @dynamic updateBlock;
@property(copy, nonatomic) CDUnknownBlockType popBlock; // @dynamic popBlock;
@property(copy, nonatomic) CDUnknownBlockType showBlock; // @dynamic showBlock;
@property(copy, nonatomic) CDUnknownBlockType hideBlock; // @dynamic hideBlock;
- (_Bool)updateModel:(id)arg1;
- (void)didHide;
- (void)didPop;
- (void)didShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long priority; // @dynamic priority;
@property(nonatomic) __weak AWEPriorityQueue *queue;
@property(readonly) Class superclass;

@end
