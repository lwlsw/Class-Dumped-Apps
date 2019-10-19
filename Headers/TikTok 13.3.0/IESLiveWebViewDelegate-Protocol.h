//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString, NSURLRequest, UIView;
@protocol IESLiveWebViewProtocol;

@protocol IESLiveWebViewDelegate <NSObject>
- (NSString *)webViewScene;
- (void)iesLiveWebViewClose:(UIView<IESLiveWebViewProtocol> *)arg1 closeWay:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)iesLiveWebViewClose:(UIView<IESLiveWebViewProtocol> *)arg1 keepOffline:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)iesLiveWebViewDidStartLoad:(UIView<IESLiveWebViewProtocol> *)arg1;
- (_Bool)iesLiveWebView:(UIView<IESLiveWebViewProtocol> *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2;
- (void)iesLiveWebView:(UIView<IESLiveWebViewProtocol> *)arg1 loadFailWithError:(NSError *)arg2;
- (void)iesLiveWebViewDidFinishLoad:(UIView<IESLiveWebViewProtocol> *)arg1;

@optional
- (void)iesLiveWebViewCancelLoading:(UIView<IESLiveWebViewProtocol> *)arg1;
- (void)iesLiveWebView:(UIView<IESLiveWebViewProtocol> *)arg1 setTimeStampOfWebPageWithDict:(NSDictionary *)arg2;
- (void)iesLiveWebView:(UIView<IESLiveWebViewProtocol> *)arg1 injectShareInfo:(NSDictionary *)arg2;
- (void)iesLiveWebView:(UIView<IESLiveWebViewProtocol> *)arg1 setLayoutWithSize:(struct CGSize)arg2 cornerRadius:(double)arg3 margin:(double)arg4 tapMaskToClose:(_Bool)arg5 orientation:(NSString *)arg6;
@end
