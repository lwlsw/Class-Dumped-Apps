//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTDShareBaseViewController.h"

#import "BTDShareActionDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEAwemeModel, NSString, UIButton, UILabel, UIPanGestureRecognizer, UIScrollView, UIView;

@interface AWEOneLineShareViewController : BTDShareBaseViewController <UIGestureRecognizerDelegate, BTDShareActionDelegate>
{
    _Bool _isBGColorWhite;
    AWEAwemeModel *_awemeModel;
    UIView *_contentBaseView;
    double _viewBaseHeight;
    double _viewHeight;
    UIView *_effectView;
    UILabel *_titleLabel;
    UIButton *_cancelButton;
    UIScrollView *_channelView;
    UIPanGestureRecognizer *_panGes;
    struct CGPoint _lastLocation;
}

@property(nonatomic) struct CGPoint lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(retain, nonatomic) UIScrollView *channelView; // @synthesize channelView=_channelView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) double viewBaseHeight; // @synthesize viewBaseHeight=_viewBaseHeight;
@property(retain, nonatomic) UIView *contentBaseView; // @synthesize contentBaseView=_contentBaseView;
@property(nonatomic) _Bool isBGColorWhite; // @synthesize isBGColorWhite=_isBGColorWhite;
@property(retain, nonatomic) AWEAwemeModel *awemeModel; // @synthesize awemeModel=_awemeModel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dismiss;
- (void)_cancelButtonClicked:(id)arg1;
- (void)_updateBaseViewFrame;
- (id)_maskLayerForRect:(struct CGRect)arg1;
- (id)bottomButtonTitle;
- (id)title;
- (void)shareViewTapped:(id)arg1;
- (id)displayItemList;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_contentViewPanned:(id)arg1;
- (void)_updateChannelView;
- (void)_showWithAnimation;
- (void)viewSafeAreaInsetsDidChange;
- (void)containerFrameDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
