//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSSet, NSString, WALabel;

@interface WASearchResultsSnippetView : UIView
{
    NSString *_snippet;
    NSAttributedString *_author;
    NSSet *_searchTokens;
    double _width;
    WALabel *_snippetLabel;
}

+ (id)font;
- (void).cxx_destruct;
- (id)prefix;
- (void)configureWithSnippet:(id)arg1 author:(id)arg2 searchTokens:(id)arg3 width:(double)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

