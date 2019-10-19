//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

#import "WAMediaBrowserThumbnailBarDelegate-Protocol.h"

@class NSIndexPath, NSString, UIBarButtonItem, WAGenericMediaManager, WAMediaBrowserThumbnailBar;
@protocol WAGenericMediaBrowserToolbarDelegate;

@interface WAGenericMediaBrowserToolbar : UIToolbar <WAMediaBrowserThumbnailBarDelegate>
{
    UIBarButtonItem *_pauseButton;
    UIBarButtonItem *_playButton;
    UIBarButtonItem *_flexibleSpaceItem;
    WAMediaBrowserThumbnailBar *_thumbnailBar;
    struct CGSize _prevSize;
    long long _playbackState;
}

+ (double)portraitHeight;
+ (double)landscapeHeight;
+ (double)toolbarHeight;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isScrubbing) _Bool scrubbing;
@property(readonly, nonatomic) double scrollVelocity;
- (void)setHighlightedIndexPath:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) NSIndexPath *highlightedIndexPath;
@property(readonly, nonatomic, getter=isThumbnailBarHidden) _Bool thumbnailBarHidden;
@property(readonly, nonatomic) WAGenericMediaManager *genericMediaManager;
- (void)mediaBrowserThumbnailBarDidEndScrubbing:(id)arg1;
- (void)mediaBrowserThumbnailBarDidBeginScrubbing:(id)arg1;
- (void)mediaBrowserThumbnailBar:(id)arg1 didScrollToIndexPath:(id)arg2;
- (void)playButtonTapped:(id)arg1;
- (void)pauseButtonTapped:(id)arg1;
- (void)updateItemsAnimated:(_Bool)arg1;
- (void)relayoutButtons;
- (void)layoutSubviews;
- (void)updateConstraints;
- (double)toolbarHeightForLayoutWidth:(double)arg1;
- (double)preferredHeightForLayoutWidth:(double)arg1;
- (id)initWithGenericMediaManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WAGenericMediaBrowserToolbarDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
