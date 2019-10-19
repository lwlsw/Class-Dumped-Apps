//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IESDragDismissViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEInteractionVoteStickerInfoModel, AWEVoteStickerDetailHeaderView, AWEVoteStickerManager, NSString, UILabel, UIPanGestureRecognizer, UITableView, UITapGestureRecognizer, UIView, UIVisualEffectView;

@interface AWEVoteStickerDetailViewController : UIViewController <IESDragDismissViewControllerProtocol, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _darkMode;
    _Bool _shouldShowLater;
    UIView *baseView;
    AWEInteractionVoteStickerInfoModel *_voteInfo;
    UIVisualEffectView *_effectView;
    AWEVoteStickerDetailHeaderView *_headerView;
    UITableView *_tableView;
    UILabel *_emptyLabel;
    AWEVoteStickerManager *_voteStickerManager;
}

+ (void)initialize;
@property(retain, nonatomic) AWEVoteStickerManager *voteStickerManager; // @synthesize voteStickerManager=_voteStickerManager;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AWEVoteStickerDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) _Bool shouldShowLater; // @synthesize shouldShowLater=_shouldShowLater;
@property(retain, nonatomic) AWEInteractionVoteStickerInfoModel *voteInfo; // @synthesize voteInfo=_voteInfo;
@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView;
- (void).cxx_destruct;
- (double)baseHeight;
- (void)_addMaskToBaseView;
- (void)_layoutBaseViewSubViews;
- (void)_layoutBaseView:(_Bool)arg1;
- (void)optionViewTapped:(id)arg1;
- (void)closeBtnClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)currentOptionID;
- (void)_reloadData;
- (void)_loadMoreData;
- (void)_refreshData;
- (void)showOnView:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIPanGestureRecognizer *dismissPanGesture;
@property(retain, nonatomic) UITapGestureRecognizer *dismissTapGesture;
@property(readonly) unsigned long long hash;
@property(nonatomic) struct CGPoint lastDismissPanGestureLocation;
@property(readonly) Class superclass;

@end
