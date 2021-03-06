//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWENewPublishLocationTableViewCellDelegate-Protocol.h"
#import "AWETextInputControllerDelegate-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "AWEZoomTransitionOuterContextProvider-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class AWENewPublishGoodsTableCell, AWENewPublishLocationTableViewCell, AWENewPublishTableCell, AWEPOIInfoModel, AWEPublishNormalPhotoTask, AWEURLModel, AWEVideoPublishInputSuggestionView, NSArray, NSDictionary, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UITableView, UITableViewCell, UITextView, UIView;
@protocol AWETextInputControllerProtocol;

@interface AWEPhotoNewPublishViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate, AWETextInputControllerDelegate, AWEZoomTransitionOuterContextProvider, AWENewPublishLocationTableViewCellDelegate, AWEUserMessage>
{
    _Bool _isDefaultAddLocation;
    _Bool _isPOIFromLocalMedia;
    _Bool _splitDomains;
    _Bool _isOversea;
    NSArray *_observers;
    AWEPublishNormalPhotoTask *_taskV2;
    NSArray *_cellList;
    id <AWETextInputControllerProtocol> _textViewController;
    UITableView *_tableView;
    UITableViewCell *_inputTableViewCell;
    AWENewPublishTableCell *_privateTableViewCell;
    AWENewPublishLocationTableViewCell *_recommendLocationTableViewCell;
    AWENewPublishGoodsTableCell *_goodsTableViewCell;
    UITextView *_titleTextView;
    UIImageView *_coverImageView;
    UIButton *_hashtagButton;
    UIButton *_atButton;
    UILabel *_syncToLabel;
    UIButton *_buttonSyncToToutiao;
    UIButton *_buttonPublish;
    UIView *_keyboardAppearMaskView;
    UIView *_keyboardAppearMidMaskView;
    NSString *_poiDistanceInfo;
    AWEVideoPublishInputSuggestionView *_suggestionView;
    long long _currentFullType;
    NSDictionary *_quickRequestPOILogpb;
    AWEURLModel *_activityURL;
    NSDictionary *_recommendedPoiOrderMap;
    NSString *_insertedPoiId;
    NSMutableDictionary *_poiMapIdDict;
    NSString *_poiEnterMethod;
    AWEPOIInfoModel *_selectedPOI;
}

