//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageViewModel-Protocol.h"

@class NSString;
@protocol NSObject;

@interface SCBaseChatCellViewModel : NSObject <SCChatMessageViewModel>
{
    _Bool _isFirstViewModel;
    _Bool _isLastViewModel;
    _Bool _topRightCornerIsRounded;
    _Bool _bottomRightCornerIsRounded;
    _Bool _bottomLeftCornerIsRounded;
    int _headerIndex;
    double _height;
    double _dateHeaderHeight;
    double _headerHorizontalMargin;
    double _topMargin;
}

+ (id)attributedStringForStatusMessage:(id)arg1;
+ (id)notificationLabelColor;
+ (id)notificationLabelFont;
+ (id)dateHeaderLabelColor;
+ (id)dateHeaderLabelFont;
@property(nonatomic) int headerIndex; // @synthesize headerIndex=_headerIndex;
@property(nonatomic) _Bool bottomLeftCornerIsRounded; // @synthesize bottomLeftCornerIsRounded=_bottomLeftCornerIsRounded;
@property(nonatomic) _Bool bottomRightCornerIsRounded; // @synthesize bottomRightCornerIsRounded=_bottomRightCornerIsRounded;
@property(nonatomic) _Bool topRightCornerIsRounded; // @synthesize topRightCornerIsRounded=_topRightCornerIsRounded;
@property(readonly, nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(readonly, nonatomic) double headerHorizontalMargin; // @synthesize headerHorizontalMargin=_headerHorizontalMargin;
@property(readonly, nonatomic) double dateHeaderHeight; // @synthesize dateHeaderHeight=_dateHeaderHeight;
@property(nonatomic) _Bool isLastViewModel; // @synthesize isLastViewModel=_isLastViewModel;
@property(nonatomic) _Bool isFirstViewModel; // @synthesize isFirstViewModel=_isFirstViewModel;
@property(nonatomic) double height; // @synthesize height=_height;
- (id)xLogObjectInfo;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isEqual:(id)arg1;
- (void)refreshViewModel;
- (double)intervalFromPrevious;
@property(readonly, nonatomic) _Bool shouldShowTimestamp;
@property(readonly, nonatomic) _Bool shouldShowSenderHeader;
@property(readonly, nonatomic) _Bool shouldShowDateHeader;
- (_Bool)needsExtraSpacingOnTop;
- (_Bool)shouldDisplayBelowFoldInChatForPreviewMode;
@property(readonly, nonatomic) _Bool isUnseenMessageInChat;
@property(readonly, nonatomic) _Bool shouldDisplayBelowFoldInChat;
@property(readonly, nonatomic) NSString *reusableCellIdentifier;
@property(readonly, nonatomic) id <NSObject> identifier;
- (double)bodyTopMargin;
@property(readonly, nonatomic) double dateHeaderVerticalMargin;
@property(readonly, nonatomic) double dateHeaderHorizontalMargin;
- (double)calculateHeight;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)initWithProps:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

