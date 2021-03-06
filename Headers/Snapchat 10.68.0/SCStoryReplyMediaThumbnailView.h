//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCChatSingleMediaThumbnailView-Protocol.h"

@class SCBaseMediaThumbnailView, SCMediaStoryChromeView, SCStoryReplyMediaMessageThumbnailViewModel, TTTAttributedLabel;

@interface SCStoryReplyMediaThumbnailView : UIView <SCChatSingleMediaThumbnailView>
{
    TTTAttributedLabel *_chatTextLabel;
    SCMediaStoryChromeView *_storyChromeView;
    SCStoryReplyMediaMessageThumbnailViewModel *_viewModel;
    SCBaseMediaThumbnailView *_baseMediaThumbnailView;
}

@property(readonly, nonatomic) SCBaseMediaThumbnailView *baseMediaThumbnailView; // @synthesize baseMediaThumbnailView=_baseMediaThumbnailView;
- (void).cxx_destruct;
- (void)resetWithOriginalSettings;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)prepareVideoIfNecessary;
- (_Bool)fullScreenIsShown;
- (void)dismissFullScreenView;
- (void)resetPlayer;
- (void)resetContents;
- (struct CGSize)thumbnailSize;
- (void)setThumbnailSize:(struct CGSize)arg1;
- (id)mediaId;
- (void)setMediaViewModel:(id)arg1;
- (void)_initStoryChromeView;
- (void)_initChatTextLabel;
- (void)_initBaseMediaThumbnailViewWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)initWithParentVC:(id)arg1 delegate:(id)arg2;

@end

