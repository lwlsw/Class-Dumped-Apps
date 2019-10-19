//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NFUIFullPlayerViewController, NFUIFullPlayerViewModel, NFUIPlaybackEndedEvent, NSDictionary, NSError, PlaybackRequest, UIControl, UIViewController;
@protocol NFUIFullPlayerVideoModel;

@protocol NFUIFullPlayerViewControllerDelegate <NSObject>

@optional
@property(readonly, nonatomic) NSDictionary *aspectDetails;
- (void)setPlayerViewControllerNeedsRefresh:(_Bool)arg1;
- (void)shareVideoWithModel:(NFUIFullPlayerViewModel *)arg1 playbackRequest:(PlaybackRequest *)arg2 sender:(UIControl *)arg3;
- (void)didSelectMdxTarget:(struct NSObject *)arg1;
- (_Bool)shouldConnectToMdxTarget:(struct NSObject *)arg1;
- (id)advisoryController;
- (void)presentModalPanel:(UIViewController *)arg1;
- (UIViewController *)episodePickerWithCompletion:(void (^)(PlaybackRequest *))arg1;
- (void)startPlaybackWithRequest:(PlaybackRequest *)arg1;
- (double)playbackStreamLimit:(_Bool)arg1;
- (void)postPlayOverlayControllerForModel:(id <NFUIFullPlayerVideoModel>)arg1 completion:(void (^)(id <NFUIPostPlayOverlayControllerProtocol>))arg2;
- (void)postPlayControllerForModel:(id <NFUIFullPlayerVideoModel>)arg1 completion:(void (^)(id <NFUIPostPlayControllerProtocol>))arg2;
- (void)fullPlayerViewController:(NFUIFullPlayerViewController *)arg1 showMdxTargetMenu:(id)arg2;
- (void)fullPlayerViewController:(NFUIFullPlayerViewController *)arg1 dismiss:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)fullPlayerViewController:(NFUIFullPlayerViewController *)arg1 playbackEndedWithError:(NSError *)arg2;
- (void)fullPlayerViewController:(NFUIFullPlayerViewController *)arg1 playbackEndedWithEvent:(NFUIPlaybackEndedEvent *)arg2;
- (void)fullPlayerViewController:(NFUIFullPlayerViewController *)arg1 saveBookmarkPosition:(double)arg2;
@end
