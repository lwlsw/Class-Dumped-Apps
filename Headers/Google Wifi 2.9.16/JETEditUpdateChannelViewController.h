//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

#import "GOONavigationCustomization-Protocol.h"
#import "JETSavableViewController-Protocol.h"

@class GOONavigationStyle, JETSelectActionRightButtonContentViewObject, NSSet, NSString, UIImage, UIScrollView, UIView;

@interface JETEditUpdateChannelViewController : JETGroupAwareCollectionViewController <GOONavigationCustomization, JETSavableViewController>
{
    _Bool _closed;
    unsigned long long _updateChannel;
    UIImage *_itemSelectedImage;
    UIImage *_itemNotSelectedImage;
    JETSelectActionRightButtonContentViewObject *_stableChannelRadioButton;
    JETSelectActionRightButtonContentViewObject *_betaChannelRadioButton;
    JETSelectActionRightButtonContentViewObject *_developerChannelRadioButton;
}

@property(retain, nonatomic) JETSelectActionRightButtonContentViewObject *developerChannelRadioButton; // @synthesize developerChannelRadioButton=_developerChannelRadioButton;
@property(retain, nonatomic) JETSelectActionRightButtonContentViewObject *betaChannelRadioButton; // @synthesize betaChannelRadioButton=_betaChannelRadioButton;
@property(retain, nonatomic) JETSelectActionRightButtonContentViewObject *stableChannelRadioButton; // @synthesize stableChannelRadioButton=_stableChannelRadioButton;
@property(retain, nonatomic) UIImage *itemNotSelectedImage; // @synthesize itemNotSelectedImage=_itemNotSelectedImage;
@property(retain, nonatomic) UIImage *itemSelectedImage; // @synthesize itemSelectedImage=_itemSelectedImage;
@property(nonatomic) unsigned long long updateChannel; // @synthesize updateChannel=_updateChannel;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
- (void).cxx_destruct;
- (void)updateRadioButtonImages;
- (id)updateChannelString;
- (unsigned long long)updateChannelForDevice:(id)arg1;
- (void)close;
- (void)handleRadioButtonTapped:(unsigned long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (void)cancelButtonTapped;
- (void)saveButtonTapped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end

