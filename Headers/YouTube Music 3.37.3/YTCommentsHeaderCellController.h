//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

@class YTActionSheetController;
@protocol YTDataServices, YTInnerTubeUIGlobals, YTResponder, YTTopController;

@interface YTCommentsHeaderCellController : YTInnerTubeCellController
{
    id <YTDataServices> _dataServices;
    id <YTInnerTubeUIGlobals> _globals;
    id <YTResponder> _parentResponder;
    id <YTTopController> _createController;
    YTActionSheetController *_sortMenu;
}

@property(retain, nonatomic) YTActionSheetController *sortMenu; // @synthesize sortMenu=_sortMenu;
@property(nonatomic) __weak id <YTTopController> createController; // @synthesize createController=_createController;
- (id)parentResponder;
- (void).cxx_destruct;
- (void)didTapSortMenu:(id)arg1;
- (void)didTapCreateCommentBox:(id)arg1;
- (void)cellWillBecomeVisibleWithVisibilityEventType:(int)arg1;
- (void)transferStateFromController:(id)arg1;
- (void)setCell:(id)arg1;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1;
- (_Bool)shouldHighlightItem;
- (void)openReplyView;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

@end

