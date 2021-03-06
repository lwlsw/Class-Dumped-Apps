//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCActionModel, SCGradientView, SCLazy, SCNetworkImageView, UIImageView, UILabel, UIView, UIVisualEffectView;
@protocol SCActionHandling, SCImageDownloading;

@interface SCUnifiedProfileStoriesCarouselSnapCell : UICollectionViewCell <SCActionable, SCViewModelConfigurable>
{
    UIView *_thumbnailContainerView;
    UIVisualEffectView *_thumbnailBlurView;
    SCNetworkImageView *_thumbnailImageView;
    UIVisualEffectView *_viewCountBlurBackgroundView;
    UILabel *_viewCountLabel;
    UIImageView *_viewCountIconImageView;
    SCGradientView *_bottomGradientView;
    SCLazy *_screenshotCountLabel;
    SCLazy *_screenshotCountBlurBackgroundView;
    SCLazy *_screenshotCountIconImageView;
    SCLazy *_topGradientView;
    SCLazy *_timestampLabel;
    SCLazy *_addSnapLabel;
    SCLazy *_addSnapImageView;
    SCLazy *_loadingSpinnerView;
    SCLazy *_tapToRetryImageView;
    SCLazy *_statusLabel;
    SCActionModel *_tapActionModel;
    SCActionModel *_longPressActionModel;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_handleLongPressAction:(id)arg1;
- (void)_handleTapAction:(id)arg1;
- (void)setAddSnapCell;
- (void)layoutSubviews;
- (id)statusLabel;
- (id)tapToRetryImageView;
- (id)loadingSpinnerView;
- (id)addSnapImageView;
- (id)addSnapLabel;
- (id)timestampLabel;
- (id)topGradientView;
- (id)screenshotCountIconImageView;
- (id)screenshotCountBlurBackgroundView;
- (id)screenshotCountLabel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

