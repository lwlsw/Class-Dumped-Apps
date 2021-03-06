//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "NFUICellNotifierObserver-Protocol.h"
#import "NFUIDisplayPagePlayButtonViewDelegateProtocol-Protocol.h"
#import "NFUIDownloadObserverDelegate-Protocol.h"
#import "NFUIThumbPickerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class DisplayPageSummaryArtCellViewModel, ModalShimViewController, NFUICompactEpisodeInfoView, NFUIDisplayPageBookmarkView, NFUIDisplayPageButtonBarView, NFUIDisplayPagePlayButtonView, NFUIDownloadButton, NFUIGradientView, NFUILayoutConstraint, NFUILinkLabel, NFUIListButton, NFUIMobileCollectionsToolTipView, NFUIStackButton, NFUIThumbsButton, NFUIThumbsPicker, NFUIThumbsViewController, NSArray, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView, UIViewController;
@protocol NFUIDisplayPageProtocol><NFUIDisplayPageViewModelDelegateProtocol><NFUIDisplayPageCollectionViewProtocol><LinkedViewGestureDelegateProtocol;

@interface NFUIDisplayPageAboveTheFoldSummaryCell : UICollectionViewCell <NFUIDisplayPagePlayButtonViewDelegateProtocol, NFUIThumbPickerDelegate, NFUIDownloadObserverDelegate, UIGestureRecognizerDelegate, NFUICellNotifierObserver>
{
    _Bool _firstPass;
    UIViewController<NFUIDisplayPageProtocol><NFUIDisplayPageViewModelDelegateProtocol><NFUIDisplayPageCollectionViewProtocol><LinkedViewGestureDelegateProtocol> *_delegate;
    DisplayPageSummaryArtCellViewModel *_model;
    UILabel *_synopsisLabel;
    UILabel *_supplementalMessageLabel;
    UIButton *_copyrightInfoButton;
    NFUIListButton *_myListButton;
    NFUIThumbsButton *_thumbRatingButton;
    NFUIDownloadButton *_downloadButton;
    NFUIStackButton *_shareButton;
    ModalShimViewController *_modalShim;
    NFUIMobileCollectionsToolTipView *_tooltipView;
    UIView *_contentWarningContainer;
    NSLayoutConstraint *_contentWarningContainerHeightConstraint;
    NFUILinkLabel *_evidenceStarringLabel;
    NFUILinkLabel *_evidenceCreatorsLabel;
    NFUILinkLabel *_evidenceGenresLabel;
    NFUIDisplayPageBookmarkView *_bookmarkContainer;
    NFUICompactEpisodeInfoView *_episodeInfoContainer;
    NFUIDisplayPageButtonBarView *_buttonContainer;
    NFUIDisplayPagePlayButtonView *_playButtonContainer;
    UIView *_backgroundBlockerView;
    UIImageView *_gradientView;
    NFUILayoutConstraint *_supplementalLabelTopConstraint;
    NFUILayoutConstraint *_bookmarkContainerTopConstraint;
    NFUILayoutConstraint *_episodeInfoContainerTopConstraint;
    NFUILayoutConstraint *_synopsisLabelTopConstraint;
    NFUILayoutConstraint *_synopsisLabelWidthConstraint;
    NFUILayoutConstraint *_castLabelTopConstraint;
    NFUILayoutConstraint *_creatorsLabelTopConstraint;
    NFUILayoutConstraint *_playButtonContainerTopConstraint;
    NFUILayoutConstraint *_buttonContainerTopConstraint;
    NFUILayoutConstraint *_copyrightButtonBottomLayoutConstraint;
    NFUILayoutConstraint *_contentWarningTopConstraint;
    NFUILayoutConstraint *_genresLabelTopConstraint;
    NSLayoutConstraint *_contentWarningTop;
    NSArray *_episodeInfoContainerConstraints;
    NSArray *_bookmarkContainerConstraints;
    NSArray *_playButtonContainerConstraints;
    NFUIThumbsPicker *_thumbPicker;
    NFUIThumbsViewController *_thumbsViewController;
    UIButton *_topTenButton;
    UIImageView *_topTenImage;
    NFUIGradientView *_pureGradientView;
}

