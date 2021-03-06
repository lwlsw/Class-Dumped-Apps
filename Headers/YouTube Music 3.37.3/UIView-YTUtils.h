//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (YTUtils)
+ (double)yt_contentPadding;
- (struct UIEdgeInsets)yt_safeAreaInsetsForFullscreenPlayerWithInterfaceOrientation:(long long)arg1;
- (struct UIEdgeInsets)yt_safeAreaInsetsForWindow;
- (struct UIEdgeInsets)yt_safeAreaInsetsForBrowseFixesLayoutOnLargeFormFactors;
- (struct UIEdgeInsets)yt_safeAreaInsetsForBrowseFixesLayoutOnAllFormFactors;
- (struct UIEdgeInsets)yt_safeAreaInsetsForBrowseOriginal;
- (struct UIEdgeInsets)yt_safeAreaInsetsForBrowse;
- (struct UIEdgeInsets)yt_safeAreaInsets;
- (void)setAlphaForSelfAndSubviews:(double)arg1;
- (_Bool)isInViewClasses:(id)arg1;
- (_Bool)containsSubview:(id)arg1;
- (_Bool)isOrContainsSubviewOfClasses:(id)arg1;
- (void)removeFromAncestorView:(id)arg1;
- (void)setRoundedCorners:(unsigned long long)arg1 withRadius:(double)arg2;
- (void)explodeAtPoint:(struct CGPoint)arg1 toSize:(double)arg2 withColor:(id)arg3;
- (id)addBorderWithCornerRadius:(double)arg1 borderColor:(id)arg2 borderWidth:(double)arg3;
- (void)setCircularMask:(_Bool)arg1;
- (void)addViewToAccessibleElements:(id)arg1 view:(id)arg2;
- (_Bool)isContainedByWindowHorizontally;
@end

