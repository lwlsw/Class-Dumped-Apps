//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseButton.h>

#import "ObjectObserverProtocol-Protocol.h"

@class CaptureButtonListItem, NSString;
@protocol CaptureButtonListButtonDelegate;

@interface CaptureButtonListButton : BaseButton <ObjectObserverProtocol>
{
    CaptureButtonListItem *_buttonData;
    id <CaptureButtonListButtonDelegate> _delegate;
}

@property(nonatomic) __weak id <CaptureButtonListButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CaptureButtonListItem *buttonData; // @synthesize buttonData=_buttonData;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didTap:(id)arg1;
- (void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)configureLabelText;
- (void)sizeToFit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
