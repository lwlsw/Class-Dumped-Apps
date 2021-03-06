//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCAsyncAssetImageView, SCDiscoverFeedLogoOverlayViewModel, SCGradientView, SCNetworkImageView;
@protocol SCImageDownloading;

@interface SCDiscoverFeedLogoOverlayView : UIView
{
    SCNetworkImageView *_logoImageView;
    SCGradientView *_logoBackgroundGradientView;
    SCAsyncAssetImageView *_logoRightCaret;
    SCDiscoverFeedLogoOverlayViewModel *_viewModel;
    id <SCImageDownloading> _imageDownloader;
    double _bannerHeight;
}

@property(nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SCDiscoverFeedLogoOverlayViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_updateBackgroundViewForCurrentViewModel;
- (struct CGRect)_resizedFrameForAspectRatio:(id)arg1;
- (void)_updateLogoFrameForCurrentLogoImage:(id)arg1;
- (void)_positionLogoHorizontallyBasedOnLogoImageSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

