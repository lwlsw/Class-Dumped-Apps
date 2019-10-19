//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WALabel, WASearchResultsSnippetView;

@interface WASearchResultsMessageTableViewCellTextView : UIView
{
    WALabel *_titleLabel;
    WASearchResultsSnippetView *_snippetView;
    WALabel *_dateLabel;
    UIView *_bottomSpacerView;
    UIImageView *_chevronImageView;
}

+ (id)attributedName:(id)arg1 orPushNameWithFont:(id)arg2 forMessage:(id)arg3 searchTokens:(id)arg4;
+ (id)attributedAuthorNameForMessage:(id)arg1 searchTokens:(id)arg2;
+ (id)dateForMessage:(id)arg1;
+ (id)titleForMessage:(id)arg1 searchTokens:(id)arg2 isGroupChat:(_Bool)arg3;
+ (id)dateLabelFont;
+ (id)titleLabelFont;
@property(retain, nonatomic) UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(retain, nonatomic) UIView *bottomSpacerView; // @synthesize bottomSpacerView=_bottomSpacerView;
@property(retain, nonatomic) WALabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) WASearchResultsSnippetView *snippetView; // @synthesize snippetView=_snippetView;
@property(retain, nonatomic) WALabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureWithMessage:(id)arg1 searchTokens:(id)arg2 includeDate:(_Bool)arg3 documentType:(long long)arg4 width:(double)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end
