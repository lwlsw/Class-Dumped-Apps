//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NFUIDisplayPageBookmarkView, NFUILabel, NFUIPipContinueWatchingCellViewModel, NSTimer, UIImageView, UITapGestureRecognizer;
@protocol NFUIPipContinueWatchingViewControllerProtocol;

@interface NFUIPipContinueWatchingCollectionViewCell : UICollectionViewCell
{
    _Bool _isFirstCell;
    _Bool _hasImageBookmark;
    _Bool _animating;
    _Bool _deferredAnimate;
    NFUIPipContinueWatchingCellViewModel *_model;
    id <NFUIPipContinueWatchingViewControllerProtocol> _delegate;
    UIImageView *_imageView;
    NFUILabel *_titleLabel;
    NFUILabel *_timeRemainingLabel;
    NFUILabel *_metaLabel;
    UIImageView *_openCloseImage;
    NFUIDisplayPageBookmarkView *_bookmarkContainer;
    UITapGestureRecognizer *_tapGesture;
    NSTimer *_timer;
    unsigned long long _currentImageIndex;
}

@property(nonatomic) _Bool deferredAnimate; // @synthesize deferredAnimate=_deferredAnimate;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool hasImageBookmark; // @synthesize hasImageBookmark=_hasImageBookmark;
@property(nonatomic) unsigned long long currentImageIndex; // @synthesize currentImageIndex=_currentImageIndex;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) NFUIDisplayPageBookmarkView *bookmarkContainer; // @synthesize bookmarkContainer=_bookmarkContainer;
@property(retain, nonatomic) UIImageView *openCloseImage; // @synthesize openCloseImage=_openCloseImage;
@property(retain, nonatomic) NFUILabel *metaLabel; // @synthesize metaLabel=_metaLabel;
@property(retain, nonatomic) NFUILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(retain, nonatomic) NFUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool isFirstCell; // @synthesize isFirstCell=_isFirstCell;
@property(nonatomic) __weak id <NFUIPipContinueWatchingViewControllerProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NFUIPipContinueWatchingCellViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)rotateImages;
- (void)rotateOpenCloseWithDegrees:(double)arg1 restartTimer:(_Bool)arg2;
- (void)rotateOpenCloseWithDegrees:(double)arg1;
- (void)checkOpenCloseState;
- (void)openCloseTapped:(id)arg1;
- (void)prepareForReuse;
- (void)cancelTimer;
- (void)resetTimer;
- (void)populateFields;
- (void)setOpenCloseImageRotation:(double)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
