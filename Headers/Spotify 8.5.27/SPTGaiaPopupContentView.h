//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPopupContainerView.h"

#import "SPTThemableView-Protocol.h"

@class NSString, UIImage, UIImageView, UILabel;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTGaiaPopupContentView : SPTPopupContainerView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIImage *_deviceImage;
    long long _type;
    UIImageView *_iconView;
    UILabel *_messageLabel;
    UILabel *_deviceLabel;
}

+ (id)viewWithType:(long long)arg1;
@property(retain, nonatomic) UILabel *deviceLabel; // @synthesize deviceLabel=_deviceLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImage *deviceImage; // @synthesize deviceImage=_deviceImage;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *deviceName;
- (void)updateConstraints;
- (void)applyThemeLayout;
- (void)dealloc;
- (id)setupLabel:(id)arg1;
- (id)setupMessageLabel:(id)arg1;
- (id)initWithGaiaPopupType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

