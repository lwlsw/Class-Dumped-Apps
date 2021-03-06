//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChatTableViewCell.h"

@class CAShapeLayer, SCHeaderStatusView, UILabel, UIView;

@interface SCMessageChatTableViewCell : SCChatTableViewCell
{
    CAShapeLayer *_lineLayer;
    UILabel *_statusMessageHeaderLabel;
    UIView *_immutableViewModelLabel;
    UIView *_payloadView;
    UIView *_metadataView;
    UILabel *_timeLabel;
    UIView *_senderLine;
    SCHeaderStatusView *_headerStatusView;
}

+ (double)senderLineWidth;
@property(retain, nonatomic) SCHeaderStatusView *headerStatusView; // @synthesize headerStatusView=_headerStatusView;
@property(retain, nonatomic) UIView *senderLine; // @synthesize senderLine=_senderLine;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *metadataView; // @synthesize metadataView=_metadataView;
@property(retain, nonatomic) UIView *payloadView; // @synthesize payloadView=_payloadView;
- (void).cxx_destruct;
- (id)thumbnailViewForMediaId:(id)arg1;
- (void)showHeader;
- (void)hideHeader;
- (double)payloadHeight;
- (void)renderMetadata;
- (unsigned long long)_senderLineCornerMask;
- (double)_statusMessageLabelVerticalOffset;
- (double)senderLineHeight;
- (void)renderRoundCorners;
- (void)renderPayload;
- (void)renderBody;
- (id)messageChatViewModel;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)_renderSenderHeader:(_Bool)arg1;
- (void)_setHeaderVisible:(_Bool)arg1 dateHeaderVisible:(_Bool)arg2;
- (void)_renderHeaderWithDateHeader:(_Bool)arg1 withSenderHeader:(_Bool)arg2;
- (void)displayCell;
- (void)prepareForReuse;
- (void)_initImmutableViewModelLabel;
- (void)_initStatusMessageHeaderLabel;
- (void)initPayloadView;
- (void)initMetadataViews;
- (void)initHeader;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 userSession:(id)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

