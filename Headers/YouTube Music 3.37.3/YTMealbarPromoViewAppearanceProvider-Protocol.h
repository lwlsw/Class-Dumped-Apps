//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FLXLayout, UIColor;

@protocol YTMealbarPromoViewAppearanceProvider <NSObject>

@optional
@property(readonly, nonatomic) double buttonCornerRadius;
@property(readonly, nonatomic) FLXLayout *noWrapLayout;
@property(readonly, nonatomic) FLXLayout *wrapLayout;
@property(readonly, nonatomic) CDUnknownBlockType messageLabelStyleBlock;
@property(readonly, nonatomic) CDUnknownBlockType titleLabelStyleBlock;
- (UIColor *)backgroundColorForPageStyle:(long long)arg1;
@end