@property(nonatomic) __weak NFUIGradientView *pureGradientView; // @synthesize pureGradientView=_pureGradientView;
@property(nonatomic) __weak UIImageView *topTenImage; // @synthesize topTenImage=_topTenImage;
@property(nonatomic) __weak UIButton *topTenButton; // @synthesize topTenButton=_topTenButton;
@property(retain, nonatomic) NFUIThumbsViewController *thumbsViewController; // @synthesize thumbsViewController=_thumbsViewController;
@property(retain, nonatomic) NFUIThumbsPicker *thumbPicker; // @synthesize thumbPicker=_thumbPicker;
@property(nonatomic) _Bool firstPass; // @synthesize firstPass=_firstPass;
@property(retain, nonatomic) NSArray *playButtonContainerConstraints; // @synthesize playButtonContainerConstraints=_playButtonContainerConstraints;
@property(retain, nonatomic) NSArray *bookmarkContainerConstraints; // @synthesize bookmarkContainerConstraints=_bookmarkContainerConstraints;
@property(retain, nonatomic) NSArray *episodeInfoContainerConstraints; // @synthesize episodeInfoContainerConstraints=_episodeInfoContainerConstraints;
@property(retain, nonatomic) NSLayoutConstraint *contentWarningTop; // @synthesize contentWarningTop=_contentWarningTop;
@property(nonatomic) __weak NFUILayoutConstraint *genresLabelTopConstraint; // @synthesize genresLabelTopConstraint=_genresLabelTopConstraint;
@property(nonatomic) __weak NFUILayoutConstraint *contentWarningTopConstraint; // @synthesize contentWarningTopConstraint=_contentWarningTopConstraint;
@property(nonatomic) __weak NFUILayoutConstraint *copyrightButtonBottomLayoutConstraint; // @synthesize copyrightButtonBottomLayoutConstraint=_copyrightButtonBottomLayoutConstraint;
@property(nonatomic) __weak NFUILayoutConstraint *buttonContainerTopConstraint; // @synthesize buttonContainerTopConstraint=_buttonContainerTopConstraint;
@property(nonatomic) __weak NFUILayoutConstraint *playButtonContainerTopConstraint; // @synthesize playButtonContainerTopConstraint=_playButtonContainerTopConstraint;
@property(nonatomic) __weak NFUILayoutConstraint *creatorsLabelTopConstraint; // @synthesize creatorsLabelTopConstraint=_creatorsLabelTopConstraint;
@property(nonatomic) __weak NFUILayoutConstraint *castLabelTopConstraint; // @synthesize castLabelTopConstraint=_castLabelTopConstraint;
@property(nonatomic) __weak NFUILayoutConstraint *synopsisLabelWidthConstraint; // @synthesize synopsisLabelWidthConstraint=_synopsisLabelWidthConstraint;
@property(nonatomic) __weak NFUILayoutConstraint *synopsisLabelTopConstraint; // @synthesize synopsisLabelTopConstraint=_synopsisLabelTopConstraint;
@property(nonatomic) __weak NFUILayoutConstraint *episodeInfoContainerTopConstraint; // @synthesize episodeInfoContainerTopConstraint=_episodeInfoContainerTopConstraint;
@property(nonatomic) __weak NFUILayoutConstraint *bookmarkContainerTopConstraint; // @synthesize bookmarkContainerTopConstraint=_bookmarkContainerTopConstraint;
@property(nonatomic) __weak NFUILayoutConstraint *supplementalLabelTopConstraint; // @synthesize supplementalLabelTopConstraint=_supplementalLabelTopConstraint;
@property(nonatomic) __weak UIImageView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) __weak UIView *backgroundBlockerView; // @synthesize backgroundBlockerView=_backgroundBlockerView;
@property(nonatomic) __weak NFUIDisplayPagePlayButtonView *playButtonContainer; // @synthesize playButtonContainer=_playButtonContainer;
@property(nonatomic) __weak NFUIDisplayPageButtonBarView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(nonatomic) __weak NFUICompactEpisodeInfoView *episodeInfoContainer; // @synthesize episodeInfoContainer=_episodeInfoContainer;
@property(nonatomic) __weak NFUIDisplayPageBookmarkView *bookmarkContainer; // @synthesize bookmarkContainer=_bookmarkContainer;
@property(nonatomic) __weak NFUILinkLabel *evidenceGenresLabel; // @synthesize evidenceGenresLabel=_evidenceGenresLabel;
@property(nonatomic) __weak NFUILinkLabel *evidenceCreatorsLabel; // @synthesize evidenceCreatorsLabel=_evidenceCreatorsLabel;
@property(nonatomic) __weak NFUILinkLabel *evidenceStarringLabel; // @synthesize evidenceStarringLabel=_evidenceStarringLabel;
@property(nonatomic) __weak NSLayoutConstraint *contentWarningContainerHeightConstraint; // @synthesize contentWarningContainerHeightConstraint=_contentWarningContainerHeightConstraint;
@property(nonatomic) __weak UIView *contentWarningContainer; // @synthesize contentWarningContainer=_contentWarningContainer;
@property(retain, nonatomic) NFUIMobileCollectionsToolTipView *tooltipView; // @synthesize tooltipView=_tooltipView;
@property(retain, nonatomic) ModalShimViewController *modalShim; // @synthesize modalShim=_modalShim;
@property(retain, nonatomic) NFUIStackButton *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) __weak NFUIDownloadButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) NFUIThumbsButton *thumbRatingButton; // @synthesize thumbRatingButton=_thumbRatingButton;
@property(retain, nonatomic) NFUIListButton *myListButton; // @synthesize myListButton=_myListButton;
@property(nonatomic) __weak UIButton *copyrightInfoButton; // @synthesize copyrightInfoButton=_copyrightInfoButton;
@property(nonatomic) __weak UILabel *supplementalMessageLabel; // @synthesize supplementalMessageLabel=_supplementalMessageLabel;
@property(nonatomic) __weak UILabel *synopsisLabel; // @synthesize synopsisLabel=_synopsisLabel;
@property(retain, nonatomic) DisplayPageSummaryArtCellViewModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UIViewController<NFUIDisplayPageProtocol><NFUIDisplayPageViewModelDelegateProtocol><NFUIDisplayPageCollectionViewProtocol><LinkedViewGestureDelegateProtocol> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parentScrollPosition:(double)arg1;
- (void)handleNotifierEvent:(id)arg1 withPayload:(id)arg2;
- (id)notifierEventsToObserve;
- (void)addMobileCollectionsToolTip;
- (void)downloadObserver:(id)arg1 observedDownload:(id)arg2 progressChange:(double)arg3 fromProgress:(double)arg4;
- (void)downloadObserver:(id)arg1 observedDownload:(id)arg2 stateChange:(unsigned long long)arg3 fromState:(unsigned long long)arg4;
- (void)downloadObserver:(id)arg1 stoppedObserving:(id)arg2;
- (void)downloadObserver:(id)arg1 startedObserving:(id)arg2;
- (void)prepareForReuse;
- (struct CGSize)calculatedSize:(double)arg1;
- (void)doLayout:(double)arg1;
- (void)restartTapped;
- (void)playTapped;
- (void)downloadButtonPressed:(id)arg1;
- (void)updateViewWithThumbRating:(long long)arg1;
- (void)thumbPickerDidDismiss;
- (void)thumbPickerWillDismiss;
- (void)thumbPickerWillPresent;
- (void)clearThumbRating;
- (void)didSelectThumbsDown;
- (void)didSelectThumbsUp;
- (void)thumbRatingButtonPressed:(id)arg1;
- (_Bool)isLottieThumbs;
- (void)thumbRatingButtonLongPressed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)endResetPresentation:(id)arg1;
- (void)restartButtonPressed:(id)arg1;
- (void)myListButtonPressed:(id)arg1;
- (void)shareButtonPressed:(id)arg1;
- (void)handleLinkTapWithDictionary:(id)arg1;
- (void)addLinksFromPersonArray:(id)arg1 toLinkLabel:(id)arg2 withDescription:(id)arg3;
- (void)setupPlayButtonWithState:(long long)arg1;
- (void)layoutSubviews;
- (void)configureWithData:(id)arg1 withIndexPath:(id)arg2 isLayoutPass:(_Bool)arg3;
- (void)copyrightInfoTapped:(id)arg1;
- (void)toggleCopyrightInfo;
- (id)createShareButton;
- (id)createButtons;
- (void)visitContentWarningWebsite;
- (void)endContentWarningPresentation:(id)arg1;
- (void)contentWarningPressed:(id)arg1;
- (void)configureContentWarningButton:(id)arg1;
- (void)hideContentWarningButton;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

