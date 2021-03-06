//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, SCLoadingIndicatorView, UIButton, UIImageView, UILabel;
@protocol SCLagunaSettingsHomeWifiNetworkCellDelegate;

@interface SCLagunaSettingsHomeWifiNetworkCell : UITableViewCell
{
    id <SCLagunaSettingsHomeWifiNetworkCellDelegate> _delegate;
    NSString *_networkName;
    UIImageView *_wifiIconView;
    UILabel *_networkNameLabel;
    UILabel *_connectionStateLabel;
    SCLoadingIndicatorView *_loadingIndicator;
    UIButton *_clearButton;
}

@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) SCLoadingIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UILabel *connectionStateLabel; // @synthesize connectionStateLabel=_connectionStateLabel;
@property(retain, nonatomic) UILabel *networkNameLabel; // @synthesize networkNameLabel=_networkNameLabel;
@property(retain, nonatomic) UIImageView *wifiIconView; // @synthesize wifiIconView=_wifiIconView;
@property(copy, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(nonatomic) __weak id <SCLagunaSettingsHomeWifiNetworkCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_hideLoadingIndicator;
- (void)_showLoadingIndicator;
- (void)_hideWifiIcon;
- (void)_showWifiIcon;
- (void)_hideConnectionStateInCell;
- (void)_showConnectionStateInCell:(id)arg1 textColor:(id)arg2;
- (void)_removeButtonPressed;
- (void)setState:(unsigned long long)arg1 networkName:(id)arg2;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

