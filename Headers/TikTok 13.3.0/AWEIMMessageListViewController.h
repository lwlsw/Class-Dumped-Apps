//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEIMGreetingMessageTableViewCellDelegate-Protocol.h"
#import "AWEIMTextMessageTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEIMMessageConversation, AWEIMMessageListViewModel, NSIndexPath, NSMutableArray, NSSet, NSString, UITableView;
@protocol AWEIMMessageListViewControllerDelegate;

@interface AWEIMMessageListViewController : UIViewController <UITableViewDataSource, AWEIMTextMessageTableViewCellDelegate, AWEIMGreetingMessageTableViewCellDelegate, UITableViewDelegate>
{
    _Bool _isLoadingMore;
    _Bool _isMultiselect;
    _Bool _isInCurrentVC;
    _Bool _isFirstMsgRendering;
    NSMutableArray *_selectList;
    UITableView *_tableView;
    AWEIMMessageListViewModel *_listViewModel;
    id <AWEIMMessageListViewControllerDelegate> _delegate;
    AWEIMMessageConversation *_conversation;
    NSIndexPath *_selectVideoCoverCellIndexPath;
    double _lastOffsetY;
    double _lastScrollToBottomTimestamp;
    NSSet *_lastVisibleChatSet;
}

@property(nonatomic) _Bool isFirstMsgRendering; // @synthesize isFirstMsgRendering=_isFirstMsgRendering;
@property(nonatomic) _Bool isInCurrentVC; // @synthesize isInCurrentVC=_isInCurrentVC;
@property(retain, nonatomic) NSSet *lastVisibleChatSet; // @synthesize lastVisibleChatSet=_lastVisibleChatSet;
@property(nonatomic) double lastScrollToBottomTimestamp; // @synthesize lastScrollToBottomTimestamp=_lastScrollToBottomTimestamp;
@property(nonatomic) _Bool isMultiselect; // @synthesize isMultiselect=_isMultiselect;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(nonatomic) double lastOffsetY; // @synthesize lastOffsetY=_lastOffsetY;
@property(retain, nonatomic) NSIndexPath *selectVideoCoverCellIndexPath; // @synthesize selectVideoCoverCellIndexPath=_selectVideoCoverCellIndexPath;
@property(retain, nonatomic) AWEIMMessageConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) __weak id <AWEIMMessageListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWEIMMessageListViewModel *listViewModel; // @synthesize listViewModel=_listViewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *selectList; // @synthesize selectList=_selectList;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)p_setupUI;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)cell:(id)arg1 needSendGreetingEmoticon:(id)arg2;
- (void)messageCell:(id)arg1 readLabelArrowTap:(id)arg2;
- (void)cellLongPressed:(id)arg1;
- (void)addCurrentStickerAtCell:(id)arg1;
- (void)willDeleteCell:(id)arg1;
- (void)bubbleViewTapped:(id)arg1;
- (void)stateViewTapped:(id)arg1;
- (id)messageCell:(id)arg1 secUserIDForUserID:(id)arg2;
- (void)messageCell:(id)arg1 longPressUserAvatar:(id)arg2;
- (void)p_updateLastVisibleSet;
- (void)p_resendMessage:(id)arg1;
- (void)p_endRefreshing:(_Bool)arg1;
- (void)p_loadMore;
- (void)p_tapCellWhileEditingAtIndexPath:(id)arg1;
- (void)scrollToBottomWithOption:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)vm_updateMessageGroupListAfterLoadingMore:(_Bool)arg1;
- (void)vm_updateMessageGroupListWithoutScroll;
- (void)vm_beforeUpdateData;
- (void)vm_reloadDataWithChangeInfo:(id)arg1;
- (void)changeToMultiselect:(_Bool)arg1 animated:(_Bool)arg2;
- (void)changeToMultiselect:(_Bool)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
