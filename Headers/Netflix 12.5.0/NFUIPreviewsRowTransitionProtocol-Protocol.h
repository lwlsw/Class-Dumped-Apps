//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NFUIPreviewsEntity, NFUITitleTreatmentView, UIImage, UIImageViewAligned, UIView;

@protocol NFUIPreviewsRowTransitionProtocol <NSObject>
@property(retain, nonatomic) UIView *transitioningTitleTreatmentView;
@property(retain, nonatomic) UIImage *transitioningPanelArtImage;
- (struct CGRect)sourceTitleTreamentRect;
- (UIImage *)sourceTitleTreatmentImage;
- (NFUITitleTreatmentView *)sourceTitleTreatmentView;
- (struct CGRect)sourcePanelArtRect;
- (UIImage *)sourcePanelArtImage;
- (UIImageViewAligned *)sourcePanelArtView;
- (NFUIPreviewsEntity *)sourcePreviewsEntity;
@end

