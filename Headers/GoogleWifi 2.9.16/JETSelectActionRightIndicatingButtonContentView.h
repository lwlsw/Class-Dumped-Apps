//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETRightButtonTextContentView.h"

@class MDCActivityIndicator, UIImageView;

@interface JETSelectActionRightIndicatingButtonContentView : JETRightButtonTextContentView
{
    MDCActivityIndicator *_indicatorView;
    UIImageView *_overlayView;
    struct CGRect _indicatorFrame;
}

@property(nonatomic) struct CGRect indicatorFrame; // @synthesize indicatorFrame=_indicatorFrame;
@property(retain, nonatomic) UIImageView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) MDCActivityIndicator *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void).cxx_destruct;
- (void)stopIndicatingActivity;
- (void)startIndicatingActivity;

@end
