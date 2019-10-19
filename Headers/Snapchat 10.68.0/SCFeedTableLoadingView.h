//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCFeedLoadingViewProtocol-Protocol.h"

@class FLAnimatedImageView, NSString, SCLazy, UILabel, UITapGestureRecognizer;
@protocol SCFeedTableLoadingViewDelegate;

@interface SCFeedTableLoadingView : UIView <SCFeedLoadingViewProtocol>
{
    SCLazy *_friendsFeedLoadingStatusManager;
    _Bool _isOnscreen;
    _Bool _boxHidden;
    id <SCFeedTableLoadingViewDelegate> _delegate;
    UILabel *_label;
    unsigned long long _labelConstraintsType;
    FLAnimatedImageView *_rotatingSnapBox;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (id)textColor;
@property(nonatomic) _Bool boxHidden; // @synthesize boxHidden=_boxHidden;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) FLAnimatedImageView *rotatingSnapBox; // @synthesize rotatingSnapBox=_rotatingSnapBox;
@property(nonatomic) unsigned long long labelConstraintsType; // @synthesize labelConstraintsType=_labelConstraintsType;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool isOnscreen; // @synthesize isOnscreen=_isOnscreen;
@property(nonatomic) __weak id <SCFeedTableLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)setRotatingSnapBoxHidden:(_Bool)arg1;
- (void)updateLabelConstraintsWithType:(unsigned long long)arg1;
- (void)updateViews;
- (void)initRotatingSnapBox;
- (id)initWithFriendsFeedLoadingStatusManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
