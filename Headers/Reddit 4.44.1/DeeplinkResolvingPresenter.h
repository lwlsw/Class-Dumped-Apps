//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSString, NSURL, NSURLSession;
@protocol DeeplinkResolvingPresentable, DeeplinkResolvingRouter;

@interface DeeplinkResolvingPresenter : NSObject <NSURLSessionTaskDelegate>
{
    id <DeeplinkResolvingRouter> _router;
    id <DeeplinkResolvingPresentable> _presentable;
    NSURL *_originalUrl;
    NSURL *_resolvedUrl;
    NSURLSession *_urlSession;
}

@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSURL *resolvedUrl; // @synthesize resolvedUrl=_resolvedUrl;
@property(retain, nonatomic) NSURL *originalUrl; // @synthesize originalUrl=_originalUrl;
@property(nonatomic) __weak id <DeeplinkResolvingPresentable> presentable; // @synthesize presentable=_presentable;
@property(retain, nonatomic) id <DeeplinkResolvingRouter> router; // @synthesize router=_router;
- (void).cxx_destruct;
- (id)parseUrlFromBranchHtml:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property(readonly, copy, nonatomic) NSString *userAgent;
- (void)deeplinkResolvingPresentableDidLoad:(id)arg1;
- (id)initWithUrl:(id)arg1 router:(id)arg2 presentable:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
