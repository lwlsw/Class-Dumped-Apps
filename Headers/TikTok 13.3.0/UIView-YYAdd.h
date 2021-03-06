//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIViewController;

@interface UIView (YYAdd)
@property(readonly, nonatomic) struct CGPoint boundsCenter;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double maxY;
@property(nonatomic) double maxX;
@property(nonatomic) double y;
@property(nonatomic) double x;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromViewOrWindow:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toViewOrWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromViewOrWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toViewOrWindow:(id)arg2;
@property(readonly, nonatomic) double visibleAlpha;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)removeAllSubviews;
- (void)setLayerShadow:(id)arg1 offset:(struct CGSize)arg2 radius:(double)arg3;
- (id)snapshotPDF;
- (id)snapshotImageAfterScreenUpdates:(_Bool)arg1;
- (id)snapshotImage;
@end

