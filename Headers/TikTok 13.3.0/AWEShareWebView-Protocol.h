//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEShareWebViewModel, NSString, UIView, UIViewController;
@protocol IESWebViewProtocol;

@protocol AWEShareWebView <NSObject>
- (void)showPanelWithWebView:(UIView<IESWebViewProtocol> *)arg1 model:(AWEShareWebViewModel *)arg2 onViewController:(UIViewController *)arg3;
- (_Bool)canShareWebViewWithPreviousPage:(NSString *)arg1;
@end
