//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMCollectionViewCell.h"

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTLongPressProtocol-Protocol.h"

@class NSString, QTMButton, UIImageView, UILongPressGestureRecognizer, YTFormattedStringLabel, YTIHistorySuggestionRenderer, YTISearchSuggestionRenderer;
@protocol YTResponder;

@interface YTMSearchSuggestionCell : YTMCollectionViewCell <YTCollectionViewCellProtocol, YTLongPressProtocol>
{
    YTFormattedStringLabel *_suggestionLabel;
    UIImageView *_iconImageView;
    QTMButton *_modifyQueryButton;
    YTISearchSuggestionRenderer *_searchSuggestionRenderer;
    YTIHistorySuggestionRenderer *_historySuggestionRenderer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    id <YTResponder> _parentResponder;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)didPressModifyQuery;
- (id)modifyQueryButton;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)setEntry:(id)arg1;
- (id)entry;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
