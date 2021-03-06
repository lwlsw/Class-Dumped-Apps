//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QTMButton, UILabel;

@protocol YTMVideoOverlayErrorProtocol <NSObject>
@property(nonatomic) _Bool isPlayOfflineButton;
@property(retain, nonatomic) QTMButton *offlineButton;
@property(retain, nonatomic) QTMButton *retryButton;
@property(readonly, nonatomic) UILabel *messageLabel;
@property(readonly, nonatomic) UILabel *titleLabel;

@optional
@property(nonatomic) double playerControlsExpansionCoefficient;
@property(nonatomic) double playerExpansionCoefficient;
@end

