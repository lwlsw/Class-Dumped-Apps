//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext, WKWebView;

@interface IESLiveJSContextInfo : NSObject
{
    WKWebView *_webView;
    JSContext *_context;
    id _frame;
}

@property(readonly, nonatomic) __weak id frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) __weak JSContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWebView:(id)arg1 JSContext:(id)arg2 frame:(id)arg3;

@end
