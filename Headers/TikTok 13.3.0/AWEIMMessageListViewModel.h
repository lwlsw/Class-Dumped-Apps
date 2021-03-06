//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEIMMessageConversation, AWEIMMessageListViewController, AWEIMMessageViewModel, NSArray, NSIndexPath, NSString, NSTimer, TIMOMessageReadReceipt;

@interface AWEIMMessageListViewModel : NSObject
{
    long long _type;
    NSIndexPath *_currentGetReadDataIndexPath;
    AWEIMMessageViewModel *_currentGetReadDataViewModel;
    NSArray *_groups;
    AWEIMMessageConversation *_conversation;
    AWEIMMessageListViewController *_listViewController;
    TIMOMessageReadReceipt *_readReceipt;
    NSString *_readTaskToken;
    NSTimer *_refreshReadDataTimer;
}

+ (id)viewModelWithConversation:(id)arg1 listViewController:(id)arg2;
@property(retain, nonatomic) NSTimer *refreshReadDataTimer; // @synthesize refreshReadDataTimer=_refreshReadDataTimer;
@property(copy, nonatomic) NSString *readTaskToken; // @synthesize readTaskToken=_readTaskToken;
@property(retain, nonatomic) TIMOMessageReadReceipt *readReceipt; // @synthesize readReceipt=_readReceipt;
@property(nonatomic) __weak AWEIMMessageListViewController *listViewController; // @synthesize listViewController=_listViewController;
@property(retain, nonatomic) AWEIMMessageConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) AWEIMMessageViewModel *currentGetReadDataViewModel; // @synthesize currentGetReadDataViewModel=_currentGetReadDataViewModel;
@property(retain, nonatomic) NSIndexPath *currentGetReadDataIndexPath; // @synthesize currentGetReadDataIndexPath=_currentGetReadDataIndexPath;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)p_safeRefreshTableViewWithIndexPaths:(id)arg1;
- (void)p_reloadReadReceiptFromServer;
- (void)p_setMsgVMAndGetLocalReadDataAndRefreshUI:(id)arg1;
- (id)p_findShowAlreadyLabelIndexPath;
- (void)p_startRepeatFetchReadStatusTimer;
- (void)p_clearAndCancelGetCurrentReadData;
- (void)p_reloadCurrentReadDataNow;
- (id)p_refreshMsgVMReadData;
- (_Bool)p_updateDataWithMessageGroups:(id)arg1;
- (void)p_groupAddKVO;
- (void)p_cancelRefreshReadDataTimer;
- (id)indexPathOfMsgWithMsgID:(id)arg1;
- (id)messageViewModelAtIndexPath:(id)arg1;
- (id)groupAtSection:(unsigned long long)arg1;
- (void)updateSendingSuccessMessage:(id)arg1;
- (void)updateMessageGroupList:(id)arg1 hasMore:(_Bool)arg2;
- (void)updateMessageGroupListWithoutScroll:(id)arg1;
- (void)reloadMessagesWithChangeInfo:(id)arg1 currentGroupList:(id)arg2;
- (void)dealloc;

@end

