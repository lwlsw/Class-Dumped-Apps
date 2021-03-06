//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTextMediaCardView.h"

#import "SCActionMenuRenderableCellContentView-Protocol.h"
#import "SCSendPreviewMediaView-Protocol.h"

@class NSString, UITapGestureRecognizer, UIViewController, UIWindow;
@protocol SCChatCellPublisherGestureDelegate;

@interface SCAdShareMediaCardView : SCTextMediaCardView <SCActionMenuRenderableCellContentView, SCSendPreviewMediaView>
{
    UIViewController<SCChatCellPublisherGestureDelegate> *_parentVC;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIWindow *_mediaFullScreenWindow;
    UIWindow *_originalKeyWindow;
}

- (void).cxx_destruct;
- (id)SCAMediaTypes;
- (void)resetWithOriginalSettings;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (id)backgroundShapePath;
- (id)adShareMediaCardViewModel;
- (void)onTap:(id)arg1;
- (_Bool)shouldApplyThumbnailForLoadedViewModel:(id)arg1;
- (void)thumbnailImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithParentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

