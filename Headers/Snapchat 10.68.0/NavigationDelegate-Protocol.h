//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, SCDeepLinkURL;
@protocol SCProfileTransitionCoordinator;

@protocol NavigationDelegate <NSObject>
- (void)presentOnCurrentVCAnimated:(_Bool)arg1 deepLinkURL:(SCDeepLinkURL *)arg2 additionalInfo:(NSDictionary *)arg3 completion:(void (^)(void))arg4;
- (void)presentRightVCAnimated:(_Bool)arg1 deepLinkURL:(SCDeepLinkURL *)arg2 additionalInfo:(NSDictionary *)arg3 completion:(void (^)(void))arg4;
- (void)presentMiddleVCAnimated:(_Bool)arg1 deepLinkURL:(SCDeepLinkURL *)arg2 additionalInfo:(NSDictionary *)arg3 completion:(void (^)(void))arg4;
- (void)presentLeftVCAnimated:(_Bool)arg1 deepLinkURL:(SCDeepLinkURL *)arg2 additionalInfo:(NSDictionary *)arg3 completion:(void (^)(void))arg4;
- (void)presentFarLeftVCAnimated:(_Bool)arg1 deepLinkURL:(SCDeepLinkURL *)arg2 additionalInfo:(NSDictionary *)arg3 completion:(void (^)(void))arg4;
- (id <SCProfileTransitionCoordinator>)profileTransitionCoordinator;
- (_Bool)isAtFarLeft;
- (_Bool)canPerformNavigation;

@optional
- (void)dismissAllPresentedViews;
@end