@property(retain, nonatomic) AWEPOIInfoModel *selectedPOI; // @synthesize selectedPOI=_selectedPOI;
@property(copy, nonatomic) NSString *poiEnterMethod; // @synthesize poiEnterMethod=_poiEnterMethod;
@property(retain, nonatomic) NSMutableDictionary *poiMapIdDict; // @synthesize poiMapIdDict=_poiMapIdDict;
@property(copy, nonatomic) NSString *insertedPoiId; // @synthesize insertedPoiId=_insertedPoiId;
@property(copy, nonatomic) NSDictionary *recommendedPoiOrderMap; // @synthesize recommendedPoiOrderMap=_recommendedPoiOrderMap;
@property(retain, nonatomic) AWEURLModel *activityURL; // @synthesize activityURL=_activityURL;
@property(nonatomic) _Bool isOversea; // @synthesize isOversea=_isOversea;
@property(nonatomic) _Bool splitDomains; // @synthesize splitDomains=_splitDomains;
@property(copy, nonatomic) NSDictionary *quickRequestPOILogpb; // @synthesize quickRequestPOILogpb=_quickRequestPOILogpb;
@property(nonatomic) long long currentFullType; // @synthesize currentFullType=_currentFullType;
@property(retain, nonatomic) AWEVideoPublishInputSuggestionView *suggestionView; // @synthesize suggestionView=_suggestionView;
@property(copy, nonatomic) NSString *poiDistanceInfo; // @synthesize poiDistanceInfo=_poiDistanceInfo;
@property(nonatomic) _Bool isPOIFromLocalMedia; // @synthesize isPOIFromLocalMedia=_isPOIFromLocalMedia;
@property(nonatomic) _Bool isDefaultAddLocation; // @synthesize isDefaultAddLocation=_isDefaultAddLocation;
@property(retain, nonatomic) UIView *keyboardAppearMidMaskView; // @synthesize keyboardAppearMidMaskView=_keyboardAppearMidMaskView;
@property(retain, nonatomic) UIView *keyboardAppearMaskView; // @synthesize keyboardAppearMaskView=_keyboardAppearMaskView;
@property(retain, nonatomic) UIButton *buttonPublish; // @synthesize buttonPublish=_buttonPublish;
@property(retain, nonatomic) UIButton *buttonSyncToToutiao; // @synthesize buttonSyncToToutiao=_buttonSyncToToutiao;
@property(retain, nonatomic) UILabel *syncToLabel; // @synthesize syncToLabel=_syncToLabel;
@property(retain, nonatomic) UIButton *atButton; // @synthesize atButton=_atButton;
@property(retain, nonatomic) UIButton *hashtagButton; // @synthesize hashtagButton=_hashtagButton;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UITextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) AWENewPublishGoodsTableCell *goodsTableViewCell; // @synthesize goodsTableViewCell=_goodsTableViewCell;
@property(retain, nonatomic) AWENewPublishLocationTableViewCell *recommendLocationTableViewCell; // @synthesize recommendLocationTableViewCell=_recommendLocationTableViewCell;
@property(retain, nonatomic) AWENewPublishTableCell *privateTableViewCell; // @synthesize privateTableViewCell=_privateTableViewCell;
@property(retain, nonatomic) UITableViewCell *inputTableViewCell; // @synthesize inputTableViewCell=_inputTableViewCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <AWETextInputControllerProtocol> textViewController; // @synthesize textViewController=_textViewController;
@property(retain, nonatomic) NSArray *cellList; // @synthesize cellList=_cellList;
@property(retain, nonatomic) AWEPublishNormalPhotoTask *taskV2; // @synthesize taskV2=_taskV2;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)startTransitionAnimation;
- (void)enqueuePublishTask;
- (void)p_publish;
- (void)p_publishIfNeeded;
- (void)locationCellRefreshWithLocationModel:(id)arg1;
- (void)showSearchLocationViewControllerIfNeeded;
- (void)trackChoosePOI:(id)arg1 withSearchKey:(id)arg2 isRecommend:(_Bool)arg3 isOversea:(_Bool)arg4 index:(long long)arg5 logPassback:(id)arg6;
- (void)p_goodsCellClicked;
- (void)displayUnallowMsg;
- (void)refreshWithLocationModel:(id)arg1 duplicatePOIMeansCancel:(_Bool)arg2;
- (void)refreshWithGoodsTitle:(id)arg1;
- (void)p_updatePOIRecommendCellWithPOIs:(id)arg1;
- (id)p_localRecommendPoiWithServerResult:(id)arg1;
- (void)quickRecommendPOI;
- (void)didSelectSearch;
- (void)didSelectPOI:(id)arg1 atIndex:(long long)arg2;
- (void)didFinishBindPhone;
- (id)zoomTransitionStartViewForOffset:(long long)arg1;
- (id)publishViewModel;
- (void)p_asyncGoodsEditInfoNotification:(id)arg1;
- (void)configSyncSwitchButton:(id)arg1;
- (void)p_addObservers;
- (void)requestBindToToutiaoWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isBindedToutiao;
- (_Bool)needShowSyncToToutiao;
- (_Bool)hasGoodsOrderShare;
- (_Bool)showECommerce;
- (id)tableFooterView;
- (void)textInputDismissCompletion;
- (void)textInput:(id)arg1 didReplaceTextInRange:(struct _NSRange)arg2 withText:(id)arg3;
- (void)textInput:(id)arg1 didRequestSuggestion:(id)arg2 hitBlackList:(_Bool)arg3;
- (void)textInputDidNeedClosingSuggestion:(id)arg1;
- (void)textInputDidStartLoadingSuggestions:(id)arg1;
- (void)textInputValueChanged:(id)arg1;
- (void)textInputDidExceedMaxUserCount:(id)arg1;
- (void)textInputDidExceedMaxLength:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)closeWithAnimated:(_Bool)arg1;
- (void)p_onKeyboardWillHideNotification:(id)arg1;
- (void)p_onKeyboardWillShowNotification:(id)arg1;
- (void)p_dismissKeyboard:(id)arg1;
- (void)p_publishButtonClicked;
- (id)userRelatedKeyWithKey:(id)arg1;
- (void)saveUserRelatedBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)loadUserRelatedBoolForKey:(id)arg1;
- (void)p_privateCellClicked;
- (void)didSelectPrivacy:(unsigned long long)arg1;
- (void)p_showLocationPicker;
- (void)p_locationCellClicked;
- (_Bool)userWouldLikeToShareToToutiao;
- (void)buttonSyncToToutiaoClicked;
- (void)p_coverImageViewClicked;
- (void)p_hashtagButtonClicked;
- (void)p_atButtonClicked;
- (id)blankTableViewCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldSyncToToutiao;
- (_Bool)prefersStatusBarHidden;
- (void)setupNavigationBar;
- (void)setupUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

