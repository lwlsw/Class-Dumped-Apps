//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEProfileHeaderView.h"

@class AWEAnimatedButton, AWEGlobalTranslationSubscription, AWEProfileBindedAppView, AWEProfileHeaderActionController, AWEStarActivityEntranceView, AWEUserProfileCoverView, CAGradientLayer, MASConstraint, NSString, UIButton, UILabel, UIView;

@interface AWECommonProfileHeaderView : AWEProfileHeaderView
{
    _Bool _needTrackStoreEntranceAfterFetchUser;
    _Bool _isRecommendViewShow;
    _Bool _isFirstTimeViewDidLoad;
    _Bool _enableGlobalTranslation;
    _Bool _coverImageViewLoaded;
    _Bool _avatarLoadFailed;
    AWEProfileHeaderActionController *_actionController;
    AWEProfileBindedAppView *_bindedAppView;
    UIView *_challengeView;
    AWEUserProfileCoverView *_coverView;
    UILabel *_idPrefixLabel;
    UILabel *_idLabel;
    UIButton *_liveStaticTag;
    AWEAnimatedButton *_genderAndAgeButton;
    AWEAnimatedButton *_locationBtn;
    AWEAnimatedButton *_schoolBtn;
    AWEAnimatedButton *_unknownButton;
    UILabel *_bioUrlLabel;
    UILabel *_bioEmailLabel;
    double _lastOffset;
    CAGradientLayer *_maskLayer;
    NSString *_translationRawStr;
    AWEGlobalTranslationSubscription *_subscription;
    unsigned long long _previousTranslationState;
    AWEStarActivityEntranceView *_starActivityEntranceView;
    MASConstraint *_sepViewTopConstraint;
}

@property(retain, nonatomic) MASConstraint *sepViewTopConstraint; // @synthesize sepViewTopConstraint=_sepViewTopConstraint;
@property(nonatomic) _Bool avatarLoadFailed; // @synthesize avatarLoadFailed=_avatarLoadFailed;
@property(readonly, nonatomic, getter=isCoverImageViewLoaded) _Bool coverImageViewLoaded; // @synthesize coverImageViewLoaded=_coverImageViewLoaded;
@property(retain, nonatomic) AWEStarActivityEntranceView *starActivityEntranceView; // @synthesize starActivityEntranceView=_starActivityEntranceView;
@property(nonatomic) unsigned long long previousTranslationState; // @synthesize previousTranslationState=_previousTranslationState;
@property(nonatomic) _Bool enableGlobalTranslation; // @synthesize enableGlobalTranslation=_enableGlobalTranslation;
@property(retain, nonatomic) AWEGlobalTranslationSubscription *subscription; // @synthesize subscription=_subscription;
@property(copy, nonatomic) NSString *translationRawStr; // @synthesize translationRawStr=_translationRawStr;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) double lastOffset; // @synthesize lastOffset=_lastOffset;
@property(retain, nonatomic) UILabel *bioEmailLabel; // @synthesize bioEmailLabel=_bioEmailLabel;
@property(retain, nonatomic) UILabel *bioUrlLabel; // @synthesize bioUrlLabel=_bioUrlLabel;
@property(retain, nonatomic) AWEAnimatedButton *unknownButton; // @synthesize unknownButton=_unknownButton;
@property(retain, nonatomic) AWEAnimatedButton *schoolBtn; // @synthesize schoolBtn=_schoolBtn;
@property(retain, nonatomic) AWEAnimatedButton *locationBtn; // @synthesize locationBtn=_locationBtn;
@property(retain, nonatomic) AWEAnimatedButton *genderAndAgeButton; // @synthesize genderAndAgeButton=_genderAndAgeButton;
@property(retain, nonatomic) UIButton *liveStaticTag; // @synthesize liveStaticTag=_liveStaticTag;
@property(retain, nonatomic) UILabel *idLabel; // @synthesize idLabel=_idLabel;
@property(retain, nonatomic) UILabel *idPrefixLabel; // @synthesize idPrefixLabel=_idPrefixLabel;
@property(retain, nonatomic) AWEUserProfileCoverView *coverView; // @synthesize coverView=_coverView;
- (void)setChallengeView:(id)arg1;
- (id)challengeView;
- (void)setIsFirstTimeViewDidLoad:(_Bool)arg1;
- (_Bool)isFirstTimeViewDidLoad;
- (_Bool)isRecommendViewShow;
- (void)setBindedAppView:(id)arg1;
- (id)bindedAppView;
- (_Bool)needTrackStoreEntranceAfterFetchUser;
- (void)setActionController:(id)arg1;
- (id)actionController;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setNeedTrackStoreEntranceAfterFetchUser:(_Bool)arg1;
- (void)translationLoadingView:(id)arg1 requestTranslationStatus:(_Bool)arg2;
- (void)hideRecommendViewAfterUnfollow;
- (void)showRecommendViewAfterFollow;
- (void)recommendBtnClicked;
- (void)updateFansLabel;
- (void)updateNavigationSlidingButtonView:(long long)arg1;
- (void)constructTranspondProfileCoverArray;
- (void)trackEventForBioLinkWithEventName:(id)arg1 linkType:(id)arg2;
- (void)sendEmail;
- (void)openBioUrl;
- (void)updateBioLinkUI;
- (void)p_avatarTapped;
- (void)p_setupInfoButton:(id)arg1;
- (void)p_setGenderAndAgeContent;
- (void)p_syncAndConfigUser;
- (void)p_configTranslationForSignature:(id)arg1;
- (void)p_updateSignature:(id)arg1;
- (void)p_updateSignature;
- (void)updateSocialLinkView;
- (void)idLabelTapped;
- (id)avatarInHeaderView;
- (void)updateBottomViewLayout;
- (void)updateAvatarBorder;
- (void)hideNewGoodsHint;
- (void)handleTapOnContent:(id)arg1;
- (void)showOrHideRecommendView:(_Bool)arg1;
- (void)animateAvatarViewLayerWithShowRecommendView:(_Bool)arg1 duration:(double)arg2;
- (void)updateIntroLabelWithFollowStatus:(long long)arg1;
- (void)updateNameLabel;
- (double)headerViewHeight;
- (void)updateHeaderViewWithLinkModel:(id)arg1;
- (void)configWithUser:(id)arg1 isLogSent:(_Bool)arg2;
- (void)closeUserActivityView;
- (void)layoutSubviews;
- (void)p_updateBannerImageView:(double)arg1 scrollUp:(_Bool)arg2;
- (double)p_recommendControllerHeight;
- (void)p_updateUI;
- (void)p_updateSocialStatisticsButtons;
- (void)p_makeConstraintsForInfoButton:(id)arg1 preButton:(id)arg2 preView:(id)arg3;
- (id)p_setupInfoButtons:(id)arg1;
- (void)p_setupUI;
- (double)signatureTop;
- (void)handleShopEmptyListNotification:(id)arg1;
- (void)setIsRecommendViewShow:(_Bool)arg1;
- (void)dealloc;
- (id)initWithIsCurrentUser:(_Bool)arg1 fromHomepage:(_Bool)arg2;

@end
