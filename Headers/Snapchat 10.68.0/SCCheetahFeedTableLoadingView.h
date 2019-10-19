//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCFeedLoadingViewProtocol-Protocol.h"

@class NSString, SCLoadingIndicatorView, SCScopedAccess, UILabel, UITapGestureRecognizer;
@protocol SCFeedTableLoadingViewDelegate;

@interface SCCheetahFeedTableLoadingView : UIView <SCFeedLoadingViewProtocol>
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    SCScopedAccess *_friendsFeedLoadingStatusAccess;
    UILabel *_failedLabel;
    SCLoadingIndicatorView *_loadingIndicator;
    _Bool _loadingHidden;
    _Bool _isOnscreen;
    id <SCFeedTableLoadingViewDelegate> _delegate;
}

+ (id)textColor;
@property(nonatomic) _Bool isOnscreen; // @synthesize isOnscreen=_isOnscreen;
@property(nonatomic) __weak id <SCFeedTableLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)setLoadingIndicatorHidden:(_Bool)arg1;
- (void)updateViews;
- (void)layoutSubviews;
- (id)initWithLoadingStatusAccess:(id)arg1;
- (id)failedLabel;
- (id)loadingIndicator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
