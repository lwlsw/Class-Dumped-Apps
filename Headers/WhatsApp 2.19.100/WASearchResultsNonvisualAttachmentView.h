//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "WASearchResultsNonvisualAttachmentView-Protocol.h"

@class NSString, UIView;
@protocol WASearchResultsNonvisualAttachmentView;

@interface WASearchResultsNonvisualAttachmentView : UIButton <WASearchResultsNonvisualAttachmentView>
{
    _Bool _highlighted;
    UIView<WASearchResultsNonvisualAttachmentView> *_childView;
}

@property(readonly, nonatomic) UIView<WASearchResultsNonvisualAttachmentView> *childView; // @synthesize childView=_childView;
- (void).cxx_destruct;
- (void)updateBackgroundColor;
- (void)configureWithMessage:(id)arg1 searchTokens:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithChildView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

