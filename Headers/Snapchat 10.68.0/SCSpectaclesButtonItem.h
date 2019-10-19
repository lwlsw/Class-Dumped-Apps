//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCNavigationBarButtonItem.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCSpectaclesDeviceStateView, UITapGestureRecognizer;
@protocol SCSpectaclesButtonItemDelegate;

@interface SCSpectaclesButtonItem : SCNavigationBarButtonItem <SCTraceEnabled>
{
    SCSpectaclesDeviceStateView *_deviceStateView;
    id <SCSpectaclesButtonItemDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) __weak id <SCSpectaclesButtonItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateStatusIcon:(id)arg1 device:(id)arg2;
- (double)width;
- (long long)_iconTypeForDevice:(id)arg1 statusCoordinator:(id)arg2;
- (void)_viewPressed;
- (_Bool)isAccessibilityElement;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
