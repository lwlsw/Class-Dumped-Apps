//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMultiSnapStateHandler, SCMultiSnapV2CollectionViewController, SCPreviewEphemeralMediaList, SCSnapCommonLoggingParameters, UIView;
@protocol SCMovableView><SCVideoTrackedView, SCMultiSnapV2PlayerHandler, SCPreviewFeatureMultiSnapDelegate><SCPreviewFeatureParentViewControllerAccessing, SCTouchControllable;

@protocol SCPreviewFeatureMultiSnap <NSObject>
@property(readonly, nonatomic) SCMultiSnapStateHandler *multiSnapStateHandler;
@property(readonly, nonatomic) SCMultiSnapV2CollectionViewController *multiSnapV2ViewController;
@property(nonatomic) __weak id <SCPreviewFeatureMultiSnapDelegate><SCPreviewFeatureParentViewControllerAccessing> delegate;
- (void)prepareMultiSnapEphemeralMediaList:(SCPreviewEphemeralMediaList *)arg1 withUserSendStartTimestamp:(double)arg2;
- (void)prepareMultiSnapEphemeralMediaList:(SCPreviewEphemeralMediaList *)arg1;
- (void)multiSnapV2FirstFrameRendered;
- (void)multiSnapV2FinishRewindingView:(UIView<SCMovableView><SCVideoTrackedView> *)arg1;
- (void)multiSnapV2FinishTouchControl:(id <SCTouchControllable>)arg1;
- (void)multiSnapV2DidPlayToVideoIndex:(long long)arg1 lastIndex:(long long)arg2;
- (void)saveCurrentOverlayItemsToMultiSnapV2AtIndex:(long long)arg1 shouldUpdateThumbnails:(_Bool)arg2;
- (_Bool)multiSnapV2HasAudioVisualEdits;
- (void)updateThumbnailsForV2;
- (void)multiSnapV2SegmentStateChangedShouldUpdateThumbnails:(_Bool)arg1;
- (void)exportMultiSnapV2ToURLWithCompletion:(void (^)(NSURL *, NSError *))arg1;
- (void)saveMultiSnapV2ToCameraRollWithExportSnapToURLCompletion:(void (^)(NSError *))arg1 saveToSnapAlbumCompletion:(void (^)(NSError *))arg2;
- (void)setupMultiSnapV2WithPlayerHandler:(id <SCMultiSnapV2PlayerHandler>)arg1;
- (void)updateMultiSnapCommonLoggingParameters:(SCSnapCommonLoggingParameters *)arg1;
@end
