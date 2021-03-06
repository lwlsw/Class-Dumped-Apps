//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "YTPhotoUploadObserverDelegate.h"
#import "YTRendererController.h"
#import "YTUserChangedObserver.h"
#import "YTVariableHeightHeaderViewControllerAttachedHeader.h"

@class GIMMe, NSString, YTIActiveAccountHeaderRenderer, YTPhotoUploadController, YTThumbnailController;

@interface YTAccountHeaderViewController : UIViewController <YTPhotoUploadObserverDelegate, YTUserChangedObserver, YTVariableHeightHeaderViewControllerAttachedHeader, YTRendererController>
{
    YTIActiveAccountHeaderRenderer *_model;
    YTPhotoUploadController *_photoUploadController;
    YTThumbnailController *_avatarController;
    YTThumbnailController *_bannerController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)didEndAvatarPhotoUploadWithStatus:(long long)arg1 image:(id)arg2;
- (void)didTapManageAccount;
- (void)didTapAvatarTarget;
- (void)didTapTitleTarget;
- (void)didTapUploadTarget;
- (_Bool)isAttachedToPage;
- (void)unpinURL:(id)arg1;
- (void)savePinnedURL:(id)arg1;
- (void)loadOfflineImages;
- (void)userWillChange;
- (void)loadWithModel:(id)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

